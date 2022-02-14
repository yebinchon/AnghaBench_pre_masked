
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_edit_baton {TYPE_1__* exb; int base_relpath; int edit_pool; } ;
struct ev2_dir_baton {int base_revision; int path; struct ev2_edit_baton* eb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int baton; int (* start_edit ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct ev2_dir_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
              svn_revnum_t VAR_2,
              apr_pool_t *VAR_3,
              void **VAR_4)
{
  struct ev2_dir_baton *VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5));
  struct ev2_edit_baton *VAR_6 = VAR_1;

  VAR_5->eb = VAR_6;
  VAR_5->path = FUNC_2(VAR_6->edit_pool, VAR_6->base_relpath);
  VAR_5->base_revision = VAR_2;

  *VAR_4 = VAR_5;

  if (VAR_6->exb->start_edit)
    FUNC_0(VAR_6->exb->start_edit(VAR_6->exb->baton, VAR_2));

  return VAR_0;
}
