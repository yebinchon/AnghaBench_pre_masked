
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3)
{

 if (VAR_1 == 0) {
  VAR_1 = FUNC_0("%s: %s", VAR_2, VAR_3);
  return;
 }
 if ((VAR_1 + FUNC_1(VAR_3)) > VAR_0) {
  (void)FUNC_0("\n\t");
  VAR_1 = FUNC_0("%s", VAR_3) + 8;
  return;
 }
 VAR_1 += FUNC_0(" %s", VAR_3);
}
