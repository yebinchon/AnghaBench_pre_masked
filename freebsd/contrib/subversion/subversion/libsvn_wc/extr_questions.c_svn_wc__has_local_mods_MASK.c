
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int ,char const*,int ,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
                       svn_wc_context_t *VAR_2,
                       const char *VAR_3,
                       svn_boolean_t VAR_4,
                       svn_cancel_func_t VAR_5,
                       void *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;

  FUNC_0(FUNC_1(&VAR_8, ((void*)0),
                                      VAR_2->db, VAR_3,
                                      VAR_4,
                                      VAR_5, VAR_6,
                                      VAR_7));

  *VAR_1 = VAR_8;
  return VAR_0;
}
