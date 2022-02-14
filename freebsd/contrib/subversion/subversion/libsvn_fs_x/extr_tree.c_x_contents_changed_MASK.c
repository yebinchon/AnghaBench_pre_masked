
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
 int * FUNC_3 (int ,int *,int ,char const*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_6 (int **,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_7 (int **,TYPE_1__*,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_3,
                   svn_fs_root_t *VAR_4,
                   const char *VAR_5,
                   svn_fs_root_t *VAR_6,
                   const char *VAR_7,
                   svn_boolean_t VAR_8,
                   apr_pool_t *VAR_9)
{
  dag_node_t *VAR_10, *VAR_11;
  apr_pool_t *VAR_12 = FUNC_8(VAR_9);


  if (VAR_4->fs != VAR_6->fs)
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_1("Cannot compare file contents between two different filesystems"));

  FUNC_0(FUNC_6(&VAR_10, VAR_4, VAR_5, VAR_12, VAR_12));

  if (FUNC_4(VAR_10) != VAR_2)
    return FUNC_3
      (VAR_0, ((void*)0), FUNC_1("'%s' is not a file"), VAR_5);

  FUNC_0(FUNC_7(&VAR_11, VAR_6, VAR_7, VAR_12));

  if (FUNC_4(VAR_11) != VAR_2)
    return FUNC_3
      (VAR_0, ((void*)0), FUNC_1("'%s' is not a file"), VAR_7);

  FUNC_0(FUNC_5(((void*)0), VAR_3, VAR_10, VAR_11,
                                         VAR_8, VAR_12));

  FUNC_9(VAR_12);
  return VAR_1;
}
