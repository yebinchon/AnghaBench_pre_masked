
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct things_changed_args {char const* path1; char const* path2; int strict; int * pool; int * changed_p; TYPE_1__* root2; TYPE_1__* root1; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (scalar_t__,int ,struct things_changed_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_boolean_t *VAR_3,
                   svn_fs_root_t *VAR_4,
                   const char *VAR_5,
                   svn_fs_root_t *VAR_6,
                   const char *VAR_7,
                   svn_boolean_t VAR_8,
                   apr_pool_t *VAR_9)
{
  struct things_changed_args VAR_10;


  if (VAR_4->fs != VAR_6->fs)
    return FUNC_1
      (VAR_0, ((void*)0),
       FUNC_0("Cannot compare property value between two different filesystems"));

  VAR_10.root1 = VAR_4;
  VAR_10.root2 = VAR_6;
  VAR_10.path1 = VAR_5;
  VAR_10.path2 = VAR_7;
  VAR_10.changed_p = VAR_3;
  VAR_10.pool = VAR_9;
  VAR_10.strict = VAR_8;

  return FUNC_2(VAR_4->fs, VAR_2, &VAR_10,
                                VAR_1, VAR_9);
}
