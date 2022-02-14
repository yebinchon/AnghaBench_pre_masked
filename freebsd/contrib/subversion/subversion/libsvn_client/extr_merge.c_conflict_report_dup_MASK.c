
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conflicted_range; int target_abspath; } ;
typedef TYPE_1__ svn_client__conflict_report_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static svn_client__conflict_report_t *
FUNC_3(const svn_client__conflict_report_t *VAR_0,
                    apr_pool_t *VAR_1)
{
  svn_client__conflict_report_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                                   sizeof(*VAR_2));

  VAR_2->target_abspath = FUNC_1(VAR_1, VAR_0->target_abspath);
  VAR_2->conflicted_range = FUNC_2(VAR_0->conflicted_range,
                                           VAR_1);
  return VAR_2;
}
