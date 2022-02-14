
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int kind; } ;
typedef TYPE_2__ svn_wc_notify_t ;
typedef int svn_error_t ;
struct merge_dir_baton_t {int * pending_deletes; } ;
struct TYPE_9__ {TYPE_1__* ctx; } ;
typedef TYPE_3__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_7__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_2__*,int *) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*,int *) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (char const*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_7(merge_cmd_baton_t *VAR_2,
                             struct merge_dir_baton_t *VAR_3,
                             apr_pool_t *VAR_4)
{
  if (VAR_2->ctx->notify_func2 && VAR_3->pending_deletes)
    {
      apr_hash_index_t *VAR_5;

      for (VAR_5 = FUNC_0(VAR_4, VAR_3->pending_deletes);
           VAR_5;
           VAR_5 = FUNC_1(VAR_5))
        {
          const char *VAR_6 = FUNC_2(VAR_5);
          svn_wc_notify_t *VAR_7;

          VAR_7 = FUNC_6(VAR_6,
                                        VAR_1,
                                        VAR_4);
          VAR_7->kind = FUNC_5(
                                    FUNC_3(VAR_5));

          VAR_2->ctx->notify_func2(VAR_2->ctx->notify_baton2,
                                     VAR_7, VAR_4);
        }

      VAR_3->pending_deletes = ((void*)0);
    }
  return VAR_0;
}
