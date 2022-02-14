
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

void
FUNC_7 (char *VAR_2, int VAR_3)
{
  FUNC_0 ();

  if (VAR_2 == 0)
    {
      if (VAR_3 && FUNC_4 ("Reinitialize source path to empty? "))
 {
   FUNC_6 (VAR_1);
   FUNC_2 ();
 }
    }
  else
    {
      FUNC_3 (VAR_2, &VAR_1);
      VAR_0 = ((void*)0);
    }
  if (VAR_3)
    FUNC_5 ((char *) 0, VAR_3);
  FUNC_1 ();
}
