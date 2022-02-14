
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,char const*,char const*,char const*,char const*,int ,int ,scalar_t__,int const*,int const*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_2(svn_wc__db_t *VAR_2,
                                  const char *VAR_3,
                                  const char *VAR_4,
                                  const char *VAR_5,
                                  const char *VAR_6,
                                  svn_revnum_t VAR_7,
                                  svn_node_kind_t VAR_8,
                                  svn_wc__db_status_t VAR_9,
                                  const svn_skel_t *VAR_10,
                                  const svn_skel_t *VAR_11,
                                  apr_pool_t *VAR_12)
{
  FUNC_0(VAR_9 == VAR_1
                 || VAR_9 == VAR_0);

  return FUNC_1(
    VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
}
