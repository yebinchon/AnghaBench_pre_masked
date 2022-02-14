
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_supplicant {scalar_t__** tspecs; } ;
typedef enum ts_dir_idx { ____Placeholder_ts_dir_idx } ts_dir_idx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_2, u8 VAR_3,
       enum ts_dir_idx *VAR_4)
{
 int VAR_5;
 enum ts_dir_idx VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_2->tspecs[VAR_5][VAR_6] &&
       FUNC_0(VAR_2->tspecs[VAR_5][VAR_6]) == VAR_3) {
    if (VAR_4)
     *VAR_4 = VAR_6;
    return VAR_5;
   }
  }
 }

 return -1;
}
