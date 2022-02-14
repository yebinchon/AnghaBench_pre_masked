
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_4, int VAR_5)
{
 u16 VAR_6;

 if (VAR_4 == ((void*)0)) {
  if (VAR_5) {
   FUNC_2(VAR_0, "WPS-STRICT: Authentication Type "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 VAR_6 = FUNC_0(VAR_4);
 if ((VAR_6 & ~VAR_1) || VAR_6 == 0 ||
     (FUNC_1(VAR_6) > 1 &&
      VAR_6 != (VAR_3 | VAR_2))) {
  FUNC_2(VAR_0, "WPS-STRICT: Invalid Authentication Type "
      "attribute value 0x%04x", VAR_6);
  return -1;
 }
 return 0;
}
