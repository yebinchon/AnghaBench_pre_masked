
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,char const*,int const*,void*,int *) ;

svn_error_t *
FUNC_1(svn_wc_context_t *VAR_0,
                             const char *VAR_1,
                             const svn_delta_editor_t *VAR_2,
                             void *VAR_3,
                             apr_pool_t *VAR_4)
{
  return FUNC_0(VAR_0->db, VAR_1,
                                               VAR_2, VAR_3, VAR_4);
}
