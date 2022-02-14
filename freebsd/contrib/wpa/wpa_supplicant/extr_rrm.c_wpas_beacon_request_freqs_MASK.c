
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_modes; int modes; } ;
struct wpa_supplicant {TYPE_1__ hw; int current_bss; } ;
struct oper_class_map {int mode; } ;
struct hostapd_hw_modes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostapd_hw_modes* FUNC_0 (int ,int ,int ) ;
 struct oper_class_map* FUNC_1 (char const*,int) ;
 int FUNC_2 (int**,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int* FUNC_7 (struct oper_class_map const*,struct hostapd_hw_modes*,int,int*,int) ;
 int* FUNC_8 (struct wpa_supplicant*,int,char const*,int const*,size_t) ;
 int* FUNC_9 (struct oper_class_map const*,struct hostapd_hw_modes*,int) ;

__attribute__((used)) static int * FUNC_10(struct wpa_supplicant *VAR_2,
           u8 VAR_3, u8 VAR_4, int VAR_5,
           const u8 *VAR_6, size_t VAR_7)
{
 int *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct hostapd_hw_modes *VAR_10;
 const char *VAR_11 = ((void*)0);
 const struct oper_class_map *VAR_12;
 const u8 *VAR_13;

 if (!VAR_2->current_bss)
  return ((void*)0);
 VAR_13 = FUNC_5(VAR_2->current_bss, VAR_1);
 if (VAR_13 && VAR_13[1] >= 2)
  VAR_11 = (const char *) (VAR_13 + 2);

 VAR_12 = FUNC_1(VAR_11, VAR_3);
 if (!VAR_12) {
  FUNC_6(VAR_0,
      "Beacon request: invalid operating class %d",
      VAR_3);
  return ((void*)0);
 }

 VAR_10 = FUNC_0(VAR_2->hw.modes, VAR_2->hw.num_modes, VAR_12->mode);
 if (!VAR_10)
  return ((void*)0);

 switch (VAR_4) {
 case 0:
  VAR_8 = FUNC_9(VAR_12, VAR_10, VAR_5);
  if (!VAR_8)
   return ((void*)0);
  break;
 case 255:

  break;
 default:
  VAR_8 = FUNC_7(VAR_12, VAR_10, VAR_5, &VAR_4, 1);
  if (!VAR_8)
   return ((void*)0);
  break;
 }

 VAR_9 = FUNC_8(VAR_2, VAR_5, VAR_11, VAR_6,
           VAR_7);
 if (VAR_9) {
  FUNC_2(&VAR_8, VAR_9);
  FUNC_4(VAR_9);
  FUNC_3(VAR_8);
 }

 return VAR_8;
}
