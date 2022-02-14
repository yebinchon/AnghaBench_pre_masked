
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* prop_state; void* content_state; int kind; } ;
typedef TYPE_3__ svn_wc_notify_t ;
typedef void* svn_wc_notify_state_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ ancestral; } ;
struct TYPE_12__ {TYPE_1__* ctx; int merged_abspaths; scalar_t__ reintegrate_merge; TYPE_2__ merge_source; } ;
typedef TYPE_4__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_3__*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_4__*,char const*,int ,int *) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (char const*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(merge_cmd_baton_t *VAR_3,
                     const char *VAR_4,
                     svn_node_kind_t VAR_5,
                     svn_wc_notify_state_t VAR_6,
                     svn_wc_notify_state_t VAR_7,
                     apr_pool_t *VAR_8)
{
  if (VAR_3->merge_source.ancestral || VAR_3->reintegrate_merge)
    {
      FUNC_2(VAR_3->merged_abspaths, VAR_4);
    }

  if (VAR_3->ctx->notify_func2)
    {
      svn_wc_notify_t *VAR_9;

      FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_0, VAR_8));

      VAR_9 = FUNC_4(VAR_4, VAR_2,
                                    VAR_8);
      VAR_9->kind = VAR_5;
      VAR_9->content_state = VAR_6;
      VAR_9->prop_state = VAR_7;

      VAR_3->ctx->notify_func2(VAR_3->ctx->notify_baton2, VAR_9,
                                 VAR_8);
    }

  return VAR_1;
}
