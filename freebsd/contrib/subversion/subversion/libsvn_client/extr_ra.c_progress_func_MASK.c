
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int progress_baton; int (* progress_func ) (int ,int,int ,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_7__ {int total_progress; } ;
typedef TYPE_2__ svn_client__private_ctx_t ;
struct TYPE_8__ {scalar_t__ last_progress; TYPE_1__* ctx; } ;
typedef TYPE_3__ callback_baton_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (int ,int,int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(apr_off_t VAR_0,
              apr_off_t VAR_1,
              void *VAR_2,
              apr_pool_t *VAR_3)
{
  callback_baton_t *VAR_4 = VAR_2;
  svn_client_ctx_t *VAR_5 = VAR_4->ctx;
  svn_client__private_ctx_t *VAR_6 =
    FUNC_1(VAR_5);

  VAR_6->total_progress += (VAR_0 - VAR_4->last_progress);
  VAR_4->last_progress = VAR_0;

  if (VAR_5->progress_func)
    {



      VAR_5->progress_func(VAR_6->total_progress, -1,
                                VAR_5->progress_baton, VAR_3);
    }
}
