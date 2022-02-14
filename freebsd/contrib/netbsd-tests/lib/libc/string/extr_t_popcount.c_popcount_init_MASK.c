
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (FUNC_1(VAR_1, "YES") == 0 ||
     FUNC_1(VAR_1, "Y") == 0 ||
     FUNC_1(VAR_1, "1") == 0 ||
     FUNC_1(VAR_1, "T") == 0 ||
     FUNC_1(VAR_1, "TRUE") == 0) {
  for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
   VAR_0[VAR_2] = 0;
   for (VAR_3 = VAR_2; VAR_3 != 0; VAR_3 >>= 1) {
    if (VAR_3 & 1)
     ++VAR_0[VAR_2];
   }
  }
  return;
 }

 FUNC_0("config variable \"run_popcount\" not set to YES/TRUE");
}
