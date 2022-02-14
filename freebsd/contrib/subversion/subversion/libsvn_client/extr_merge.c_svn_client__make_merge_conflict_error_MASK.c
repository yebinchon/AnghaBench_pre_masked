
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {TYPE_3__* conflicted_range; int target_abspath; int was_last_range; } ;
typedef TYPE_4__ svn_client__conflict_report_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_2__* loc2; TYPE_1__* loc1; } ;
struct TYPE_7__ {scalar_t__ rev; } ;
struct TYPE_6__ {scalar_t__ rev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int *,int ,scalar_t__,scalar_t__,int ) ;

svn_error_t *
FUNC_5(svn_client__conflict_report_t *VAR_2,
                                      apr_pool_t *VAR_3)
{
  FUNC_1(!VAR_2 || FUNC_2(VAR_2->target_abspath));

  if (VAR_2 && ! VAR_2->was_last_range)
    {
      svn_error_t *VAR_4 = FUNC_4(VAR_0, ((void*)0),
       FUNC_0("One or more conflicts were produced while merging r%ld:%ld into\n"
         "'%s' --\n"
         "resolve all conflicts and rerun the merge to apply the remaining\n"
         "unmerged revisions"),
       VAR_2->conflicted_range->loc1->rev, VAR_2->conflicted_range->loc2->rev,
       FUNC_3(VAR_2->target_abspath, VAR_3));
      FUNC_1(VAR_2->conflicted_range->loc1->rev != VAR_2->conflicted_range->loc2->rev);
      return VAR_4;
    }
  return VAR_1;
}
