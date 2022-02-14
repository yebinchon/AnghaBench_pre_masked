
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_fs_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char const*,int *) ;
 int * FUNC_1 (int *,int const*,int ,int const*,int ,int ,int ,int ,int ,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_0,
           const svn_fs_fs__id_part_t *VAR_1,
           const char *VAR_2,
           const svn_fs_id_t *VAR_3,
           svn_fs_path_change_kind_t VAR_4,
           svn_boolean_t VAR_5,
           svn_boolean_t VAR_6,
           svn_boolean_t VAR_7,
           svn_node_kind_t VAR_8,
           svn_revnum_t VAR_9,
           const char *VAR_10,
           apr_pool_t *VAR_11)
{
  return FUNC_1(VAR_0, VAR_1,
                               FUNC_0(VAR_2, VAR_11),
                               VAR_3, VAR_4,
                               VAR_5, VAR_6, VAR_7,
                               VAR_8, VAR_9, VAR_10,
                               VAR_11);
}
