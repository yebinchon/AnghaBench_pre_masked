
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct badness_vector {int* rank; } ;
typedef enum oload_classification { ____Placeholder_oload_classification } oload_classification ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum oload_classification
FUNC_0 (struct badness_vector *VAR_3,
        int VAR_4,
        int VAR_5)
{
  int VAR_6;

  for (VAR_6 = 1; VAR_6 <= VAR_4 - VAR_5; VAR_6++)
    {
      if (VAR_3->rank[VAR_6] >= 100)
 return VAR_0;
      else if (VAR_3->rank[VAR_6] >= 10)
 return VAR_1;
    }

  return VAR_2;
}
