
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_0, int VAR_1)
{

  FUNC_1 ();
  if (VAR_0 != (char *) ((void*)0))
    {
      int VAR_2;

      VAR_2 = FUNC_0 (VAR_0);
      if (VAR_2 > 0)
 FUNC_2 (VAR_2);
      else
 FUNC_3 ("Tab widths greater than 0 must be specified.\n");
    }
}
