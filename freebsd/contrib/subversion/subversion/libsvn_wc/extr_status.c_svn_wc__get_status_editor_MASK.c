
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_wc_status_func4_t ;
struct TYPE_17__ {int db; } ;
typedef TYPE_2__ svn_wc_context_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_18__ {struct svn_wc__shim_fetch_baton_t* fetch_baton; int fetch_base_func; int fetch_props_func; int fetch_kind_func; } ;
typedef TYPE_3__ svn_delta_shim_callbacks_t ;
struct TYPE_19__ {int close_edit; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_4__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef void* svn_boolean_t ;
struct svn_wc__shim_fetch_baton_t {void* fetch_base; void* base_abspath; int db; } ;
struct TYPE_16__ {int ignore_text_mods; int externals; int * repos_root; int * repos_locks; void* check_working_copy; int target_abspath; int db; } ;
struct edit_baton {void* anchor_abspath; int anchor_status; int const* ignores; int target_abspath; TYPE_1__ wb; void* root_opened; void* target_basename; void* cancel_baton; int cancel_func; void* status_baton; int status_func; void* no_ignore; void* get_all; int db; int * target_revision; int default_depth; } ;
typedef int apr_pool_t ;
typedef int const apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct svn_wc__shim_fetch_baton_t* FUNC_1 (int *,int) ;
 struct edit_baton* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,char const*,void*,int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int ,void*,TYPE_4__ const*,void*,TYPE_4__ const**,void**,int *) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (char const*,char const*,int *) ;
 int FUNC_9 (TYPE_4__ const**,void**,TYPE_4__ const*,void*,int *,int *,TYPE_3__*,int *,int *) ;
 int FUNC_10 (TYPE_4__ const**,void**,int ,char const*,char const*,TYPE_4__ const*,void*,int *) ;
 int FUNC_11 (int *,int ,int ,int *,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int const**,int *,int *) ;

svn_error_t *
FUNC_13(const svn_delta_editor_t **VAR_18,
                          void **VAR_19,
                          void **VAR_20,
                          svn_revnum_t *VAR_21,
                          svn_wc_context_t *VAR_22,
                          const char *VAR_23,
                          const char *VAR_24,
                          svn_depth_t VAR_25,
                          svn_boolean_t VAR_26,
                          svn_boolean_t VAR_27,
                          svn_boolean_t VAR_28,
                          svn_boolean_t VAR_29,
                          svn_boolean_t VAR_30,
                          const apr_array_header_t *VAR_31,
                          svn_wc_status_func4_t VAR_32,
                          void *VAR_33,
                          svn_cancel_func_t VAR_34,
                          void *VAR_35,
                          apr_pool_t *VAR_36,
                          apr_pool_t *VAR_37)
{
  struct edit_baton *VAR_38;
  svn_delta_editor_t *VAR_39 = FUNC_5(VAR_36);
  void *VAR_40;
  struct svn_wc__shim_fetch_baton_t *VAR_41;
  const svn_delta_editor_t *VAR_42;
  svn_delta_shim_callbacks_t *VAR_43 =
                                FUNC_7(VAR_36);


  VAR_38 = FUNC_2(VAR_36, sizeof(*VAR_38));
  VAR_38->default_depth = VAR_25;
  VAR_38->target_revision = VAR_21;
  VAR_38->db = VAR_22->db;
  VAR_38->get_all = VAR_26;
  VAR_38->no_ignore = VAR_28;
  VAR_38->status_func = VAR_32;
  VAR_38->status_baton = VAR_33;
  VAR_38->cancel_func = VAR_34;
  VAR_38->cancel_baton = VAR_35;
  VAR_38->anchor_abspath = FUNC_3(VAR_36, VAR_23);
  VAR_38->target_abspath = FUNC_8(VAR_23, VAR_24,
                                          VAR_36);

  VAR_38->target_basename = FUNC_3(VAR_36, VAR_24);
  VAR_38->root_opened = VAR_0;

  VAR_38->wb.db = VAR_22->db;
  VAR_38->wb.target_abspath = VAR_38->target_abspath;
  VAR_38->wb.ignore_text_mods = !VAR_27;
  VAR_38->wb.check_working_copy = VAR_27;
  VAR_38->wb.repos_locks = ((void*)0);
  VAR_38->wb.repos_root = ((void*)0);

  FUNC_0(FUNC_11(&VAR_38->wb.externals,
                                             VAR_22->db, VAR_38->target_abspath,
                                             VAR_36, VAR_37));



  if (VAR_31)
    {
      VAR_38->ignores = VAR_31;
    }
  else
    {
      apr_array_header_t *VAR_44;

      FUNC_0(FUNC_12(&VAR_44, ((void*)0), VAR_36));
      VAR_38->ignores = VAR_44;
    }



  FUNC_0(FUNC_4(&(VAR_38->anchor_status), VAR_22->db, VAR_23,
                          VAR_27, VAR_36, VAR_37));


  VAR_39->set_target_revision = VAR_14;
  VAR_39->open_root = VAR_13;
  VAR_39->delete_entry = VAR_10;
  VAR_39->add_directory = VAR_2;
  VAR_39->open_directory = VAR_11;
  VAR_39->change_dir_prop = VAR_5;
  VAR_39->close_directory = VAR_7;
  VAR_39->add_file = VAR_3;
  VAR_39->open_file = VAR_12;
  VAR_39->apply_textdelta = VAR_4;
  VAR_39->change_file_prop = VAR_6;
  VAR_39->close_file = VAR_9;
  VAR_39->close_edit = VAR_8;

  VAR_42 = VAR_39;
  VAR_40 = VAR_38;

  if (!VAR_30
      && !VAR_29)
    FUNC_0(FUNC_10(&VAR_42,
                                                &VAR_40,
                                                VAR_22->db,
                                                VAR_23,
                                                VAR_24,
                                                VAR_42,
                                                VAR_40,
                                                VAR_36));


  FUNC_0(FUNC_6(VAR_34, VAR_35,
                                            VAR_42, VAR_40,
                                            VAR_18, VAR_19,
                                            VAR_36));

  if (VAR_20)
    *VAR_20 = VAR_38;

  VAR_41 = FUNC_1(VAR_36, sizeof(*VAR_41));
  VAR_41->db = VAR_22->db;
  VAR_41->base_abspath = VAR_38->anchor_abspath;
  VAR_41->fetch_base = VAR_0;

  VAR_43->fetch_kind_func = VAR_16;
  VAR_43->fetch_props_func = VAR_17;
  VAR_43->fetch_base_func = VAR_15;
  VAR_43->fetch_baton = VAR_41;

  FUNC_0(FUNC_9(VAR_18, VAR_19, *VAR_18, *VAR_19,
                                   ((void*)0), ((void*)0), VAR_43,
                                   VAR_36, VAR_37));

  return VAR_1;
}
