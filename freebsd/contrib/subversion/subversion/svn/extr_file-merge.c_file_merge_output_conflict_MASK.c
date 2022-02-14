
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_t ;
struct file_merge_baton {int scratch_pool; int config; int editor_cmd; int current_line_latest; int current_line_modified; int latest_file; int modified_file; int merged_file; scalar_t__ abort_merge; int remains_in_conflict; } ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,scalar_t__*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                           apr_off_t VAR_2,
                           apr_off_t VAR_3,
                           apr_off_t VAR_4,
                           apr_off_t VAR_5,
                           apr_off_t VAR_6,
                           apr_off_t VAR_7,
                           svn_diff_t *VAR_8)
{
  struct file_merge_baton *VAR_9 = VAR_1;

  if (VAR_9->abort_merge)
    return VAR_0;

  FUNC_0(FUNC_1(&VAR_9->remains_in_conflict,
                            &VAR_9->abort_merge,
                            VAR_9->merged_file,
                            VAR_9->modified_file,
                            VAR_9->latest_file,
                            VAR_4,
                            VAR_5,
                            VAR_6,
                            VAR_7,
                            &VAR_9->current_line_modified,
                            &VAR_9->current_line_latest,
                            VAR_9->editor_cmd,
                            VAR_9->config,
                            VAR_9->scratch_pool));
  return VAR_0;
}
