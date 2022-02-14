
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* err; } ;
typedef TYPE_2__ svn_wc_notify_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct revert_with_write_lock_baton {TYPE_1__* ctx; int local_abspath; int metadata_only; int clear_changelists; int changelists; int use_commit_times; int depth; } ;
typedef int apr_pool_t ;
struct TYPE_13__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_2__*,int *) ;int cancel_baton; int cancel_func; int wc_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int (*) (int ,TYPE_2__*,int *),int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_5, apr_pool_t *VAR_6, apr_pool_t *VAR_7)
{
  struct revert_with_write_lock_baton *VAR_8 = VAR_5;
  svn_error_t *VAR_9;

  VAR_9 = FUNC_4(VAR_8->ctx->wc_ctx,
                       VAR_8->local_abspath,
                       VAR_8->depth,
                       VAR_8->use_commit_times,
                       VAR_8->changelists,
                       VAR_8->clear_changelists,
                       VAR_8->metadata_only,
                       VAR_8->ctx->cancel_func, VAR_8->ctx->cancel_baton,
                       VAR_8->ctx->notify_func2, VAR_8->ctx->notify_baton2,
                       VAR_7);

  if (VAR_9)
    {


      if (VAR_9->apr_err == VAR_0
          || VAR_9->apr_err == VAR_1
          || VAR_9->apr_err == VAR_2)
        {
          if (VAR_8->ctx->notify_func2)
            {
              svn_wc_notify_t *VAR_10;

              VAR_10 = FUNC_3(VAR_8->local_abspath,
                                            VAR_4,
                                            VAR_7);

              VAR_10->err = VAR_9;

              VAR_8->ctx->notify_func2(VAR_8->ctx->notify_baton2,
                                   VAR_10, VAR_7);
            }
          FUNC_1(VAR_9);
        }
      else
        return FUNC_2(VAR_9);
    }

  return VAR_3;
}
