
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {unsigned int ndeps; int * depv; } ;
typedef int FILE ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char,int *) ;

void
FUNC_2 (const struct deps *VAR_0, FILE *VAR_1)
{
  unsigned int VAR_2;

  for (VAR_2 = 1; VAR_2 < VAR_0->ndeps; VAR_2++)
    {
      FUNC_1 ('\n', VAR_1);
      FUNC_0 (VAR_0->depv[VAR_2], VAR_1);
      FUNC_1 (':', VAR_1);
      FUNC_1 ('\n', VAR_1);
    }
}
