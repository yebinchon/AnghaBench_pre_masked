
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* err; scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_14__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_15__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (scalar_t__*,int ,char const*,char const*,scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (scalar_t__*,int *,int *,int *,int *,int ,char const*,char const*,scalar_t__,int *,int *) ;
 TYPE_1__* FUNC_7 (char const*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (scalar_t__*,int ,char const*,int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const svn_client_ctx_t *VAR_8,
                             const char *VAR_9,
                             const char *VAR_10,
                             apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12;
  svn_node_kind_t VAR_13;
  svn_node_kind_t VAR_14;
  svn_boolean_t VAR_15 = VAR_0;


  FUNC_0(FUNC_6(&VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     VAR_8->wc_ctx, VAR_9,
                                     VAR_10, VAR_0,
                                     VAR_11, VAR_11));

  FUNC_0(FUNC_8(&VAR_14, VAR_8->wc_ctx, VAR_10, VAR_3, VAR_0,
                           VAR_11));

  if (VAR_13 != VAR_14)
    VAR_13 = VAR_5;

  VAR_12 = FUNC_1(&VAR_15,
                        VAR_8->wc_ctx, VAR_9, VAR_10,
                        VAR_13,
                        VAR_8->cancel_func, VAR_8->cancel_baton,
                        VAR_11);

  if (VAR_12 && VAR_12->apr_err == VAR_2 && VAR_15)
    {
      FUNC_4(VAR_12);
      VAR_12 = ((void*)0);

    }

  if (VAR_8->notify_func2)
    {
      svn_wc_notify_t *VAR_16 =
          FUNC_7(VAR_10,
                               VAR_7,
                               VAR_11);

      VAR_16->kind = VAR_14;
      VAR_16->err = VAR_12;

      VAR_8->notify_func2(VAR_8->notify_baton2, VAR_16, VAR_11);

      if (VAR_12 && VAR_12->apr_err == VAR_1)
        {
          VAR_16 = FUNC_7(VAR_10,
                                      VAR_6,
                                      VAR_11);
          VAR_16->kind = VAR_4;
          VAR_16->err = VAR_12;

          VAR_8->notify_func2(VAR_8->notify_baton2, VAR_16, VAR_11);
        }
    }

  if (VAR_12 && VAR_12->apr_err == VAR_1)
    {
      FUNC_4(VAR_12);
      VAR_12 = ((void*)0);
    }

  return FUNC_5(VAR_12);
}
