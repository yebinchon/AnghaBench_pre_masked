
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct wmm_params {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int const*,size_t,struct wmm_params const*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_supplicant *VAR_1, const u8 *VAR_2,
    size_t VAR_3, const struct wmm_params *VAR_4)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4))
  return;

 FUNC_1(VAR_0,
     "WMM AC: Valid WMM association, WMM AC is enabled");
}
