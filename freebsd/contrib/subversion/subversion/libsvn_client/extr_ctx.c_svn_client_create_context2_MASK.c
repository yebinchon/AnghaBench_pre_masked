
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_5__ {int wc_ctx; int * config; struct TYPE_5__* conflict_baton2; int conflict_func2; struct TYPE_5__* notify_baton2; int notify_func2; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_6__ {int magic_id; scalar_t__ magic_null; TYPE_1__ public_ctx; } ;
typedef TYPE_2__ svn_client__private_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int *,int *) ;

svn_error_t *
FUNC_4(svn_client_ctx_t **VAR_5,
                           apr_hash_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_config_t *VAR_8;

  svn_client__private_ctx_t *const VAR_9 =
    FUNC_1(VAR_7, sizeof(*VAR_9));
  svn_client_ctx_t *const VAR_10 = &VAR_9->public_ctx;

  VAR_9->magic_null = 0;
  VAR_9->magic_id = VAR_0;

  VAR_10->notify_func2 = VAR_4;
  VAR_10->notify_baton2 = VAR_10;

  VAR_10->conflict_func2 = VAR_3;
  VAR_10->conflict_baton2 = VAR_10;

  VAR_10->config = VAR_6;

  if (VAR_6)
    VAR_8 = FUNC_2(VAR_6, VAR_1);
  else
    VAR_8 = ((void*)0);

  FUNC_0(FUNC_3(&VAR_10->wc_ctx, VAR_8,
                                VAR_7, VAR_7));
  *VAR_5 = VAR_10;

  return VAR_2;
}
