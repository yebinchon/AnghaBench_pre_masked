
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int numk; int numb; int ** btypevec; int ** ktypevec; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1 (struct work_stuff *VAR_0)
{
  int VAR_1;

  while (VAR_0 -> numk > 0)
    {
      VAR_1 = --(VAR_0 -> numk);
      if (VAR_0 -> ktypevec[VAR_1] != ((void*)0))
 {
   FUNC_0 (VAR_0 -> ktypevec[VAR_1]);
   VAR_0 -> ktypevec[VAR_1] = ((void*)0);
 }
    }

  while (VAR_0 -> numb > 0)
    {
      VAR_1 = --(VAR_0 -> numb);
      if (VAR_0 -> btypevec[VAR_1] != ((void*)0))
 {
   FUNC_0 (VAR_0 -> btypevec[VAR_1]);
   VAR_0 -> btypevec[VAR_1] = ((void*)0);
 }
    }
}
