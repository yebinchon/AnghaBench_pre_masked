
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4 (const char *VAR_2)
{
  int VAR_3;

  VAR_3 = FUNC_0 (VAR_2);



  if (VAR_3 == 0)
    {
      if (VAR_1 > 0 && !FUNC_3 (VAR_0[VAR_1 - 1], "|"))
 VAR_1--;

      FUNC_2 ();

      if (VAR_1 > 0)
 VAR_3 = FUNC_1 ();
    }

  return VAR_3;
}
