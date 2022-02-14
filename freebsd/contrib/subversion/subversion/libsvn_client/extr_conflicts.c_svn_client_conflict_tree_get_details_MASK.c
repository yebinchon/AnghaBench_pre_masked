
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int notify_baton2; int (* notify_func2 ) (int ,int *,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_12__ {int (* tree_conflict_get_local_details_func ) (TYPE_2__*,TYPE_1__*,int *) ;int (* tree_conflict_get_incoming_details_func ) (TYPE_2__*,TYPE_1__*,int *) ;} ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

svn_error_t *
FUNC_9(svn_client_conflict_t *VAR_3,
                                     svn_client_ctx_t *VAR_4,
                                     apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_1(VAR_3, VAR_5));

  if (VAR_4->notify_func2)
    {
      svn_wc_notify_t *VAR_6;

      VAR_6 = FUNC_8(
                 FUNC_7(VAR_3),
                 VAR_1,
                 VAR_5),
      VAR_4->notify_func2(VAR_4->notify_baton2, VAR_6,
                                  VAR_5);
    }



  if (VAR_3->tree_conflict_get_incoming_details_func)
    FUNC_0(FUNC_2(
      VAR_3->tree_conflict_get_incoming_details_func(VAR_3, VAR_4,
                                                        VAR_5)));


  if (VAR_3->tree_conflict_get_local_details_func)
    FUNC_0(FUNC_2(
      VAR_3->tree_conflict_get_local_details_func(VAR_3, VAR_4,
                                                    VAR_5)));

  if (VAR_4->notify_func2)
    {
      svn_wc_notify_t *VAR_7;

      VAR_7 = FUNC_8(
                 FUNC_7(VAR_3),
                 VAR_2,
                 VAR_5),
      VAR_4->notify_func2(VAR_4->notify_baton2, VAR_7,
                                  VAR_5);
    }

  return VAR_0;
}
