
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int * aborted; int done; int for_replay; } ;
typedef TYPE_1__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_svn_conn_t *VAR_4,
                            apr_pool_t *VAR_5,
                            const svn_ra_svn__list_t *VAR_6,
                            ra_svn_driver_state_t *VAR_7)
{
  if (!VAR_7->for_replay)
    return FUNC_1
      (VAR_1, ((void*)0),
       FUNC_0("Command 'finish-replay' invalid outside of replays"));
  VAR_7->done = VAR_3;
  if (VAR_7->aborted)
    *VAR_7->aborted = VAR_0;
  return VAR_2;
}
