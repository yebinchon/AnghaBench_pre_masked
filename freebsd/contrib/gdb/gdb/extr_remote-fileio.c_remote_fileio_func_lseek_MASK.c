
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef scalar_t__ LONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char**,long*) ;
 scalar_t__ FUNC_3 (char**,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (long,int*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10 (char *VAR_6)
{
  long VAR_7;
  LONGEST VAR_8;
  int VAR_9, VAR_10;
  off_t VAR_11, VAR_12;


  if (FUNC_2 (&VAR_6, &VAR_7))
    {
      FUNC_4 ();
      return;
    }
  VAR_9 = FUNC_5 ((int) VAR_7);
  if (VAR_9 == VAR_4)
    {
      FUNC_1 ();
      return;
    }
  else if (VAR_9 == VAR_2 || VAR_9 == VAR_3)
    {
      FUNC_6 (-1, VAR_1);
      return;
    }


  if (FUNC_3 (&VAR_6, &VAR_8))
    {
      FUNC_4 ();
      return;
    }
  VAR_11 = (off_t) VAR_8;

  if (FUNC_2 (&VAR_6, &VAR_7))
    {
      FUNC_4 ();
      return;
    }
  if (FUNC_9 (VAR_7, &VAR_10))
    {
      FUNC_6 (-1, VAR_0);
      return;
    }

  VAR_5 = 1;
  VAR_12 = FUNC_0 (VAR_9, VAR_11, VAR_10);

  if (VAR_12 == (off_t) -1)
    FUNC_7 (-1);
  else
    FUNC_8 (VAR_12);
}
