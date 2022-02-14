
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *,int ,char const*,int *) ;

svn_error_t *
FUNC_4(svn_boolean_t *VAR_0,
                  svn_boolean_t *VAR_1,
                  svn_node_kind_t *VAR_2,
                  svn_wc_context_t *VAR_3,
                  const char *VAR_4,
                  apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_1(VAR_4));

  return FUNC_2(FUNC_3(VAR_0,VAR_1, VAR_2,
                                                VAR_3->db, VAR_4,
                                                VAR_5));
}
