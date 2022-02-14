
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_20__ {int wc_ctx; int notify_baton2; int (* notify_func2 ) (int ,int ,int *) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_21__ {int resolution_tree; } ;
typedef TYPE_3__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 char* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (char const**,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_8 (int ,char const*,int *) ;
 int FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (char const*,int ,int *) ;
 TYPE_1__* FUNC_11 (int ,char const*,int ,int ,int *,int *,int (*) (int ,int ,int *),int ,int *) ;
 int VAR_3 ;
 TYPE_1__* FUNC_12 (TYPE_3__*,int *,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_client_conflict_option_t *VAR_4,
                               svn_client_conflict_t *VAR_5,
                               svn_client_ctx_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_client_conflict_option_id_t VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  svn_error_t *VAR_12;

  VAR_8 = FUNC_3(VAR_4);
  VAR_9 = FUNC_2(VAR_5);


  VAR_10 = FUNC_4(VAR_9, VAR_7);
  FUNC_0(FUNC_7(&VAR_11, VAR_6->wc_ctx,
                                                 VAR_10,
                                                 VAR_7, VAR_7));

  VAR_12 = FUNC_12(VAR_5, VAR_4, VAR_6,
                                               VAR_7);
  if (VAR_12)
    goto unlock_wc;


  VAR_12 = FUNC_11(VAR_6->wc_ctx, VAR_9, VAR_0, VAR_0,
                       ((void*)0), ((void*)0),
                       VAR_6->notify_func2, VAR_6->notify_baton2,
                       VAR_7);
  if (VAR_12)
    {
      if (VAR_12->apr_err == VAR_1)
        {




          FUNC_5(VAR_12);


          VAR_12 = FUNC_8(VAR_6->wc_ctx, VAR_9,
                                          VAR_7);
        }

      if (VAR_12)
        goto unlock_wc;
    }

  if (VAR_6->notify_func2)
    VAR_6->notify_func2(VAR_6->notify_baton2,
                      FUNC_10(VAR_9,
                                           VAR_3,
                                           VAR_7),
                      VAR_7);

unlock_wc:
  VAR_12 = FUNC_6(VAR_12, FUNC_9(VAR_6->wc_ctx,
                                                                 VAR_11,
                                                                 VAR_7));
  FUNC_0(VAR_12);

  VAR_5->resolution_tree = VAR_8;

  return VAR_2;
}
