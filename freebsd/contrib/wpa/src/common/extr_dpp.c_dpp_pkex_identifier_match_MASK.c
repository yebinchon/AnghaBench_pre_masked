
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_1, u16 VAR_2,
         const char *VAR_3)
{
 if (!VAR_1 && VAR_3) {
  FUNC_2(VAR_0,
      "DPP: No PKEX code identifier received, but expected one");
  return 0;
 }

 if (VAR_1 && !VAR_3) {
  FUNC_2(VAR_0,
      "DPP: PKEX code identifier received, but not expecting one");
  return 0;
 }

 if (VAR_1 && VAR_3 &&
     (FUNC_1(VAR_3) != VAR_2 ||
      FUNC_0(VAR_3, VAR_1, VAR_2) != 0)) {
  FUNC_2(VAR_0, "DPP: PKEX code identifier mismatch");
  return 0;
 }

 return 1;
}
