
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (char**,long*) ;
 scalar_t__ FUNC_5 (char**,int *,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (long,int) ;
 int FUNC_9 (long) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_4 ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (char*,struct stat*) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_5)
{
  CORE_ADDR VAR_6;
  int VAR_7, VAR_8;
  long VAR_9;
  int VAR_10, VAR_11;
  mode_t VAR_12;
  char *VAR_13;
  struct stat VAR_14;


  if (FUNC_5 (&VAR_5, &VAR_6, &VAR_7))
    {
      FUNC_7 ();
      return;
    }

  if (FUNC_4 (&VAR_5, &VAR_9))
    {
      FUNC_7 ();
      return;
    }
  VAR_10 = FUNC_9 (VAR_9);

  if (FUNC_4 (&VAR_5, &VAR_9))
    {
      FUNC_7 ();
      return;
    }
  VAR_12 = FUNC_8 (VAR_9, 1);


  VAR_13 = FUNC_2 (VAR_7);
  VAR_8 = FUNC_13 (VAR_6, VAR_13, VAR_7);
  if (VAR_8 != VAR_7)
    {
      FUNC_7 ();
      return;
    }




  if (!FUNC_14 (VAR_13, &VAR_14))
    {
      if (!FUNC_1 (VAR_14.st_mode) && !FUNC_0 (VAR_14.st_mode))
 {
   FUNC_10 (-1, VAR_1);
   return;
 }
      if (FUNC_0 (VAR_14.st_mode)
   && ((VAR_10 & VAR_3) == VAR_3 || (VAR_10 & VAR_2) == VAR_2))
 {
   FUNC_10 (-1, VAR_0);
   return;
 }
    }

  VAR_4 = 1;
  VAR_11 = FUNC_3 (VAR_13, VAR_10, VAR_12);
  if (VAR_11 < 0)
    {
      FUNC_11 (-1);
      return;
    }

  VAR_11 = FUNC_6 (VAR_11);
  FUNC_12 (VAR_11);
}
