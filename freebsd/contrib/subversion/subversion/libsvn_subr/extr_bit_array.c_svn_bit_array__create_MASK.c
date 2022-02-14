
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_count; void* blocks; int * pool; } ;
typedef TYPE_1__ svn_bit_array__t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

svn_bit_array__t *
FUNC_2(apr_size_t VAR_0,
                      apr_pool_t *VAR_1)
{
  svn_bit_array__t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->block_count = FUNC_1(VAR_0);
  VAR_2->pool = VAR_1;
  VAR_2->blocks = FUNC_0(VAR_1,
                              VAR_2->block_count * sizeof(*VAR_2->blocks));

  return VAR_2;
}
