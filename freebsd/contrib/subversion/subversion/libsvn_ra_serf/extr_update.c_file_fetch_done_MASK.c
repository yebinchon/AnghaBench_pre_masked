
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int code; } ;
struct TYPE_13__ {TYPE_3__ sline; scalar_t__ server_error; } ;
typedef TYPE_4__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
typedef int serf_request_t ;
struct TYPE_14__ {scalar_t__ fetch_props; int fetch_file; TYPE_2__* parent_dir; } ;
typedef TYPE_5__ file_baton_t ;
struct TYPE_15__ {TYPE_4__* handler; TYPE_5__* file; } ;
typedef TYPE_6__ fetch_ctx_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {TYPE_1__* ctx; } ;
struct TYPE_10__ {int num_active_fetches; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_5__*,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(serf_request_t *VAR_2,
                void *VAR_3,
                apr_pool_t *VAR_4)
{
  fetch_ctx_t *VAR_5 = VAR_3;
  file_baton_t *VAR_6 = VAR_5->file;
  svn_ra_serf__handler_t *VAR_7 = VAR_5->handler;

  if (VAR_7->server_error)
      return FUNC_1(FUNC_2(VAR_7,
                                                              VAR_4));

  if (VAR_7->sline.code != 200)
    return FUNC_1(FUNC_3(VAR_7));

  VAR_6->parent_dir->ctx->num_active_fetches--;

  VAR_6->fetch_file = VAR_0;

  if (VAR_6->fetch_props)
    return VAR_1;







  return FUNC_1(FUNC_0(VAR_6, VAR_4));
}
