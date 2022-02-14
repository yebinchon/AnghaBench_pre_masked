
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; struct loop** parray; } ;
struct loop {int parallel_p; } ;



__attribute__((used)) static void
FUNC_0 (struct loops *VAR_0)
{
  unsigned int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->num; VAR_1++)
    {
      struct loop *VAR_2 = VAR_0->parray[VAR_1];
      VAR_2->parallel_p = 1;
    }
}
