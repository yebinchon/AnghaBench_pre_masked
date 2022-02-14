
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int edit_baton; TYPE_1__* editor; void** aborted; void* done; } ;
typedef TYPE_2__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int (* abort_edit ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_svn_conn_t *VAR_1,
                         apr_pool_t *VAR_2,
                         const svn_ra_svn__list_t *VAR_3,
                         ra_svn_driver_state_t *VAR_4)
{
  VAR_4->done = VAR_0;
  if (VAR_4->aborted)
    *VAR_4->aborted = VAR_0;
  FUNC_0(VAR_4->editor->abort_edit(VAR_4->edit_baton, VAR_2));
  return FUNC_2(VAR_1, VAR_2, "");
}
