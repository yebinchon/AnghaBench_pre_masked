
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (char**,int *,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_8 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_9)
{
  CORE_ADDR VAR_10;
  int VAR_11, VAR_12;
  char *VAR_13, *VAR_14;
  int VAR_15, VAR_16, VAR_17;
  struct stat VAR_18, VAR_19;


  if (FUNC_4 (&VAR_9, &VAR_10, &VAR_11))
    {
      FUNC_5 ();
      return;
    }

  VAR_13 = FUNC_2 (VAR_11);
  VAR_12 = FUNC_9 (VAR_10, VAR_13, VAR_11);
  if (VAR_12 != VAR_11)
    {
      FUNC_5 ();
      return;
    }

  if (FUNC_4 (&VAR_9, &VAR_10, &VAR_11))
    {
      FUNC_5 ();
      return;
    }

  VAR_14 = FUNC_2 (VAR_11);
  VAR_12 = FUNC_9 (VAR_10, VAR_14, VAR_11);
  if (VAR_12 != VAR_11)
    {
      FUNC_5 ();
      return;
    }


  VAR_16 = FUNC_11 (VAR_13, &VAR_18);
  VAR_17 = FUNC_11 (VAR_14, &VAR_19);
  if ((!VAR_16 && !FUNC_1 (VAR_18.st_mode) && !FUNC_0 (VAR_18.st_mode))
      || (!VAR_17 && !FUNC_1 (VAR_19.st_mode) && !FUNC_0 (VAR_19.st_mode)))
    {
      FUNC_6 (-1, VAR_5);
      return;
    }

  VAR_8 = 1;
  VAR_15 = FUNC_10 (VAR_13, VAR_14);

  if (VAR_15 == -1)
    {



      if (VAR_7 == VAR_4)
        VAR_7 = VAR_1;
      FUNC_7 (-1);
    }
  else
    FUNC_8 (VAR_15);
}
