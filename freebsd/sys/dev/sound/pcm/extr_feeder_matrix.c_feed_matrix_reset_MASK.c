
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct feed_matrix_info {TYPE_1__* matrix; } ;
struct TYPE_2__ {int mul; scalar_t__ shift; int * chn; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct feed_matrix_info *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < (sizeof(VAR_1->matrix) / sizeof(VAR_1->matrix[0])); VAR_2++) {
  for (VAR_3 = 0;
      VAR_3 < (sizeof(VAR_1->matrix[VAR_2].chn) /
      sizeof(VAR_1->matrix[VAR_2].chn[0])); VAR_3++) {
   VAR_1->matrix[VAR_2].chn[VAR_3] = VAR_0;
  }
  VAR_1->matrix[VAR_2].mul = 1;
  VAR_1->matrix[VAR_2].shift = 0;
 }
}
