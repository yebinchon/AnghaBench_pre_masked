
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 char FUNC_5 () ;
 int FUNC_6 () ;
 char* VAR_0 ;

void
FUNC_7 (int VAR_1)
{
  char *VAR_2;
  char VAR_3;
  char *VAR_4;




  VAR_2 = VAR_0;
  VAR_3 = FUNC_5 ();
  VAR_4 = VAR_0;
  *VAR_4 = VAR_3;

  if (VAR_2 == VAR_4)
    {
      FUNC_2 (FUNC_1("expected symbol name"));
      FUNC_6 ();
      return;
    }

  FUNC_0 ();

  if (*VAR_0 != ',')
    {
      *VAR_4 = 0;
      FUNC_2 (FUNC_1("expected comma after \"%s\""), VAR_2);
      *VAR_4 = VAR_3;
      FUNC_6 ();
      return;
    }

  VAR_0++;
  *VAR_4 = 0;

  FUNC_3 (VAR_2, VAR_1);
  *VAR_4 = VAR_3;

  FUNC_4 ();
}
