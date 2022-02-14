
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__*,int ,char const*,int ,int ,int ,int *) ;

svn_error_t *
FUNC_2(svn_node_kind_t *VAR_6,
                  svn_wc_context_t *VAR_7,
                  const char *VAR_8,
                  svn_boolean_t VAR_9,
                  svn_boolean_t VAR_10,
                  apr_pool_t *VAR_11)
{
  svn_node_kind_t VAR_12;

  FUNC_0(FUNC_1(&VAR_12,
                               VAR_7->db, VAR_8,
                               VAR_1,
                               VAR_9,
                               VAR_10,
                               VAR_11));

  if (VAR_12 == VAR_2)
    *VAR_6 = VAR_2;
  else if (VAR_12 == VAR_3 || VAR_12 == VAR_5)
    *VAR_6 = VAR_3;
  else
    *VAR_6 = VAR_4;

  return VAR_0;
}
