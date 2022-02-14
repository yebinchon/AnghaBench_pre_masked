
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int * aborted; int tokens; int done; int edit_baton; TYPE_1__* editor; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* close_edit ) (int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int *,int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_svn_conn_t *VAR_3,
                         apr_pool_t *VAR_4,
                         const svn_ra_svn__list_t *VAR_5,
                         ra_svn_driver_state_t *VAR_6)
{
  FUNC_0(VAR_6->editor->close_edit(VAR_6->edit_baton, VAR_4));
  VAR_6->done = VAR_2;
  if (VAR_6->aborted)
    *VAR_6->aborted = VAR_0;
  return FUNC_5(VAR_3, VAR_4, "");
}
