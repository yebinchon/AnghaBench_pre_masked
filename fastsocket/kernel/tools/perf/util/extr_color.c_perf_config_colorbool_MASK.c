
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_2) {
  if (!FUNC_4(VAR_2, "never"))
   return 0;
  if (!FUNC_4(VAR_2, "always"))
   return 1;
  if (!FUNC_4(VAR_2, "auto"))
   goto auto_color;
 }


 if (!FUNC_3(VAR_1, VAR_2))
  return 0;


 auto_color:
 if (VAR_3 < 0)
  VAR_3 = FUNC_1(1);
 if (VAR_3 || (FUNC_2() && VAR_0)) {
  char *VAR_4 = FUNC_0("TERM");
  if (VAR_4 && FUNC_5(VAR_4, "dumb"))
   return 1;
 }
 return 0;
}
