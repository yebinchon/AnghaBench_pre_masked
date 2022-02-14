
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct copy_args {char const* from_path; char const* to_path; int preserve_history; TYPE_1__* to_root; TYPE_1__* from_root; } ;
typedef int apr_pool_t ;
struct TYPE_9__ {int path; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_2__*,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ,int *,int ,int ,int ) ;
 int * FUNC_6 (TYPE_2__*,int ,struct copy_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_root_t *VAR_3,
            const char *VAR_4,
            svn_fs_root_t *VAR_5,
            const char *VAR_6,
            svn_boolean_t VAR_7,
            apr_pool_t *VAR_8)
{
  struct copy_args VAR_9;
  svn_boolean_t VAR_10;



  FUNC_0(FUNC_3(&VAR_10, VAR_3->fs, VAR_5->fs, VAR_8));
  if (! VAR_10)
    return FUNC_5
      (VAR_0, ((void*)0),
       FUNC_2("Cannot copy between two different filesystems ('%s' and '%s')"),
       VAR_3->fs->path, VAR_5->fs->path);

  if (! VAR_5->is_txn_root)
    return FUNC_1(VAR_5);

  if (VAR_3->is_txn_root)
    return FUNC_4
      (VAR_0, ((void*)0),
       FUNC_2("Copy from mutable tree not currently supported"));

  VAR_9.from_root = VAR_3;
  VAR_9.from_path = VAR_4;
  VAR_9.to_root = VAR_5;
  VAR_9.to_path = VAR_6;
  VAR_9.preserve_history = VAR_7;

  return FUNC_6(VAR_5->fs, VAR_2, &VAR_9,
                                VAR_1, VAR_8);
}
