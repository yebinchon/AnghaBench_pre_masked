
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char**,int *,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_2)
{
  CORE_ADDR VAR_3;
  int VAR_4, VAR_5;
  char *VAR_6;
  int VAR_7;
  struct stat VAR_8;


  if (FUNC_3 (&VAR_2, &VAR_3, &VAR_4))
    {
      FUNC_4 ();
      return;
    }

  VAR_6 = FUNC_2 (VAR_4);
  VAR_5 = FUNC_8 (VAR_3, VAR_6, VAR_4);
  if (VAR_5 != VAR_4)
    {
      FUNC_4 ();
      return;
    }



  if (!FUNC_9 (VAR_6, &VAR_8) && !FUNC_1 (VAR_8.st_mode) && !FUNC_0 (VAR_8.st_mode))
    {
      FUNC_5 (-1, VAR_0);
      return;
    }

  VAR_1 = 1;
  VAR_7 = FUNC_10 (VAR_6);

  if (VAR_7 == -1)
    FUNC_6 (-1);
  else
    FUNC_7 (VAR_7);
}
