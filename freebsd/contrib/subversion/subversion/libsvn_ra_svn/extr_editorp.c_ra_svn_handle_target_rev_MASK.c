
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int edit_baton; TYPE_1__* editor; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* set_target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int const*,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_svn_conn_t *VAR_1,
                         apr_pool_t *VAR_2,
                         const svn_ra_svn__list_t *VAR_3,
                         ra_svn_driver_state_t *VAR_4)
{
  svn_revnum_t VAR_5;

  FUNC_1(FUNC_3(VAR_3, "r", &VAR_5));
  FUNC_0(VAR_4->editor->set_target_revision(VAR_4->edit_baton, VAR_5, VAR_2));
  return VAR_0;
}
