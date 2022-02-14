
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int revision; int prop_state; int content_state; int mime_type; int kind; int action; int path; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct TYPE_5__ {int notify_baton; int (* notify_func ) (int ,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const svn_wc_notify_t *VAR_1, apr_pool_t *VAR_2)
{
  const svn_client_ctx_t *VAR_3 = VAR_0;

  if (VAR_3->notify_func)
    VAR_3->notify_func(VAR_3->notify_baton, VAR_1->path, VAR_1->action, VAR_1->kind,
                     VAR_1->mime_type, VAR_1->content_state, VAR_1->prop_state,
                     VAR_1->revision);
}
