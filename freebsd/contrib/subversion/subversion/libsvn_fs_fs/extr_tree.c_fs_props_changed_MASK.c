
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int *,int *,int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_boolean_t *VAR_1,
                 svn_fs_root_t *VAR_2,
                 const char *VAR_3,
                 svn_fs_root_t *VAR_4,
                 const char *VAR_5,
                 svn_boolean_t VAR_6,
                 apr_pool_t *VAR_7)
{
  dag_node_t *VAR_8, *VAR_9;


  if (VAR_2->fs != VAR_4->fs)
    return FUNC_3
      (VAR_0, ((void*)0),
       FUNC_1("Cannot compare property value between two different filesystems"));

  FUNC_0(FUNC_2(&VAR_8, VAR_2, VAR_3, VAR_7));
  FUNC_0(FUNC_2(&VAR_9, VAR_4, VAR_5, VAR_7));
  return FUNC_4(VAR_1, ((void*)0),
                                         VAR_8, VAR_9, VAR_6, VAR_7);
}
