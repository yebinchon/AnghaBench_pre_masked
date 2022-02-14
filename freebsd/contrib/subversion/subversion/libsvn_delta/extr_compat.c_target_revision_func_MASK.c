
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct editor_baton {int dedit_baton; TYPE_1__* deditor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* set_target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                     svn_revnum_t VAR_2,
                     apr_pool_t *VAR_3)
{
  struct editor_baton *VAR_4 = VAR_1;

  FUNC_0(VAR_4->deditor->set_target_revision(VAR_4->dedit_baton, VAR_2,
                                           VAR_3));

  return VAR_0;
}
