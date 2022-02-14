
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* VAR_0 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int *,char) ;
 char* FUNC_7 (int *) ;

char *
FUNC_8 (int *VAR_2)
{
  register unsigned int VAR_3;
  register int VAR_4;
  char *VAR_5;

  VAR_4 = 0;
  FUNC_0 ();
  if (*VAR_0 == '\"')
    {
      VAR_0++;

      while (FUNC_4 (VAR_3 = FUNC_5 ()))
 {
   FUNC_6 (&VAR_1, VAR_3);
   VAR_4++;
 }


      FUNC_6 (&VAR_1, '\0');
      VAR_5 = FUNC_7 (&VAR_1);
    }
  else
    {
      FUNC_2 (FUNC_1("missing string"));
      VAR_5 = ((void*)0);
      FUNC_3 ();
    }
  *VAR_2 = VAR_4;
  return (VAR_5);
}
