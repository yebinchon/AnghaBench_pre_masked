
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1, size_t VAR_2,
         int VAR_3)
{
 if (VAR_1 == ((void*)0)) {
  if (VAR_3) {
   FUNC_1(VAR_0, "WPS-STRICT: Model Number "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 if (VAR_2 > 0 && VAR_1[VAR_2 - 1] == 0) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid Model Number "
      "attribute value", VAR_1, VAR_2);
  return -1;
 }
 return 0;
}
