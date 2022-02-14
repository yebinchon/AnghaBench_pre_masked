
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {scalar_t__** tspecs; } ;
typedef enum ts_dir_idx { ____Placeholder_ts_dir_idx } ts_dir_idx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (struct wpa_supplicant*,int,int*) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_5,
        u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 enum ts_dir_idx VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = 0;

 VAR_10 = FUNC_1(VAR_5, VAR_6, &VAR_9);
 if (VAR_10 >= 0) {
  if (VAR_10 != VAR_7) {
   FUNC_2(VAR_0,
       "WMM AC: TSID %i already exists on different ac (%d)",
       VAR_6, VAR_10);
   return -1;
  }


  VAR_12 |= FUNC_0(VAR_9);
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_5->tspecs[VAR_7][VAR_9])
   VAR_11 |= FUNC_0(VAR_9);
 }

 switch (VAR_8) {
 case 128:

  VAR_12 |= VAR_11 & (FUNC_0(VAR_4) |
          FUNC_0(VAR_1));
  break;
 case 129:

  VAR_12 |= VAR_11 & (FUNC_0(VAR_3) |
          FUNC_0(VAR_1));
  break;
 case 130:

  VAR_12 |= VAR_11;
  break;
 default:
  return -1;
 }

 return VAR_12;
}
