
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int src_abspath_or_url; int dst_abspath_or_url; } ;
typedef TYPE_2__ svn_client__copy_pair_t ;
struct handle_descendants_baton {TYPE_3__* committables; int check_url_baton; int check_url_func; int cancel_baton; int cancel_func; int wc_ctx; } ;
struct copy_committables_baton {TYPE_3__* committables; int check_url_baton; int check_url_func; TYPE_1__* ctx; int result_pool; } ;
typedef int apr_pool_t ;
struct TYPE_6__ {int by_repository; } ;
struct TYPE_4__ {int cancel_baton; int cancel_func; int wc_ctx; int notify_baton2; int notify_func2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*,int *,char const*,int ,int ,int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,struct handle_descendants_baton*,int *) ;
 char* FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,int *,char const**,int *,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_4, void *VAR_5, apr_pool_t *VAR_6)
{
  struct copy_committables_baton *VAR_7 = VAR_4;
  svn_client__copy_pair_t *VAR_8 = *(svn_client__copy_pair_t **)VAR_5;
  const char *VAR_9;
  const char *VAR_10;
  struct handle_descendants_baton VAR_11;


  FUNC_1(FUNC_3(VAR_8->src_abspath_or_url));

  FUNC_0(FUNC_6(((void*)0), ((void*)0), &VAR_9, ((void*)0),
                                      VAR_7->ctx->wc_ctx,
                                      VAR_8->src_abspath_or_url,
                                      VAR_6, VAR_6));

  VAR_10 = FUNC_5(VAR_9,
                                         VAR_8->dst_abspath_or_url, VAR_6);


  FUNC_0(FUNC_2(VAR_8->src_abspath_or_url,
                               VAR_7->committables, ((void*)0),
                               VAR_10,
                               VAR_3,
                               VAR_0,
                               ((void*)0) ,
                               ((void*)0),
                               VAR_7->check_url_func,
                               VAR_7->check_url_baton,
                               VAR_7->ctx->cancel_func,
                               VAR_7->ctx->cancel_baton,
                               VAR_7->ctx->notify_func2,
                               VAR_7->ctx->notify_baton2,
                               VAR_7->ctx->wc_ctx, VAR_7->result_pool, VAR_6));

  VAR_11.wc_ctx = VAR_7->ctx->wc_ctx;
  VAR_11.cancel_func = VAR_7->ctx->cancel_func;
  VAR_11.cancel_baton = VAR_7->ctx->cancel_baton;
  VAR_11.check_url_func = VAR_7->check_url_func;
  VAR_11.check_url_baton = VAR_7->check_url_baton;
  VAR_11.committables = VAR_7->committables;

  FUNC_0(FUNC_4(((void*)0), VAR_7->committables->by_repository,
                            VAR_2, &VAR_11, VAR_6));

  return VAR_1;
}
