
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_4, int VAR_5)
{
 if (VAR_4 == ((void*)0)) {
  if (VAR_5) {
   FUNC_0(VAR_0, "WPS-STRICT: RF Bands "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 if (*VAR_4 != VAR_1 && *VAR_4 != VAR_2 &&
     *VAR_4 != VAR_3 &&
     *VAR_4 != (VAR_1 | VAR_2 | VAR_3) &&
     *VAR_4 != (VAR_1 | VAR_2)) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid Rf Bands "
      "attribute value 0x%x", *VAR_4);
  return -1;
 }
 return 0;
}
