
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_8__ {int wc_ctx; int notify_baton2; int (* notify_func2 ) (int ,int ,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_9__ {int resolution_tree; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef int svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (char const*,int ,int *) ;
 int VAR_1 ;
 int * FUNC_9 (TYPE_2__*,int *,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_client_conflict_option_t *VAR_2,
                               svn_client_conflict_t *VAR_3,
                               svn_client_ctx_t *VAR_4,
                               apr_pool_t *VAR_5)
{
  svn_client_conflict_option_id_t VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  svn_error_t *VAR_9;

  VAR_6 = FUNC_3(VAR_2);
  VAR_7 = FUNC_2(VAR_3);

  FUNC_0(FUNC_5(&VAR_8, VAR_4->wc_ctx,
                                                 VAR_7,
                                                 VAR_5, VAR_5));

  VAR_9 = FUNC_9(VAR_3, VAR_2, VAR_4,
                                               VAR_5);
  if (VAR_9)
    goto unlock_wc;


  VAR_9 = FUNC_6(VAR_4->wc_ctx, VAR_7, VAR_5);


  if (VAR_4->notify_func2)
    VAR_4->notify_func2(VAR_4->notify_baton2,
                      FUNC_8(VAR_7,
                                           VAR_1,
                                           VAR_5),
                      VAR_5);

unlock_wc:
  VAR_9 = FUNC_4(VAR_9, FUNC_7(VAR_4->wc_ctx,
                                                                 VAR_8,
                                                                 VAR_5));
  FUNC_0(VAR_9);

  VAR_3->resolution_tree = VAR_6;

  return VAR_0;
}
