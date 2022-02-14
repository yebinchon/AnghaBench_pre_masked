
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int intmax_t ;


 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1, off_t VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6;

 for (VAR_4 = 0, VAR_6 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(VAR_6, VAR_4)) {
   FUNC_1("%jd", (intmax_t)(VAR_4 + VAR_2));
   if (VAR_3 < 2) {
    VAR_5 = VAR_4;
    while ((VAR_4+1)<VAR_1 && FUNC_0(VAR_6, VAR_4+1))
     VAR_4++;
    if (VAR_4 != VAR_5)
     FUNC_1("-%jd", (intmax_t)(VAR_4 + VAR_2));
   }
   FUNC_1("\n");
  }
 }
}
