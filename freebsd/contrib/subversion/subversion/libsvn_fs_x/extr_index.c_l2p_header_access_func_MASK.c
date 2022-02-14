
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int l2p_page_table_entry_t ;
struct TYPE_4__ {int page_table_index; int page_table; } ;
typedef TYPE_1__ l2p_header_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (void*,TYPE_1__ const*,int const*,int const*,int *) ;
 void* FUNC_1 (TYPE_1__ const*,void const* const*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_0,
                       const void *VAR_1,
                       apr_size_t VAR_2,
                       void *VAR_3,
                       apr_pool_t *VAR_4)
{

  const l2p_header_t *VAR_5 = VAR_1;
  const l2p_page_table_entry_t *VAR_6
    = FUNC_1(VAR_5,
                                 (const void *const *)&VAR_5->page_table);
  const apr_size_t *VAR_7
    = FUNC_1(VAR_5,
                           (const void *const *)&VAR_5->page_table_index);


  return FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7,
                         VAR_4);
}
