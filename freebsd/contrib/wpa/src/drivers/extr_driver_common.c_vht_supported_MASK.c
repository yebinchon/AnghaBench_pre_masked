
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {int flags; int* vht_mcs_set; } ;


 int VAR_0 ;

int FUNC_0(const struct hostapd_hw_modes *VAR_1)
{
 if (!(VAR_1->flags & VAR_0)) {




  return 1;
 }





 return (VAR_1->vht_mcs_set[0] & 0x3) != 3;
}
