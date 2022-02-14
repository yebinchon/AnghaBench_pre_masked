
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {int wpa; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ,int *,int *) ;
 int FUNC_1 (int ,char*,int*,int) ;
 int FUNC_2 (int ,char*,int*,int) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_6,
     const u8 *VAR_7, u16 VAR_8)
{
 u8 *VAR_9, *VAR_10;
 u8 VAR_11;

 FUNC_0(VAR_6, VAR_2, VAR_6->bssid,
    ((void*)0), ((void*)0));




 VAR_9 = (u8 *) VAR_7 + 1 + 2;
 VAR_10 = VAR_9 + VAR_8;
 FUNC_2(VAR_0, "WNM: Key Data", VAR_9, VAR_8);

 if (VAR_8 && !FUNC_5(VAR_6->wpa)) {
  FUNC_3(VAR_6, VAR_1,
   "WNM: Ignore Key Data in WNM-Sleep Mode Response - PMF not enabled");
  return;
 }

 while (VAR_10 - VAR_9 > 1) {
  if (2 + VAR_9[1] > VAR_10 - VAR_9) {
   FUNC_4(VAR_0, "WNM: Invalid Key Data element "
       "length");
   if (VAR_10 > VAR_9) {
    FUNC_1(VAR_0, "WNM: Remaining data",
         VAR_9, VAR_10 - VAR_9);
   }
   break;
  }
  if (*VAR_9 == VAR_3) {
   if (VAR_9[1] < 11 + 5) {
    FUNC_4(VAR_0, "WNM: Too short GTK "
        "subelem");
    break;
   }
   VAR_11 = *(VAR_9 + 4);
   if (VAR_9[1] < 11 + VAR_11 ||
       VAR_11 < 5 || VAR_11 > 32) {
    FUNC_4(VAR_0, "WNM: Invalid GTK "
        "subelem");
    break;
   }
   FUNC_6(
    VAR_6->wpa,
    VAR_3,
    VAR_9);
   VAR_9 += 13 + VAR_11;
  } else
   break;
 }
}
