
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_5__ {scalar_t__ fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct things_changed_args {char const* path1; char const* path2; int strict; int * pool; int * changed_p; TYPE_1__* root2; TYPE_1__* root1; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*,char const*,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int * FUNC_5 (scalar_t__,int ,struct things_changed_args*,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_4,
                      svn_fs_root_t *VAR_5,
                      const char *VAR_6,
                      svn_fs_root_t *VAR_7,
                      const char *VAR_8,
                      svn_boolean_t VAR_9,
                      apr_pool_t *VAR_10)
{
  struct things_changed_args VAR_11;


  if (VAR_5->fs != VAR_7->fs)
    return FUNC_3
      (VAR_0, ((void*)0),
       FUNC_1("Cannot compare file contents between two different filesystems"));


  {
    svn_node_kind_t VAR_12;

    FUNC_0(FUNC_2(&VAR_12, VAR_5, VAR_6, VAR_10));
    if (VAR_12 != VAR_2)
      return FUNC_4
        (VAR_0, ((void*)0), FUNC_1("'%s' is not a file"), VAR_6);

    FUNC_0(FUNC_2(&VAR_12, VAR_7, VAR_8, VAR_10));
    if (VAR_12 != VAR_2)
      return FUNC_4
        (VAR_0, ((void*)0), FUNC_1("'%s' is not a file"), VAR_8);
  }

  VAR_11.root1 = VAR_5;
  VAR_11.root2 = VAR_7;
  VAR_11.path1 = VAR_6;
  VAR_11.path2 = VAR_8;
  VAR_11.changed_p = VAR_4;
  VAR_11.pool = VAR_10;
  VAR_11.strict = VAR_9;

  return FUNC_5(VAR_5->fs, VAR_3, &VAR_11,
                                VAR_1, VAR_10);
}
