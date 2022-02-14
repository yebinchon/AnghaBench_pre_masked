
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_2,
                     svn_fs_t *VAR_3,
                     svn_revnum_t VAR_4,
                     apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;
  const char *VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
  FUNC_0(FUNC_2(VAR_7, &VAR_6, VAR_5));

  *VAR_2 = VAR_6 == VAR_1;
  return VAR_0;
}
