
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,char*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (struct wpa_supplicant*,int,unsigned int*,unsigned int*) ;
 int FUNC_4 (int ,char*,int,char*) ;

__attribute__((used)) static int FUNC_5(
 struct wpa_supplicant *VAR_7, char *VAR_8, char *VAR_9, size_t VAR_10)
{
 unsigned int VAR_11[100], VAR_12 = 100, VAR_13;
 int VAR_14;
 enum wpa_driver_if_type VAR_15;
 char *VAR_16, *VAR_17;

 VAR_16 = VAR_9;
 VAR_17 = VAR_9 + VAR_10;


 if (FUNC_2(VAR_8, "STATION") == 0)
  VAR_15 = VAR_5;
 else if (FUNC_2(VAR_8, "AP") == 0)
  VAR_15 = VAR_1;
 else if (FUNC_2(VAR_8, "P2P_GO") == 0)
  VAR_15 = VAR_4;
 else if (FUNC_2(VAR_8, "P2P_CLIENT") == 0)
  VAR_15 = VAR_3;
 else if (FUNC_2(VAR_8, "IBSS") == 0)
  VAR_15 = VAR_2;
 else if (FUNC_2(VAR_8, "TDLS") == 0)
  VAR_15 = VAR_6;
 else
  return -1;

 FUNC_4(VAR_0,
     "CTRL_IFACE: GET_PREF_FREQ_LIST iface_type=%d (%s)",
     VAR_15, VAR_8);

 VAR_14 = FUNC_3(VAR_7, VAR_15, &VAR_12, VAR_11);
 if (VAR_14)
  return -1;

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_0(VAR_16, VAR_17 - VAR_16, "%s%u",
      VAR_13 > 0 ? "," : "", VAR_11[VAR_13]);
  if (FUNC_1(VAR_17 - VAR_16, VAR_14))
   return -1;
  VAR_16 += VAR_14;
 }

 return VAR_16 - VAR_9;
}
