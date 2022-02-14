
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {struct hostapd_hw_modes* rates; struct hostapd_hw_modes* channels; } ;


 int FUNC_0 (struct hostapd_hw_modes*) ;

void FUNC_1(struct hostapd_hw_modes *VAR_0,
         size_t VAR_1)
{
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].channels);
  FUNC_0(VAR_0[VAR_2].rates);
 }

 FUNC_0(VAR_0);
}
