
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1, int VAR_2)
{
 u16 VAR_3;
 if (VAR_1 == ((void*)0)) {
  if (VAR_2) {
   FUNC_1(VAR_0, "WPS-STRICT: Association State "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 > 4) {
  FUNC_1(VAR_0, "WPS-STRICT: Invalid Association State "
      "attribute value 0x%04x", VAR_3);
  return -1;
 }
 return 0;
}
