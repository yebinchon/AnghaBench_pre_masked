
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_4 (int **,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_5 (int **,TYPE_1__*,char const*,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_boolean_t *VAR_2,
                svn_fs_root_t *VAR_3,
                const char *VAR_4,
                svn_fs_root_t *VAR_5,
                const char *VAR_6,
                svn_boolean_t VAR_7,
                apr_pool_t *VAR_8)
{
  dag_node_t *VAR_9, *VAR_10;
  apr_pool_t *VAR_11 = FUNC_6(VAR_8);


  if (VAR_3->fs != VAR_5->fs)
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_1("Cannot compare property value between two different filesystems"));

  FUNC_0(FUNC_4(&VAR_9, VAR_3, VAR_4, VAR_11, VAR_11));
  FUNC_0(FUNC_5(&VAR_10, VAR_5, VAR_6, VAR_11));
  FUNC_0(FUNC_3(VAR_2, ((void*)0), VAR_9, VAR_10,
                                         VAR_7, VAR_11));
  FUNC_7(VAR_11);

  return VAR_1;
}
