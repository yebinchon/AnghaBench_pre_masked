
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int wc_ctx; int notify_baton2; int (* notify_func2 ) (int ,int ,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_10__ {int resolution_tree; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 char* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (int ,char const*,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_10 (TYPE_2__*,int *,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_client_conflict_option_t *VAR_3,
                            svn_client_conflict_t *VAR_4,
                            svn_client_ctx_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  const char *VAR_7;
  const char *VAR_8;
  svn_wc_operation_t VAR_9;
  svn_error_t *VAR_10;

  VAR_7 = FUNC_2(VAR_4);
  VAR_9 = FUNC_3(VAR_4);

  FUNC_0(FUNC_6(&VAR_8, VAR_5->wc_ctx,
                                                 VAR_7,
                                                 VAR_6, VAR_6));

  if (VAR_9 == VAR_2)
    {
      VAR_10 = FUNC_10(VAR_4, VAR_3,
                                                            VAR_5, VAR_6);
      if (VAR_10)
        goto unlock_wc;
    }





  VAR_10 = FUNC_7(VAR_5->wc_ctx, VAR_7, VAR_6);


  if (VAR_5->notify_func2)
    VAR_5->notify_func2(VAR_5->notify_baton2,
                      FUNC_9(VAR_7,
                                           VAR_1,
                                           VAR_6),
                      VAR_6);

unlock_wc:
  VAR_10 = FUNC_5(VAR_10, FUNC_8(VAR_5->wc_ctx,
                                                                 VAR_8,
                                                                 VAR_6));
  FUNC_0(VAR_10);

  VAR_4->resolution_tree = FUNC_4(VAR_3);

  return VAR_0;
}
