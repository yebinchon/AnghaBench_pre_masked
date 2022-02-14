
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; } ;
struct hostapd_data {int started; } ;


 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_data*) ;

void FUNC_2(struct hostapd_iface *VAR_0)
{
 size_t VAR_1;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_bss; VAR_1++) {
  struct hostapd_data *VAR_2 = VAR_0->bss[VAR_1];

  if (!VAR_2->started)
   continue;


  FUNC_1(VAR_2);

 }
}
