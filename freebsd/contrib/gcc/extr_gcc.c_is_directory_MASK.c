
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7 (const char *VAR_1, bool VAR_2)
{
  int VAR_3;
  char *VAR_4;
  char *VAR_5;
  struct stat VAR_6;



  VAR_3 = FUNC_5 (VAR_1);
  VAR_4 = FUNC_2 (3 + VAR_3);
  FUNC_3 (VAR_4, VAR_1, VAR_3);
  VAR_5 = VAR_4 + VAR_3;
  if (!FUNC_0 (VAR_5[-1]))
    *VAR_5++ = VAR_0;
  *VAR_5++ = '.';
  *VAR_5 = '\0';



  if (VAR_2
      && FUNC_0 (VAR_4[0])
      && ((VAR_5 - VAR_4 == 6
    && FUNC_6 (VAR_4 + 1, "lib", 3) == 0)
   || (VAR_5 - VAR_4 == 10
       && FUNC_6 (VAR_4 + 1, "usr", 3) == 0
       && FUNC_0 (VAR_4[4])
       && FUNC_6 (VAR_4 + 5, "lib", 3) == 0)))
    return 0;


  return (FUNC_4 (VAR_4, &VAR_6) >= 0 && FUNC_1 (VAR_6.st_mode));
}
