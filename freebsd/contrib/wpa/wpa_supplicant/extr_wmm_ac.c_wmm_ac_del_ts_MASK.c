
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
typedef enum ts_dir_idx { ____Placeholder_ts_dir_idx } ts_dir_idx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct wpa_supplicant*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1, u8 VAR_2, int VAR_3)
{
 enum ts_dir_idx VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3 & FUNC_0(VAR_4)))
   continue;

  FUNC_1(VAR_1, VAR_2, VAR_4);
 }
}
