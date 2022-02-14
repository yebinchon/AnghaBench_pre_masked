
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct paths_changed_args {int changes; TYPE_1__* root; } ;
struct TYPE_6__ {char* txn; int rev; int is_txn_root; int * fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,int *,int ,TYPE_2__*,int ) ;
 int * FUNC_2 (int *,int *,char const*,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                       trail_t *VAR_1)
{



  struct paths_changed_args *VAR_2 = VAR_0;
  const char *VAR_3;
  svn_fs_t *VAR_4 = VAR_2->root->fs;


  if (! VAR_2->root->is_txn_root)
    FUNC_0(FUNC_1(&VAR_3, VAR_4, VAR_2->root->rev,
                                        VAR_1, VAR_1->pool));
  else
    VAR_3 = VAR_2->root->txn;

  return FUNC_2(&(VAR_2->changes), VAR_4, VAR_3,
                                   VAR_1, VAR_1->pool);
}
