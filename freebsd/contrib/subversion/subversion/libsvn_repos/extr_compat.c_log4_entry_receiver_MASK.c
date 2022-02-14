
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int subtractive_merge; int non_inheritable; int has_children; int revprops; int revision; } ;
typedef TYPE_1__ svn_repos_log_entry_t ;
struct TYPE_8__ {int subtractive_merge; int non_inheritable; int * changed_paths2; int has_children; int revprops; int revision; int * changed_paths; } ;
typedef TYPE_2__ svn_log_entry_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int * changes; int changes_pool; int inner_baton; int (* inner ) (int ,TYPE_2__*,int *) ;} ;
typedef TYPE_3__ log_entry_receiver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                    svn_repos_log_entry_t *VAR_2,
                    apr_pool_t *VAR_3)
{
  log_entry_receiver_baton_t *VAR_4 = VAR_1;
  svn_log_entry_t *VAR_5 = FUNC_2(VAR_3);


  VAR_5->changed_paths = VAR_4->changes;
  VAR_5->revision = VAR_2->revision;
  VAR_5->revprops = VAR_2->revprops;
  VAR_5->has_children = VAR_2->has_children;
  VAR_5->changed_paths2 = VAR_4->changes;
  VAR_5->non_inheritable = VAR_2->non_inheritable;
  VAR_5->subtractive_merge = VAR_2->subtractive_merge;


  FUNC_0(VAR_4->inner(VAR_4->inner_baton, VAR_5, VAR_3));


  FUNC_3(VAR_4->changes_pool);
  VAR_4->changes = ((void*)0);

  return VAR_0;
}
