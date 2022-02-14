
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* node; } ;
typedef TYPE_2__ switch_t ;
struct TYPE_4__ {int** matrix; unsigned int num_links; int* axes; } ;



__attribute__((used)) static inline int FUNC_0(switch_t *VAR_0, int VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4 = 1 + (1 ^ (VAR_1 - 1));

 if (!VAR_0->node->matrix)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->node->num_links; VAR_2++) {
  if (VAR_0->node->axes[VAR_2] == VAR_1) {
   for (VAR_3 = 0; VAR_3 < VAR_0->node->num_links; VAR_3++) {
    if (VAR_3 == VAR_2)
     continue;
    if (VAR_0->node->matrix[VAR_2][VAR_3] != 2)
     return VAR_4;
   }

   return VAR_1;
  }
 }

 return 0;
}
