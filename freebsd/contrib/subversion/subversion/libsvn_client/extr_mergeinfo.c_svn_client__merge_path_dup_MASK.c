
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* implicit_mergeinfo; void* pre_merge_mergeinfo; scalar_t__ remaining_ranges; int abspath; } ;
typedef TYPE_1__ svn_client__merge_path_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (void*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;

svn_client__merge_path_t *
FUNC_4(const svn_client__merge_path_t *VAR_0,
                           apr_pool_t *VAR_1)
{
  svn_client__merge_path_t *VAR_2 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_0));

  VAR_2->abspath = FUNC_1(VAR_1, VAR_0->abspath);
  if (VAR_2->remaining_ranges)
    VAR_2->remaining_ranges = FUNC_3(VAR_0->remaining_ranges, VAR_1);
  if (VAR_2->pre_merge_mergeinfo)
    VAR_2->pre_merge_mergeinfo = FUNC_2(VAR_0->pre_merge_mergeinfo,
                                                 VAR_1);
  if (VAR_2->implicit_mergeinfo)
    VAR_2->implicit_mergeinfo = FUNC_2(VAR_0->implicit_mergeinfo,
                                                VAR_1);

  return VAR_2;
}
