
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* variable ;
struct TYPE_5__ {int n_var_parts; TYPE_1__* var_part; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
typedef scalar_t__ HOST_WIDE_INT ;



__attribute__((used)) static inline int
FUNC_0 (variable VAR_0, HOST_WIDE_INT VAR_1,
        int *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;


  VAR_4 = 0;
  VAR_5 = VAR_0->n_var_parts;
  while (VAR_4 != VAR_5)
    {
      VAR_3 = (VAR_4 + VAR_5) / 2;
      if (VAR_0->var_part[VAR_3].offset < VAR_1)
 VAR_4 = VAR_3 + 1;
      else
 VAR_5 = VAR_3;
    }
  VAR_3 = VAR_4;

  if (VAR_2)
    *VAR_2 = VAR_3;

  if (VAR_3 < VAR_0->n_var_parts && VAR_0->var_part[VAR_3].offset == VAR_1)
    return VAR_3;

  return -1;
}
