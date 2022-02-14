
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_ops; TYPE_1__* ops; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
struct TYPE_8__ {int length; void** offs; } ;
typedef TYPE_3__ offset_index_t ;
typedef void* apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ length; } ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static offset_index_t *
FUNC_1(const svn_txdelta_window_t *VAR_0, apr_pool_t *VAR_1)
{
  offset_index_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  apr_size_t VAR_3 = 0;
  int VAR_4;

  VAR_2->length = VAR_0->num_ops;
  VAR_2->offs = FUNC_0(VAR_1, (VAR_2->length + 1) * sizeof(*VAR_2->offs));

  for (VAR_4 = 0; VAR_4 < VAR_2->length; ++VAR_4)
    {
      VAR_2->offs[VAR_4] = VAR_3;
      VAR_3 += VAR_0->ops[VAR_4].length;
    }
  VAR_2->offs[VAR_2->length] = VAR_3;

  return VAR_2;
}
