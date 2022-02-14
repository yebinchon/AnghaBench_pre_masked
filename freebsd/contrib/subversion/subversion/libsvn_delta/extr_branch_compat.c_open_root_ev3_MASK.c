
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int ev1_root_dir_baton; int edit_pool; int dedit_baton; TYPE_1__* deditor; } ;
typedef TYPE_2__ svn_branch__txn_priv_t ;
struct TYPE_3__ {int (* open_root ) (int ,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
              svn_revnum_t VAR_2)
{
  svn_branch__txn_priv_t *VAR_3 = VAR_1;

  FUNC_0(VAR_3->deditor->open_root(VAR_3->dedit_baton, VAR_2,
                                 VAR_3->edit_pool, &VAR_3->ev1_root_dir_baton));
  return VAR_0;
}
