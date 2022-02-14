
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_13__ {int * db; } ;
typedef TYPE_2__ svn_wc_context_t ;
typedef int svn_wc_conflict_resolver_func2_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_prop_t ;
struct TYPE_12__ {void* number; } ;
struct TYPE_14__ {scalar_t__ kind; TYPE_1__ value; } ;
typedef TYPE_3__ svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int close_edit; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int set_target_revision; int open_root; } ;
typedef TYPE_4__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct edit_baton {char const* repos_root_url; char const* diff3cmd; int propchanges; void* notify_baton; int notify_func; void* cancel_baton; int cancel_func; void* conflict_baton; int conflict_func; void* recorded_revision; void* recorded_peg_revision; void* changed_rev; void* recorded_repos_relpath; void* record_ancestor_abspath; int const* ext_patterns; int use_commit_times; int * iprops; void* original_revision; void* new_repos_relpath; void* old_repos_relpath; void* repos_uuid; int * target_revision; void* local_abspath; int name; void* wri_abspath; int * db; int * pool; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 struct edit_baton* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_3 (int *) ;
 int * FUNC_4 (int ,void*,TYPE_4__*,struct edit_baton*,TYPE_4__ const**,void**,int *) ;
 int FUNC_5 (void*,int *) ;
 void* FUNC_6 (char const*,int *) ;
 scalar_t__ VAR_9 ;
 void* FUNC_7 (char const*,char const*,int *) ;

svn_error_t *
FUNC_8(const svn_delta_editor_t **VAR_10,
                                 void **VAR_11,
                                 svn_revnum_t *VAR_12,
                                 svn_wc_context_t *VAR_13,
                                 const char *VAR_14,
                                 const char *VAR_15,
                                 const char *VAR_16,
                                 const char *VAR_17,
                                 const char *VAR_18,
                                 apr_array_header_t *VAR_19,
                                 svn_boolean_t VAR_20,
                                 const char *VAR_21,
                                 const apr_array_header_t *VAR_22,
                                 const char *VAR_23,
                                 const char *VAR_24,
                                 const svn_opt_revision_t *VAR_25,
                                 const svn_opt_revision_t *VAR_26,
                                 svn_wc_conflict_resolver_func2_t VAR_27,
                                 void *VAR_28,
                                 svn_cancel_func_t VAR_29,
                                 void *VAR_30,
                                 svn_wc_notify_func2_t VAR_31,
                                 void *VAR_32,
                                 apr_pool_t *VAR_33,
                                 apr_pool_t *VAR_34)
{
  svn_wc__db_t *VAR_35 = VAR_13->db;
  apr_pool_t *VAR_36 = VAR_33;
  struct edit_baton *VAR_37 = FUNC_1(VAR_36, sizeof(*VAR_37));
  svn_delta_editor_t *VAR_38 = FUNC_3(VAR_36);

  VAR_37->pool = VAR_36;
  VAR_37->db = VAR_35;
  VAR_37->local_abspath = FUNC_2(VAR_36, VAR_14);
  if (VAR_15)
    VAR_37->wri_abspath = FUNC_2(VAR_36, VAR_15);
  else
    VAR_37->wri_abspath = FUNC_6(VAR_14, VAR_36);
  VAR_37->name = FUNC_5(VAR_37->local_abspath, ((void*)0));
  VAR_37->target_revision = VAR_12;

  VAR_37->repos_root_url = FUNC_2(VAR_36, VAR_17);
  VAR_37->repos_uuid = FUNC_2(VAR_36, VAR_18);
  VAR_37->new_repos_relpath = FUNC_7(VAR_37->repos_root_url, VAR_16, VAR_36);
  VAR_37->old_repos_relpath = VAR_37->new_repos_relpath;

  VAR_37->original_revision = VAR_0;

  VAR_37->iprops = VAR_19;

  VAR_37->use_commit_times = VAR_20;
  VAR_37->ext_patterns = VAR_22;
  VAR_37->diff3cmd = VAR_21;

  VAR_37->record_ancestor_abspath = FUNC_2(VAR_36,VAR_23);
  VAR_37->recorded_repos_relpath = FUNC_7(VAR_17, VAR_24,
                                                     VAR_36);

  VAR_37->changed_rev = VAR_0;

  if (VAR_25->kind == VAR_9)
    VAR_37->recorded_peg_revision = VAR_25->value.number;
  else
    VAR_37->recorded_peg_revision = VAR_0;

  if (VAR_26->kind == VAR_9)
    VAR_37->recorded_revision = VAR_26->value.number;
  else
    VAR_37->recorded_revision = VAR_0;

  VAR_37->conflict_func = VAR_27;
  VAR_37->conflict_baton = VAR_28;
  VAR_37->cancel_func = VAR_29;
  VAR_37->cancel_baton = VAR_30;
  VAR_37->notify_func = VAR_31;
  VAR_37->notify_baton = VAR_32;

  VAR_37->propchanges = FUNC_0(VAR_36, 1, sizeof(svn_prop_t));

  VAR_38->open_root = VAR_7;
  VAR_38->set_target_revision = VAR_8;
  VAR_38->add_file = VAR_1;
  VAR_38->open_file = VAR_6;
  VAR_38->apply_textdelta = VAR_2;
  VAR_38->change_file_prop = VAR_3;
  VAR_38->close_file = VAR_5;
  VAR_38->close_edit = VAR_4;

  return FUNC_4(VAR_29, VAR_30,
                                           VAR_38, VAR_37,
                                           VAR_10, VAR_11,
                                           VAR_33);
}
