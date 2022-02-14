
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_client__merge_path_t ;
typedef int svn_boolean_t ;
typedef int single_range_conflict_report_t ;
typedef int merge_source_t ;
struct TYPE_7__ {int * nodes_with_mergeinfo; } ;
struct TYPE_8__ {TYPE_1__ notify_begin; } ;
typedef TYPE_2__ merge_cmd_baton_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ,int **,int const*,char const*,int *,int const*,int ,int ,TYPE_2__*,int *,int *) ;
 int FUNC_4 (int **,int const*,char const*,int *,int const*,int ,TYPE_2__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_mergeinfo_catalog_t VAR_1,
                   single_range_conflict_report_t **VAR_2,
                   const merge_source_t *VAR_3,
                   const char *VAR_4,
                   const svn_diff_tree_processor_t *VAR_5,
                   svn_depth_t VAR_6,
                   svn_boolean_t VAR_7,
                   merge_cmd_baton_t *VAR_8,
                   apr_pool_t *VAR_9,
                   apr_pool_t *VAR_10)
{
  apr_array_header_t *VAR_11;



  VAR_11 =
    FUNC_2(VAR_10, 16, sizeof(svn_client__merge_path_t *));


  VAR_8->notify_begin.nodes_with_mergeinfo = VAR_11;



  if (FUNC_0(VAR_8))
    FUNC_1(FUNC_3(VAR_1, VAR_2,
                                         VAR_3, VAR_4,
                                         VAR_11,
                                         VAR_5, VAR_6,
                                         VAR_7,
                                         VAR_8, VAR_9, VAR_10));
  else
    FUNC_1(FUNC_4(VAR_2,
                                           VAR_3, VAR_4,
                                           VAR_11,
                                           VAR_5, VAR_6,
                                           VAR_8, VAR_9, VAR_10));

  VAR_8->notify_begin.nodes_with_mergeinfo = ((void*)0);

  return VAR_0;
}
