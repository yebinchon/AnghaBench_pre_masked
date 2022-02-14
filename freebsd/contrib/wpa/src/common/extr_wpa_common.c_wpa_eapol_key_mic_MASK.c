
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_1 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_2 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_3 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_4 (int const*,size_t,int const*,size_t,int *) ;
 int FUNC_5 (int const*,int const*,size_t,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,char*,...) ;

int FUNC_8(const u8 *VAR_4, size_t VAR_5, int VAR_6, int VAR_7,
        const u8 *VAR_8, size_t VAR_9, u8 *VAR_10)
{
 u8 VAR_11[VAR_3];

 if (VAR_5 == 0) {
  FUNC_7(VAR_1,
      "WPA: KCK not set - cannot calculate MIC");
  return -1;
 }

 switch (VAR_7) {

 case 137:
  FUNC_7(VAR_1, "WPA: EAPOL-Key MIC using HMAC-MD5");
  return FUNC_0(VAR_4, VAR_5, VAR_8, VAR_9, VAR_10);

 case 136:
  FUNC_7(VAR_1, "WPA: EAPOL-Key MIC using HMAC-SHA1");
  if (FUNC_1(VAR_4, VAR_5, VAR_8, VAR_9, VAR_11))
   return -1;
  FUNC_6(VAR_10, VAR_11, VAR_0);
  break;





 case 138:
  switch (VAR_6) {
  default:
   FUNC_7(VAR_1,
       "WPA: EAPOL-Key MIC algorithm not known (AKM-defined - akmp=0x%x)",
       VAR_6);
   return -1;
  }
  break;
 default:
  FUNC_7(VAR_1,
      "WPA: EAPOL-Key MIC algorithm not known (ver=%d)",
      VAR_7);
  return -1;
 }

 return 0;
}
