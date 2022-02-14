
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 char FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ VAR_7 ;

int
FUNC_6(const char *VAR_8)
{
 int VAR_9;
 char VAR_10;

 if (VAR_3)
  FUNC_3("INTERNAL ERROR: GOT TO reply()");
 VAR_9 = !FUNC_5(VAR_8, "CONTINUE");
 FUNC_4("\n");
 if (!VAR_9 && (VAR_2 || (VAR_1 < 0 && VAR_0 == 0))) {
  FUNC_4("%s? no\n\n", VAR_8);
  VAR_4 = 0;
  return (0);
 }
 if (VAR_7 || (VAR_9 && VAR_2)) {
  FUNC_4("%s? yes\n\n", VAR_8);
  return (1);
 }
 do {
  FUNC_4("%s? [yn] ", VAR_8);
  (void) FUNC_1(VAR_6);
  VAR_10 = FUNC_2(VAR_5);
  while (VAR_10 != '\n' && FUNC_2(VAR_5) != '\n') {
   if (FUNC_0(VAR_5)) {
    VAR_4 = 0;
    return (0);
   }
  }
 } while (VAR_10 != 'y' && VAR_10 != 'Y' && VAR_10 != 'n' && VAR_10 != 'N');
 FUNC_4("\n");
 if (VAR_10 == 'y' || VAR_10 == 'Y')
  return (1);
 VAR_4 = 0;
 return (0);
}
