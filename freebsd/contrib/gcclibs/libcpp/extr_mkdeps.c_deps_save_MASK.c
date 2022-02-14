
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {size_t ndeps; size_t** depv; } ;
typedef int FILE ;


 int FUNC_0 (size_t*,size_t,int,int *) ;
 size_t FUNC_1 (size_t*) ;

int
FUNC_2 (struct deps *VAR_0, FILE *VAR_1)
{
  unsigned int VAR_2;





  if (FUNC_0 (&VAR_0->ndeps, sizeof (VAR_0->ndeps), 1, VAR_1) != 1)
      return -1;

  for (VAR_2 = 0; VAR_2 < VAR_0->ndeps; VAR_2++)
    {
      size_t VAR_3 = FUNC_1 (VAR_0->depv[VAR_2]);
      if (FUNC_0 (&VAR_3, sizeof (size_t), 1, VAR_1) != 1)
          return -1;
      if (FUNC_0 (VAR_0->depv[VAR_2], VAR_3, 1, VAR_1) != 1)
          return -1;
    }

  return 0;
}
