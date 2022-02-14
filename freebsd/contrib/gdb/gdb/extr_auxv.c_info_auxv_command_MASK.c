
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_3, int VAR_4)
{
  if (! VAR_2)
    FUNC_0 ("The program has no auxiliary information now.");
  else
    {
      int VAR_5 = FUNC_1 (VAR_1, &VAR_0);
      if (VAR_5 < 0)
 FUNC_0 ("No auxiliary vector found, or failed reading it.");
      else if (VAR_5 == 0)
 FUNC_0 ("Auxiliary vector is empty.");
    }
}
