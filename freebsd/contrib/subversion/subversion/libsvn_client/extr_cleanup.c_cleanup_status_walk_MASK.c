
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_18__ {scalar_t__ node_status; } ;
typedef TYPE_1__ svn_wc_status3_t ;
struct TYPE_19__ {int kind; } ;
typedef TYPE_2__ svn_wc_notify_t ;
typedef int svn_node_kind_t ;
struct TYPE_20__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct cleanup_status_walk_baton {TYPE_12__* ctx; int remove_unversioned_items; int remove_ignored_items; int vacuum_pristines; int clear_dav_cache; int fix_timestamps; int break_locks; scalar_t__ include_externals; } ;
typedef int apr_pool_t ;
struct TYPE_17__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_2__*,int *) ;int cancel_baton; int cancel_func; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (char const*,int ,int ,int ,int ,int ,int ,int ,TYPE_12__*,int *) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (char const*,int*,int *) ;
 TYPE_3__* FUNC_6 (char const*,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_7 (char const*,int ,int *) ;




 TYPE_2__* FUNC_8 (char const*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_9,
                    const char *VAR_10,
                    const svn_wc_status3_t *VAR_11,
                    apr_pool_t *VAR_12)
{
  struct cleanup_status_walk_baton *VAR_13 = VAR_9;
  svn_node_kind_t VAR_14;
  svn_wc_notify_t *VAR_15;

  if (VAR_11->node_status == VAR_6 && VAR_13->include_externals)
    {
      svn_error_t *VAR_16;

      FUNC_0(FUNC_5(VAR_10, &VAR_14, VAR_12));
      if (VAR_14 == 131)
        {
          if (VAR_13->ctx->notify_func2)
            {
              VAR_15 = FUNC_8(VAR_10,
                                            VAR_4,
                                            VAR_12);
              VAR_13->ctx->notify_func2(VAR_13->ctx->notify_baton2, VAR_15,
                                   VAR_12);
            }

          VAR_16 = FUNC_1(VAR_10,
                           VAR_13->break_locks,
                           VAR_13->fix_timestamps,
                           VAR_13->clear_dav_cache,
                           VAR_13->vacuum_pristines,
                           VAR_13->remove_unversioned_items,
                           VAR_13->remove_ignored_items,
                           VAR_3 ,
                           VAR_13->ctx, VAR_12);
          if (VAR_16 && VAR_16->apr_err == VAR_1)
            {
              FUNC_4(VAR_16);
              return VAR_2;
            }
          else
            FUNC_0(VAR_16);
        }

      return VAR_2;
    }

  if (VAR_11->node_status == VAR_7)
    {
      if (!VAR_13->remove_ignored_items)
        return VAR_2;
    }
  else if (VAR_11->node_status == VAR_8)
    {
      if (!VAR_13->remove_unversioned_items)
        return VAR_2;
    }
  else
    return VAR_2;

  FUNC_0(FUNC_5(VAR_10, &VAR_14, VAR_12));
  switch (VAR_14)
    {
      case 130:
      case 128:
        FUNC_0(FUNC_7(VAR_10, VAR_0, VAR_12));
        break;
      case 131:
        FUNC_0(FUNC_6(VAR_10, VAR_0,
                                   VAR_13->ctx->cancel_func, VAR_13->ctx->cancel_baton,
                                   VAR_12));
        break;
      case 129:
      default:
        return VAR_2;
    }

  if (VAR_13->ctx->notify_func2)
    {
      VAR_15 = FUNC_8(VAR_10, VAR_5,
                                    VAR_12);
      VAR_15->kind = VAR_14;
      VAR_13->ctx->notify_func2(VAR_13->ctx->notify_baton2, VAR_15, VAR_12);
    }

  return VAR_2;
}
