
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int wc_ctx; int notify_baton2; int (* notify_func2 ) (int ,int ,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_7__ {scalar_t__ resolution_tree; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int svn_client_conflict_option_t ;
typedef scalar_t__ svn_client_conflict_option_id_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *) ;
 char* FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int * FUNC_8 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (int ,char const*,int *) ;
 int FUNC_11 (char const*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_client_conflict_option_t *VAR_4,
                                svn_client_conflict_t *VAR_5,
                                svn_client_ctx_t *VAR_6,
                                apr_pool_t *VAR_7)
{
  svn_client_conflict_option_id_t VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  svn_error_t *VAR_11;

  VAR_8 = FUNC_4(VAR_4);
  VAR_9 = FUNC_3(VAR_5);

  if (VAR_8 != VAR_2)
    return FUNC_7(VAR_0, ((void*)0),
                             FUNC_1("Tree conflict on '%s' can only be resolved "
                               "to the current working copy state"),
                             FUNC_5(VAR_9,
                                                    VAR_7));

  FUNC_0(FUNC_8(&VAR_10, VAR_6->wc_ctx,
                                                 VAR_9,
                                                 VAR_7, VAR_7));


  VAR_11 = FUNC_9(VAR_6->wc_ctx, VAR_9, VAR_7);


  if (VAR_6->notify_func2)
    VAR_6->notify_func2(VAR_6->notify_baton2,
                      FUNC_11(VAR_9,
                                           VAR_3,
                                           VAR_7),
                      VAR_7);

  VAR_11 = FUNC_6(VAR_11, FUNC_10(VAR_6->wc_ctx,
                                                                 VAR_10,
                                                                 VAR_7));
  FUNC_0(VAR_11);

  VAR_5->resolution_tree = VAR_8;

  return VAR_1;
}
