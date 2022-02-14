
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* path; void* old_revision; void* revision; int lock_state; int prop_state; int content_state; int kind; int action; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_action_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

svn_wc_notify_t *
FUNC_1(const char *VAR_4,
                     svn_wc_notify_action_t VAR_5,
                     apr_pool_t *VAR_6)
{
  svn_wc_notify_t *VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7));
  VAR_7->path = VAR_4;
  VAR_7->action = VAR_5;
  VAR_7->kind = VAR_1;
  VAR_7->content_state = VAR_7->prop_state = VAR_3;
  VAR_7->lock_state = VAR_2;
  VAR_7->revision = VAR_0;
  VAR_7->old_revision = VAR_0;

  return VAR_7;
}
