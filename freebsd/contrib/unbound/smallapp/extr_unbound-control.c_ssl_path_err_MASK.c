
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_2 () ;
 char* FUNC_3 (unsigned long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*,char const*,char*) ;
 int FUNC_6 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(const char* VAR_4, const char *VAR_5)
{
 unsigned long VAR_6;
 VAR_6 = FUNC_2();
 if (FUNC_1(VAR_6) == VAR_0 &&
  (FUNC_0(VAR_6) == VAR_1 ||
   FUNC_0(VAR_6) == VAR_2) ) {
  FUNC_5(VAR_3, "error: %s\n%s: %s\n",
   VAR_4, VAR_5, FUNC_3(VAR_6));
  FUNC_4(1);
 } else {
  FUNC_6(VAR_4);
 }
}
