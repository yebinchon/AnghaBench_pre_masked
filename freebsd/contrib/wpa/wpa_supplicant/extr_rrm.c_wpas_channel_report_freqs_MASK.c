
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_modes; int modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct oper_class_map {int mode; } ;
struct hostapd_hw_modes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*,int,int ) ;
 struct hostapd_hw_modes* FUNC_1 (int ,int ,int ) ;
 struct oper_class_map* FUNC_2 (char const*,int const) ;
 int FUNC_3 (int**,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,char*,int const) ;
 int* FUNC_6 (struct oper_class_map const*,struct hostapd_hw_modes*,int,int const*,int) ;

__attribute__((used)) static int * FUNC_7(struct wpa_supplicant *VAR_2, int VAR_3,
           const char *VAR_4, const u8 *VAR_5,
           size_t VAR_6)
{
 int *VAR_7 = ((void*)0), *VAR_8;
 const u8 *VAR_9 = VAR_5 + VAR_6;

 while (VAR_9 - VAR_5 > 2) {
  const struct oper_class_map *VAR_10;
  const u8 *VAR_11, *VAR_12;
  u8 VAR_13;
  struct hostapd_hw_modes *VAR_14;

  VAR_11 = FUNC_0(VAR_5, VAR_9 - VAR_5,
          VAR_1);
  if (!VAR_11)
   break;
  VAR_12 = VAR_11 + 2;
  VAR_13 = VAR_11[1];
  if (VAR_13 < 1)
   break;
  VAR_5 = VAR_11 + 2 + VAR_13;

  VAR_10 = FUNC_2(VAR_4, *VAR_12);
  if (!VAR_10) {
   FUNC_5(VAR_0,
       "Beacon request: unknown operating class in AP Channel Report subelement %u",
       *VAR_12);
   goto out;
  }
  VAR_12++;
  VAR_13--;

  VAR_14 = FUNC_1(VAR_2->hw.modes, VAR_2->hw.num_modes, VAR_10->mode);
  if (!VAR_14)
   continue;
  VAR_8 = FUNC_6(VAR_10, VAR_14, VAR_3, VAR_12, VAR_13);
  if (VAR_8)
   FUNC_3(&VAR_7, VAR_8);

  FUNC_4(VAR_8);
 }

 return VAR_7;
out:
 FUNC_4(VAR_7);
 return ((void*)0);
}
