
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_edit_baton {TYPE_1__* exb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int baton; int (* target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                        svn_revnum_t VAR_2,
                        apr_pool_t *VAR_3)
{
  struct ev2_edit_baton *VAR_4 = VAR_1;

  if (VAR_4->exb->target_revision)
    FUNC_0(VAR_4->exb->target_revision(VAR_4->exb->baton, VAR_2,
                                     VAR_3));

  return VAR_0;
}
