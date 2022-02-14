
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelts; int nalloc; int * pool; int items; scalar_t__ elts; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef TYPE_1__ apr_array_header_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_1(void **VAR_1,
                               void *VAR_2,
                               apr_size_t VAR_3,
                               apr_pool_t *VAR_4)
{
  apr_array_header_t *VAR_5 = (apr_array_header_t *)VAR_2;
  svn_fs_x__p2l_entry_t *VAR_6;
  int VAR_7;


  FUNC_0(VAR_5, (void**)&VAR_5->elts);


  VAR_6 = (svn_fs_x__p2l_entry_t *)VAR_5->elts;
  for (VAR_7 = 0; VAR_7 < VAR_5->nelts; ++VAR_7)
    FUNC_0(VAR_6, (void**)&VAR_6[VAR_7].items);


  VAR_5->pool = VAR_4;
  VAR_5->nalloc = VAR_5->nelts;


  *VAR_1 = VAR_5;

  return VAR_0;
}
