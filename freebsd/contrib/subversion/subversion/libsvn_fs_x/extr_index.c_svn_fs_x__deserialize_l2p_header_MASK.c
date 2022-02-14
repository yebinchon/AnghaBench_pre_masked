
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int page_table; int page_table_index; } ;
typedef TYPE_1__ l2p_header_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_1(void **VAR_1,
                                 void *VAR_2,
                                 apr_size_t VAR_3,
                                 apr_pool_t *VAR_4)
{
  l2p_header_t *VAR_5 = (l2p_header_t *)VAR_2;


  FUNC_0(VAR_5, (void**)&VAR_5->page_table_index);
  FUNC_0(VAR_5, (void**)&VAR_5->page_table);


  *VAR_1 = VAR_5;

  return VAR_0;
}
