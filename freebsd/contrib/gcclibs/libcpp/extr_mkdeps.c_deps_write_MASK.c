
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {unsigned int ntargets; char** targetv; unsigned int ndeps; char** depv; } ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char,int *) ;
 unsigned int FUNC_2 (char*) ;

void
FUNC_3 (const struct deps *VAR_0, FILE *VAR_1, unsigned int VAR_2)
{
  unsigned int VAR_3, VAR_4, VAR_5;

  VAR_5 = 0;
  if (VAR_2 && VAR_2 < 34)
    VAR_2 = 34;

  for (VAR_4 = 0; VAR_4 < VAR_0->ntargets; VAR_4++)
    {
      VAR_3 = FUNC_2 (VAR_0->targetv[VAR_4]);
      VAR_5 += VAR_3;
      if (VAR_2 && VAR_5 > VAR_2)
 {
   FUNC_0 (" \\\n ", VAR_1);
   VAR_5 = 1 + VAR_3;
 }
      if (VAR_4)
 {
   FUNC_1 (' ', VAR_1);
   VAR_5++;
 }
      FUNC_0 (VAR_0->targetv[VAR_4], VAR_1);
    }

  FUNC_1 (':', VAR_1);
  FUNC_1 (' ', VAR_1);
  VAR_5 += 2;

  for (VAR_4 = 0; VAR_4 < VAR_0->ndeps; VAR_4++)
    {
      VAR_3 = FUNC_2 (VAR_0->depv[VAR_4]);
      VAR_5 += VAR_3;
      if (VAR_2 && VAR_5 > VAR_2)
 {
   FUNC_0 (" \\\n ", VAR_1);
   VAR_5 = 1 + VAR_3;
 }
      if (VAR_4)
 {
   FUNC_1 (' ', VAR_1);
   VAR_5++;
 }
      FUNC_0 (VAR_0->depv[VAR_4], VAR_1);
    }
  FUNC_1 ('\n', VAR_1);
}
