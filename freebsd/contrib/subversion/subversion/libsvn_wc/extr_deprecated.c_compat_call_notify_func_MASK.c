
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; int prop_state; int content_state; int mime_type; int kind; int action; int path; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct compat_notify_baton_t {int baton; int (* func ) (int ,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
                        const svn_wc_notify_t *VAR_1,
                        apr_pool_t *VAR_2)
{
  struct compat_notify_baton_t *VAR_3 = VAR_0;

  if (VAR_3->func)
    (*VAR_3->func)(VAR_3->baton, VAR_1->path, VAR_1->action, VAR_1->kind, VAR_1->mime_type,
                VAR_1->content_state, VAR_1->prop_state, VAR_1->revision);
}
