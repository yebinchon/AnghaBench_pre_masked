
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;

int
FUNC_6(char *VAR_3, int VAR_4)
{



  char *VAR_5 = FUNC_5(VAR_3);
  char *VAR_6 = VAR_5;
  struct stat VAR_7;
  int VAR_8 = 0;
  while ((VAR_6 = FUNC_4(VAR_6 + 1, '/'))) {
    *VAR_6 = '\0';
    if (FUNC_2(VAR_5, VAR_4) < 0) {
      VAR_8 = VAR_2;
    } else {
      FUNC_1("mkdir(%s)", VAR_5);
    }
    *VAR_6 = '/';
  }

  if (FUNC_2(VAR_5, VAR_4) < 0) {
    VAR_8 = VAR_2;
  } else {
    FUNC_1("mkdir(%s)", VAR_5);
  }

  FUNC_0(VAR_5);

  return FUNC_3(VAR_3, &VAR_7) == 0 &&
    (VAR_7.st_mode & VAR_1) == VAR_0 ? 0 : VAR_8;
}
