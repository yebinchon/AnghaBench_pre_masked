
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int url; void* lock_state; int path_prefix; TYPE_3__* err; int const* lock; } ;
typedef TYPE_2__ svn_wc_notify_t ;
typedef int svn_lock_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct lock_baton {TYPE_1__* ctx; int base_url; int pool; int base_dir_abspath; scalar_t__ urls_to_paths; } ;
typedef int apr_pool_t ;
struct TYPE_9__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_2__*,int *) ;int wc_ctx; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 char* FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,char const*,int const*,int ) ;
 TYPE_2__* FUNC_5 (char const*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_10,
                     const char *VAR_11,
                     svn_boolean_t VAR_12,
                     const svn_lock_t *VAR_13,
                     svn_error_t *VAR_14, apr_pool_t *VAR_15)
{
  struct lock_baton *VAR_16 = VAR_10;
  svn_wc_notify_t *VAR_17;
  const char *VAR_18 = VAR_16->urls_to_paths
                                  ? FUNC_2(VAR_16->urls_to_paths, VAR_11)
                                  : ((void*)0);


  VAR_17 = FUNC_5(VAR_18 ? VAR_18 : VAR_11,
                                VAR_12
                                ? (VAR_14
                                   ? VAR_3
                                   : VAR_8)
                                : (VAR_14
                                   ? VAR_4
                                   : VAR_9),
                                VAR_15);
  VAR_17->lock = VAR_13;
  VAR_17->err = VAR_14;

  if (VAR_18)
    {

      VAR_17->path_prefix = VAR_16->base_dir_abspath;

      if (VAR_12)
        {
          if (!VAR_14 && VAR_13)
            {
              FUNC_0(FUNC_4(VAR_16->ctx->wc_ctx, VAR_18, VAR_13,
                                       VAR_16->pool));
              VAR_17->lock_state = VAR_5;
            }
          else
            VAR_17->lock_state = VAR_6;
        }
      else
        {






          if (!VAR_14 ||
              (VAR_14 && (VAR_14->apr_err != VAR_0
                          && VAR_14->apr_err != VAR_1)))
            {
              FUNC_0(FUNC_6(VAR_16->ctx->wc_ctx, VAR_18,
                                          VAR_16->pool));
              VAR_17->lock_state = VAR_7;
            }
          else
            VAR_17->lock_state = VAR_6;
        }
    }
  else
    VAR_17->url = FUNC_3(VAR_16->base_url, VAR_11, VAR_15);

  if (VAR_16->ctx->notify_func2)
    VAR_16->ctx->notify_func2(VAR_16->ctx->notify_baton2, VAR_17, VAR_15);

  return VAR_2;
}
