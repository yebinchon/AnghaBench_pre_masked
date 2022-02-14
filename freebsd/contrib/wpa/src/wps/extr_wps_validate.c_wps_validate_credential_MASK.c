
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1[], u16 VAR_2[], size_t VAR_3,
       int VAR_4)
{
 size_t VAR_5;

 if (VAR_3 == 0) {
  if (VAR_4) {
   FUNC_0(VAR_0, "WPS-STRICT: Credential "
       "attribute missing");
   return -1;
  }
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_1(VAR_1[VAR_5], VAR_2[VAR_5]) < 0)
   return -1;
 }

 return 0;
}
