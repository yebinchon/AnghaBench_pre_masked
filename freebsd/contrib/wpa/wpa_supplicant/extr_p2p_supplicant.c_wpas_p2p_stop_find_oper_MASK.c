
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ scan_res_handler; TYPE_1__* global; scalar_t__ p2p_long_listen; } ;
struct TYPE_2__ {scalar_t__ p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_5)
{
 FUNC_3(VAR_5);
 VAR_5->p2p_long_listen = 0;
 FUNC_0(VAR_2, VAR_5, ((void*)0));
 FUNC_0(VAR_1, VAR_5, ((void*)0));

 if (VAR_5->global->p2p)
  FUNC_1(VAR_5->global->p2p);

 if (VAR_5->scan_res_handler == VAR_3) {
  FUNC_2(VAR_0,
      "P2P: Do not consider the scan results after stop_find");
  VAR_5->scan_res_handler = VAR_4;
 }
}
