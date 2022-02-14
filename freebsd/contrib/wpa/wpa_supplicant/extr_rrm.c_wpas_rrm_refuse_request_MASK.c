
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_4__ {int token; } ;
struct TYPE_3__ {int dst_addr; } ;
struct wpa_supplicant {TYPE_2__ beacon_rep_data; TYPE_1__ rrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_4 (struct wpabuf**,int ,int ,int ,int *,int ) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpabuf*) ;

void FUNC_6(struct wpa_supplicant *VAR_3)
{
 if (!FUNC_0(VAR_3->rrm.dst_addr)) {
  struct wpabuf *VAR_4 = ((void*)0);

  if (FUNC_4(&VAR_4, VAR_3->beacon_rep_data.token,
      VAR_0,
      VAR_1, ((void*)0), 0)) {
   FUNC_1(VAR_2, "RRM: Memory allocation failed");
   FUNC_2(VAR_4);
   return;
  }

  FUNC_5(VAR_3, VAR_4);
  FUNC_2(VAR_4);
 }

 FUNC_3(VAR_3);
}
