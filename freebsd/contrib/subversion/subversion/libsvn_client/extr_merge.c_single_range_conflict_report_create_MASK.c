
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * remaining_source; int * conflicted_range; } ;
typedef TYPE_1__ single_range_conflict_report_t ;
typedef int merge_source_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int const*,int *) ;

__attribute__((used)) static single_range_conflict_report_t *
FUNC_3(const merge_source_t *VAR_0,
                                    const merge_source_t *VAR_1,
                                    apr_pool_t *VAR_2)
{
  single_range_conflict_report_t *VAR_3
    = FUNC_0(VAR_2, sizeof(*VAR_3));

  FUNC_1(VAR_0 != ((void*)0));

  VAR_3->conflicted_range = FUNC_2(VAR_0, VAR_2);
  VAR_3->remaining_source
    = VAR_1 ? FUNC_2(VAR_1, VAR_2)
                       : ((void*)0);
  return VAR_3;
}
