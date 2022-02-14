
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int key_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(int VAR_15, char *VAR_16,
           struct wpa_driver_capa *VAR_17,
           char *VAR_18, size_t VAR_19)
{
 int VAR_20;
 char *VAR_21, *VAR_22;
 size_t VAR_23;

 VAR_21 = VAR_18;
 VAR_22 = VAR_21 + VAR_19;

 if (VAR_15 < 0) {
  if (VAR_16)
   return 0;
  VAR_23 = FUNC_2(VAR_18, "WPA-PSK WPA-EAP IEEE8021X WPA-NONE "
     "NONE", VAR_19);
  if (VAR_23 >= VAR_19)
   return -1;
  return VAR_23;
 }

 VAR_20 = FUNC_0(VAR_21, VAR_22 - VAR_21, "NONE IEEE8021X");
 if (FUNC_1(VAR_22 - VAR_21, VAR_20))
  return VAR_21 - VAR_18;
 VAR_21 += VAR_20;

 if (VAR_17->key_mgmt & (VAR_10 |
         VAR_11)) {
  VAR_20 = FUNC_0(VAR_21, VAR_22 - VAR_21, " WPA-EAP");
  if (FUNC_1(VAR_22 - VAR_21, VAR_20))
   return VAR_21 - VAR_18;
  VAR_21 += VAR_20;
 }

 if (VAR_17->key_mgmt & (VAR_14 |
         VAR_12)) {
  VAR_20 = FUNC_0(VAR_21, VAR_22 - VAR_21, " WPA-PSK");
  if (FUNC_1(VAR_22 - VAR_21, VAR_20))
   return VAR_21 - VAR_18;
  VAR_21 += VAR_20;
 }

 if (VAR_17->key_mgmt & VAR_13) {
  VAR_20 = FUNC_0(VAR_21, VAR_22 - VAR_21, " WPA-NONE");
  if (FUNC_1(VAR_22 - VAR_21, VAR_20))
   return VAR_21 - VAR_18;
  VAR_21 += VAR_20;
 }
 return VAR_21 - VAR_18;
}
