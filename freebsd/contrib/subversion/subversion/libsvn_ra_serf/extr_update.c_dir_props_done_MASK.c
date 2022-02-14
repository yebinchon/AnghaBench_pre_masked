
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int code; } ;
struct TYPE_10__ {TYPE_1__ sline; scalar_t__ server_error; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
struct TYPE_11__ {TYPE_2__* ctx; TYPE_3__* propfind_handler; } ;
typedef TYPE_4__ dir_baton_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int num_active_propfinds; } ;


 int FUNC_0 (TYPE_4__*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_request_t *VAR_0,
               void *VAR_1,
               apr_pool_t *VAR_2)
{
  dir_baton_t *VAR_3 = VAR_1;
  svn_ra_serf__handler_t *VAR_4 = VAR_3->propfind_handler;

  if (VAR_4->server_error)
    return FUNC_2(VAR_4, VAR_2);

  if (VAR_4->sline.code != 207)
    return FUNC_1(FUNC_3(VAR_4));

  VAR_3->ctx->num_active_propfinds--;







  return FUNC_1(FUNC_0(VAR_3));
}
