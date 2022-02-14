
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int
FUNC_6 (int VAR_1, char **VAR_2)
{
  int VAR_3;


  FUNC_5 ();

  FUNC_0 ();

  VAR_3 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_0 == VAR_1)
    FUNC_1 (1);

  for (; VAR_3 != VAR_1; VAR_3++)
    {
      FUNC_4 ();

      FUNC_3 (VAR_2[VAR_3]);
    }

  return 0;
}
