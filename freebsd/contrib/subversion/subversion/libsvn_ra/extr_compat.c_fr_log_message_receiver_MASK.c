
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; int changed_paths2; int revprops; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
struct rev {int props; struct rev* next; int path; int revision; } ;
struct fr_log_message_baton {int pool; int path; int copyrev; int action; struct rev* eldest; } ;
typedef int apr_pool_t ;


 struct rev* FUNC_0 (int ,int) ;
 int * FUNC_1 (int *,int *,int *,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                        svn_log_entry_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  struct fr_log_message_baton *VAR_4 = VAR_1;
  struct rev *VAR_5;

  VAR_5 = FUNC_0(VAR_4->pool, sizeof(*VAR_5));
  VAR_5->revision = VAR_2->revision;
  VAR_5->path = VAR_4->path;
  VAR_5->next = VAR_4->eldest;
  VAR_4->eldest = VAR_5;


  VAR_5->props = FUNC_2(VAR_2->revprops, VAR_4->pool);

  return FUNC_1(&VAR_4->path, &VAR_4->action,
                       &VAR_4->copyrev, VAR_2->changed_paths2,
                       VAR_4->path, VAR_0, VAR_2->revision,
                       VAR_4->pool);
}
