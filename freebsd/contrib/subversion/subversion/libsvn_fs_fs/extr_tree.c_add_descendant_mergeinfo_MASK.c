
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_root_t ;
typedef int svn_fs_mergeinfo_receiver_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char const*,int *,int ,void*,int *) ;
 int FUNC_2 (int **,int *,char const*,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_root_t *VAR_1,
                         const char *VAR_2,
                         svn_fs_mergeinfo_receiver_t VAR_3,
                         void *VAR_4,
                         apr_pool_t *VAR_5)
{
  dag_node_t *VAR_6;
  svn_boolean_t VAR_7;

  FUNC_0(FUNC_2(&VAR_6, VAR_1, VAR_2, VAR_5));
  FUNC_0(FUNC_3(&VAR_7,
                                                        VAR_6));
  if (VAR_7)
    FUNC_0(FUNC_1(VAR_1,
                                              VAR_2,
                                              VAR_6,
                                              VAR_3,
                                              VAR_4,
                                              VAR_5));
  return VAR_0;
}
