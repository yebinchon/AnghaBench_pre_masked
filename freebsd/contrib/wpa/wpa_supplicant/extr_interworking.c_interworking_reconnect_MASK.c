
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; int reassociate; unsigned int interworking_fast_assoc_tried; scalar_t__ disconnected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->wpa_state >= VAR_1) {
  FUNC_0(VAR_2);
  VAR_2->own_disconnect_req = 1;
  FUNC_1(VAR_2,
           VAR_0);
 }
 VAR_2->disconnected = 0;
 VAR_2->reassociate = 1;
 VAR_3 = VAR_2->interworking_fast_assoc_tried;
 VAR_2->interworking_fast_assoc_tried = 1;

 if (!VAR_3 && FUNC_2(VAR_2) >= 0)
  return;

 VAR_2->interworking_fast_assoc_tried = 0;
 FUNC_3(VAR_2, 0, 0);
}
