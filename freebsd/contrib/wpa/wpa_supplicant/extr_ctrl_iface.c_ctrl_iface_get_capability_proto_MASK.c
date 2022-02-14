
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int key_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(int VAR_4, char *VAR_5,
        struct wpa_driver_capa *VAR_6,
        char *VAR_7, size_t VAR_8)
{
 int VAR_9;
 char *VAR_10, *VAR_11;
 size_t VAR_12;

 VAR_10 = VAR_7;
 VAR_11 = VAR_10 + VAR_8;

 if (VAR_4 < 0) {
  if (VAR_5)
   return 0;
  VAR_12 = FUNC_2(VAR_7, "RSN WPA", VAR_8);
  if (VAR_12 >= VAR_8)
   return -1;
  return VAR_12;
 }

 if (VAR_6->key_mgmt & (VAR_1 |
         VAR_2)) {
  VAR_9 = FUNC_0(VAR_10, VAR_11 - VAR_10, "%sRSN",
      VAR_10 == VAR_7 ? "" : " ");
  if (FUNC_1(VAR_11 - VAR_10, VAR_9))
   return VAR_10 - VAR_7;
  VAR_10 += VAR_9;
 }

 if (VAR_6->key_mgmt & (VAR_0 |
         VAR_3)) {
  VAR_9 = FUNC_0(VAR_10, VAR_11 - VAR_10, "%sWPA",
      VAR_10 == VAR_7 ? "" : " ");
  if (FUNC_1(VAR_11 - VAR_10, VAR_9))
   return VAR_10 - VAR_7;
  VAR_10 += VAR_9;
 }

 return VAR_10 - VAR_7;
}
