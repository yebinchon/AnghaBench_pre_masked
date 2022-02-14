
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_3, int VAR_4)
{
 if (VAR_3 == ((void*)0)) {
  if (VAR_4) {
   FUNC_0(VAR_0, "WPS-STRICT: Message Type "
       "attribute missing");
   return -1;
  }
  return 0;
 }
 if (*VAR_3 < VAR_1 || *VAR_3 > VAR_2) {
  FUNC_0(VAR_0, "WPS-STRICT: Invalid Message Type "
      "attribute value 0x%x", *VAR_3);
  return -1;
 }
 return 0;
}
