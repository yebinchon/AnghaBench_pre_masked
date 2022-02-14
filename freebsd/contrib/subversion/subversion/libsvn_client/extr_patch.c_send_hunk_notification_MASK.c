
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char const* prop_name; int hunk_fuzz; int hunk_matched_line; int hunk_modified_length; int hunk_modified_start; int hunk_original_length; int hunk_original_start; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_wc_notify_action_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_2__ svn_client_ctx_t ;
struct TYPE_12__ {scalar_t__ local_relpath; scalar_t__ local_abspath; } ;
typedef TYPE_3__ patch_target_t ;
struct TYPE_13__ {int report_fuzz; int matched_line; int hunk; scalar_t__ rejected; scalar_t__ already_applied; } ;
typedef TYPE_4__ hunk_info_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (scalar_t__,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_6(const hunk_info_t *VAR_4,
                       const patch_target_t *VAR_5,
                       const char *VAR_6,
                       const svn_client_ctx_t *VAR_7,
                       apr_pool_t *VAR_8)
{
  svn_wc_notify_t *VAR_9;
  svn_wc_notify_action_t VAR_10;

  if (VAR_4->already_applied)
    VAR_10 = VAR_2;
  else if (VAR_4->rejected)
    VAR_10 = VAR_3;
  else
    VAR_10 = VAR_1;

  VAR_9 = FUNC_5(VAR_5->local_abspath
                                    ? VAR_5->local_abspath
                                    : VAR_5->local_relpath,
                                VAR_10, VAR_8);
  VAR_9->hunk_original_start =
    FUNC_4(VAR_4->hunk);
  VAR_9->hunk_original_length =
    FUNC_3(VAR_4->hunk);
  VAR_9->hunk_modified_start =
    FUNC_2(VAR_4->hunk);
  VAR_9->hunk_modified_length =
    FUNC_1(VAR_4->hunk);
  VAR_9->hunk_matched_line = VAR_4->matched_line;
  VAR_9->hunk_fuzz = VAR_4->report_fuzz;
  VAR_9->prop_name = VAR_6;

  VAR_7->notify_func2(VAR_7->notify_baton2, VAR_9, VAR_8);

  return VAR_0;
}
