
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int drv_flags; } ;
struct wpa_driver_capa {int auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_4,
           int VAR_5, char *VAR_6,
           struct wpa_driver_capa *VAR_7,
           char *VAR_8, size_t VAR_9)
{
 int VAR_10;
 char *VAR_11, *VAR_12;
 size_t VAR_13;

 VAR_11 = VAR_8;
 VAR_12 = VAR_11 + VAR_9;

 if (VAR_5 < 0) {
  if (VAR_6)
   return 0;
  VAR_13 = FUNC_2(VAR_8, "OPEN SHARED LEAP", VAR_9);
  if (VAR_13 >= VAR_9)
   return -1;
  return VAR_13;
 }

 if (VAR_7->auth & (VAR_1)) {
  VAR_10 = FUNC_0(VAR_11, VAR_12 - VAR_11, "%sOPEN",
      VAR_11 == VAR_8 ? "" : " ");
  if (FUNC_1(VAR_12 - VAR_11, VAR_10))
   return VAR_11 - VAR_8;
  VAR_11 += VAR_10;
 }

 if (VAR_7->auth & (VAR_2)) {
  VAR_10 = FUNC_0(VAR_11, VAR_12 - VAR_11, "%sSHARED",
      VAR_11 == VAR_8 ? "" : " ");
  if (FUNC_1(VAR_12 - VAR_11, VAR_10))
   return VAR_11 - VAR_8;
  VAR_11 += VAR_10;
 }

 if (VAR_7->auth & (VAR_0)) {
  VAR_10 = FUNC_0(VAR_11, VAR_12 - VAR_11, "%sLEAP",
      VAR_11 == VAR_8 ? "" : " ");
  if (FUNC_1(VAR_12 - VAR_11, VAR_10))
   return VAR_11 - VAR_8;
  VAR_11 += VAR_10;
 }
 return VAR_11 - VAR_8;
}
