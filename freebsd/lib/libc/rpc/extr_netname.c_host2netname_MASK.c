
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hostname ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

int
FUNC_4(char VAR_3[VAR_1 + 1], const char *VAR_4, const char *VAR_5)
{
 char *VAR_6;
 char VAR_7[VAR_0+1];

 if (VAR_5 == ((void*)0)) {
  if (FUNC_0(&VAR_6) != 0) {
   return (0);
  }
  VAR_5 = VAR_6;
 }
 if (VAR_4 == ((void*)0)) {
  (void) FUNC_1(VAR_7, sizeof(VAR_7));
  VAR_4 = VAR_7;
 }
 if (FUNC_3(VAR_5) + 1 + FUNC_3(VAR_4) + 1 + FUNC_3(VAR_2) > VAR_1) {
  return (0);
 }
 (void) FUNC_2(VAR_3, "%s.%s@%s", VAR_2, VAR_4, VAR_5);
 return (1);
}
