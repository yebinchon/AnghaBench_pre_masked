
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct file_merge_baton {int scratch_pool; int current_line_latest; int latest_file; int merged_file; scalar_t__ abort_merge; } ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                              apr_off_t VAR_2,
                              apr_off_t VAR_3,
                              apr_off_t VAR_4,
                              apr_off_t VAR_5,
                              apr_off_t VAR_6,
                              apr_off_t VAR_7)
{
  struct file_merge_baton *VAR_8 = VAR_1;

  if (VAR_8->abort_merge)
    return VAR_0;

  FUNC_0(FUNC_1(&VAR_8->current_line_latest,
                              VAR_8->merged_file,
                              VAR_8->latest_file,
                              VAR_6,
                              VAR_7,
                              VAR_8->current_line_latest,
                              VAR_8->scratch_pool));

  return VAR_0;
}
