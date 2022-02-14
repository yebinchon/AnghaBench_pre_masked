
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;

void
FUNC_7(char *VAR_7)
{
  char *VAR_8 = FUNC_6(VAR_7);
  char *VAR_9;

  do {
    struct stat VAR_10;





    if (FUNC_4(VAR_8, &VAR_10) == 0 && (VAR_10.st_mode & 0200) == 0) {
      if (FUNC_3(VAR_8) < 0) {
 if (VAR_6 != VAR_3 &&
     VAR_6 != VAR_0 &&
     VAR_6 != VAR_1 &&
     VAR_6 != VAR_4 &&
     VAR_6 != VAR_2)
   FUNC_2(VAR_5, "rmdir(%s): %m", VAR_8);
 break;
      } else {
 FUNC_1("rmdir(%s)", VAR_8);
      }
    } else {
      break;
    }

    VAR_9 = FUNC_5(VAR_8, '/');
    if (VAR_9)
      *VAR_9 = '\0';
  } while (VAR_9 && VAR_9 > VAR_8);

  FUNC_0(VAR_8);
}
