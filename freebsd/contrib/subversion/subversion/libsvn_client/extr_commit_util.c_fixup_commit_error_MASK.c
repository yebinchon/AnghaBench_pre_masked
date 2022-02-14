
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* err; scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_16__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct TYPE_17__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_3__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (char const*,int *) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (char const*,char const*,int *) ;
 TYPE_1__* FUNC_8 (char const*,int ,int *) ;
 TYPE_1__* FUNC_9 (int ,int ,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_21,
                   const char *VAR_22,
                   const char *VAR_23,
                   svn_node_kind_t VAR_24,
                   svn_error_t *VAR_25,
                   svn_client_ctx_t *VAR_26,
                   apr_pool_t *VAR_27)
{
  if (VAR_25->apr_err == VAR_7
      || VAR_25->apr_err == VAR_5
      || VAR_25->apr_err == VAR_3
      || VAR_25->apr_err == VAR_9
      || VAR_25->apr_err == VAR_12
      || VAR_25->apr_err == VAR_10
      || VAR_25->apr_err == VAR_13
      || FUNC_6(VAR_25, VAR_15))
    {
      if (VAR_26->notify_func2)
        {
          svn_wc_notify_t *VAR_28;

          if (VAR_21)
            VAR_28 = FUNC_8(VAR_21,
                                          VAR_20,
                                          VAR_27);
          else
            VAR_28 = FUNC_9(
                                FUNC_7(VAR_22, VAR_23,
                                                            VAR_27),
                                VAR_20,
                                VAR_27);

          VAR_28->kind = VAR_24;
          VAR_28->err = VAR_25;

          VAR_26->notify_func2(VAR_26->notify_baton2, VAR_28, VAR_27);
        }

      return FUNC_5(VAR_16, VAR_25,
                               (VAR_24 == VAR_17
                                 ? FUNC_0("Directory '%s' is out of date")
                                 : FUNC_0("File '%s' is out of date")),
                               VAR_21
                                  ? FUNC_4(VAR_21,
                                                           VAR_27)
                                  : FUNC_7(VAR_22,
                                                                VAR_23,
                                                                VAR_27));
    }
  else if (FUNC_6(VAR_25, VAR_8)
           || VAR_25->apr_err == VAR_6
           || VAR_25->apr_err == VAR_4
           || VAR_25->apr_err == VAR_14)
    {
      if (VAR_26->notify_func2)
        {
          svn_wc_notify_t *VAR_29;

          if (VAR_21)
            VAR_29 = FUNC_8(VAR_21,
                                          VAR_19,
                                          VAR_27);
          else
            VAR_29 = FUNC_9(
                                FUNC_7(VAR_22, VAR_23,
                                                            VAR_27),
                                VAR_19,
                                VAR_27);

          VAR_29->kind = VAR_24;
          VAR_29->err = VAR_25;

          VAR_26->notify_func2(VAR_26->notify_baton2, VAR_29, VAR_27);
        }

      return FUNC_5(VAR_2, VAR_25,
                   (VAR_24 == VAR_17
                     ? FUNC_0("Directory '%s' is locked in another working copy")
                     : FUNC_0("File '%s' is locked in another working copy")),
                   VAR_21
                      ? FUNC_4(VAR_21,
                                               VAR_27)
                      : FUNC_7(VAR_22,
                                                    VAR_23,
                                                    VAR_27));
    }
  else if (FUNC_6(VAR_25, VAR_11)
           || VAR_25->apr_err == VAR_0)
    {
      if (VAR_26->notify_func2)
        {
          svn_wc_notify_t *VAR_30;

          if (VAR_21)
            VAR_30 = FUNC_8(
                                    VAR_21,
                                    VAR_18,
                                    VAR_27);
          else
            VAR_30 = FUNC_9(
                                FUNC_7(VAR_22, VAR_23,
                                                            VAR_27),
                                VAR_18,
                                VAR_27);

          VAR_30->kind = VAR_24;
          VAR_30->err = VAR_25;

          VAR_26->notify_func2(VAR_26->notify_baton2, VAR_30, VAR_27);
        }

      return FUNC_5(VAR_1, VAR_25,
                   (VAR_24 == VAR_17
                     ? FUNC_0("Changing directory '%s' is forbidden by the server")
                     : FUNC_0("Changing file '%s' is forbidden by the server")),
                   VAR_21
                      ? FUNC_4(VAR_21,
                                               VAR_27)
                      : FUNC_7(VAR_22,
                                                    VAR_23,
                                                    VAR_27));
    }
  else
    return VAR_25;
}
