
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int baton; int base_revision; } ;
struct editor_baton {TYPE_2__ root; int edit_pool; int dedit_baton; TYPE_1__* deditor; } ;
struct TYPE_3__ {int (* open_root ) (int ,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                svn_revnum_t VAR_2)
{
  struct editor_baton *VAR_3 = VAR_1;

  VAR_3->root.base_revision = VAR_2;




  FUNC_0(VAR_3->deditor->open_root(VAR_3->dedit_baton, VAR_3->root.base_revision,
                                 VAR_3->edit_pool, &VAR_3->root.baton));

  return VAR_0;
}
