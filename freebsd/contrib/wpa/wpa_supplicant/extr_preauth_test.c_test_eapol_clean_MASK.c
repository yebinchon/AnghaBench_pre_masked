
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; int * ctrl_iface; int scard; int wpa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_0)
{
 FUNC_1(VAR_0->wpa);
 FUNC_0(VAR_0->wpa);
 FUNC_4(VAR_0->wpa);
 FUNC_2(VAR_0->scard);
 if (VAR_0->ctrl_iface) {
  FUNC_5(VAR_0->ctrl_iface);
  VAR_0->ctrl_iface = ((void*)0);
 }
 FUNC_3(VAR_0->conf);
}
