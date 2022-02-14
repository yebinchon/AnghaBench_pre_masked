
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct badness_vector {int length; int* rank; } ;



int
FUNC_0 (struct badness_vector *VAR_0, struct badness_vector *VAR_1)
{
  int VAR_2;
  int VAR_3;
  short VAR_4 = 0;
  short VAR_5 = 0;


  if (VAR_0->length != VAR_1->length)
    return 1;


  for (VAR_2 = 0; VAR_2 < VAR_0->length; VAR_2++)
    {
      VAR_3 = VAR_0->rank[VAR_2] - VAR_1->rank[VAR_2];
      if (VAR_3 > 0)
 VAR_4 = 1;
      else if (VAR_3 < 0)
 VAR_5 = 1;
    }

  if (VAR_4)
    {
      if (VAR_5)
 return 1;
      else
 return 3;
    }
  else

    {
      if (VAR_5)
 return 2;
      else
 return 0;
    }
}
