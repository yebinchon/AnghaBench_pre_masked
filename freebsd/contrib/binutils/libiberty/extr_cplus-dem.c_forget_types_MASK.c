
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int ntypes; int ** typevec; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1 (struct work_stuff *VAR_0)
{
  int VAR_1;

  while (VAR_0 -> ntypes > 0)
    {
      VAR_1 = --(VAR_0 -> ntypes);
      if (VAR_0 -> typevec[VAR_1] != ((void*)0))
 {
   FUNC_0 (VAR_0 -> typevec[VAR_1]);
   VAR_0 -> typevec[VAR_1] = ((void*)0);
 }
    }
}
