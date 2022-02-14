
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int was_last_range; int conflicted_range; int target_abspath; } ;
typedef TYPE_1__ svn_client__conflict_report_t ;
typedef int svn_boolean_t ;
typedef int merge_source_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static svn_client__conflict_report_t *
FUNC_3(const char *VAR_0,
                       const merge_source_t *VAR_1,
                       svn_boolean_t VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_client__conflict_report_t *VAR_4 = FUNC_0(VAR_3,
                                                     sizeof(*VAR_4));

  VAR_4->target_abspath = FUNC_1(VAR_3, VAR_0);
  VAR_4->conflicted_range = FUNC_2(VAR_1, VAR_3);
  VAR_4->was_last_range = VAR_2;
  return VAR_4;
}
