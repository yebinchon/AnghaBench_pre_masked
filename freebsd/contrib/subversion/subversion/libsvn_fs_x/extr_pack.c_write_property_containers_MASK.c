
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {int info_pool; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_10__ {int elt_size; } ;
typedef TYPE_2__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(pack_context_t *VAR_1,
                          apr_array_header_t *VAR_2,
                          apr_file_t *VAR_3,
                          apr_pool_t *VAR_4)
{
  apr_array_header_t *VAR_5
    = FUNC_1(VAR_1->info_pool, 16, VAR_2->elt_size);

  FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5,
                                VAR_4));

  *VAR_2 = *VAR_5;

  return VAR_0;
}
