
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rev_id; int fs; scalar_t__ txn_name; int txn; int diff_cmd; int properties_only; int ignore_properties; int diff_options; int is_revision; int copy_info; int full_paths; int diff_copy_from; int no_diff_added; int no_diff_deleted; int limit; int show_ids; int repos; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {scalar_t__ rev; char* extensions; int diff_cmd; int properties_only; int ignore_properties; int * txn; int copy_info; int full_paths; int diff_copy_from; int no_diff_added; int no_diff_deleted; int limit; int show_ids; int repos_path; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,char*,int ,int *) ;
 int FUNC_4 (int *,int ,scalar_t__,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (scalar_t__*,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int *,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svnlook_ctxt_t **VAR_4,
               struct svnlook_opt_state *VAR_5,
               apr_pool_t *VAR_6)
{
  svnlook_ctxt_t *VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));

  FUNC_0(FUNC_8(&(VAR_7->repos), VAR_5->repos_path, ((void*)0),
                          VAR_6, VAR_6));
  VAR_7->fs = FUNC_7(VAR_7->repos);
  FUNC_5(VAR_7->fs, VAR_3, ((void*)0));
  VAR_7->show_ids = VAR_5->show_ids;
  VAR_7->limit = VAR_5->limit;
  VAR_7->no_diff_deleted = VAR_5->no_diff_deleted;
  VAR_7->no_diff_added = VAR_5->no_diff_added;
  VAR_7->diff_copy_from = VAR_5->diff_copy_from;
  VAR_7->full_paths = VAR_5->full_paths;
  VAR_7->copy_info = VAR_5->copy_info;
  VAR_7->is_revision = VAR_5->txn == ((void*)0);
  VAR_7->rev_id = VAR_5->rev;
  VAR_7->txn_name = FUNC_2(VAR_6, VAR_5->txn);
  VAR_7->diff_options = FUNC_3(VAR_5->extensions
                                          ? VAR_5->extensions : "",
                                          " \t\n\r", VAR_2, VAR_6);
  VAR_7->ignore_properties = VAR_5->ignore_properties;
  VAR_7->properties_only = VAR_5->properties_only;
  VAR_7->diff_cmd = VAR_5->diff_cmd;

  if (VAR_7->txn_name)
    FUNC_0(FUNC_4(&(VAR_7->txn), VAR_7->fs,
                            VAR_7->txn_name, VAR_6));
  else if (VAR_7->rev_id == VAR_0)
    FUNC_0(FUNC_6(&(VAR_7->rev_id), VAR_7->fs, VAR_6));

  *VAR_4 = VAR_7;
  return VAR_1;
}
