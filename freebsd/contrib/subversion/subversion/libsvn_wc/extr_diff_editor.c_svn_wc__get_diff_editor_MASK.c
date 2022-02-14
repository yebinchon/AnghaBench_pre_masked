
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
struct TYPE_20__ {struct svn_wc__shim_fetch_baton_t* fetch_baton; int fetch_base_func; int fetch_props_func; int fetch_kind_func; } ;
typedef TYPE_2__ svn_delta_shim_callbacks_t ;
struct TYPE_21__ {int close_edit; int close_file; int change_dir_prop; int change_file_prop; int apply_textdelta; int open_file; int add_file; int close_directory; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_3__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct svn_wc__shim_fetch_baton_t {int fetch_base; int base_abspath; int db; } ;
struct edit_baton_t {int anchor_abspath; int pool; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_22__ {scalar_t__ nelts; } ;
typedef TYPE_4__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct svn_wc__shim_fetch_baton_t* FUNC_2 (int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct edit_baton_t**,int ,char const*,char const*,int const*,int ,int ,int ,int ,int ,void*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,TYPE_3__ const*,void*,TYPE_3__ const**,void**,int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int VAR_15 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_3__ const**,void**,TYPE_3__ const*,void*,int *,int *,TYPE_2__*,int *,int *) ;
 int FUNC_9 (int **,TYPE_4__ const*,int *) ;
 int FUNC_10 (TYPE_3__ const**,void**,int ,char const*,char const*,TYPE_3__ const*,void*,int *) ;
 int * FUNC_11 (int const*,TYPE_1__*,char const*,int *,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

svn_error_t *
FUNC_12(const svn_delta_editor_t **VAR_19,
                        void **VAR_20,
                        svn_wc_context_t *VAR_21,
                        const char *VAR_22,
                        const char *VAR_23,
                        svn_depth_t VAR_24,
                        svn_boolean_t VAR_25,
                        svn_boolean_t VAR_26,
                        svn_boolean_t VAR_27,
                        svn_boolean_t VAR_28,
                        const apr_array_header_t *VAR_29,
                        const svn_diff_tree_processor_t *VAR_30,
                        svn_cancel_func_t VAR_31,
                        void *VAR_32,
                        apr_pool_t *VAR_33,
                        apr_pool_t *VAR_34)
{
  struct edit_baton_t *VAR_35;
  void *VAR_36;
  svn_delta_editor_t *VAR_37;
  const svn_delta_editor_t *VAR_38;
  struct svn_wc__shim_fetch_baton_t *VAR_39;
  svn_delta_shim_callbacks_t *VAR_40 =
                                FUNC_6(VAR_33);

  FUNC_1(FUNC_7(VAR_22));


  if (VAR_29 && VAR_29->nelts)
    {
      apr_hash_t *VAR_41;

      FUNC_0(FUNC_9(&VAR_41, VAR_29,
                                         VAR_33));
      VAR_30 = FUNC_11(
                         VAR_30, VAR_21, VAR_22,
                         VAR_41, VAR_33);
    }

  FUNC_0(FUNC_3(&VAR_35,
                          VAR_21->db,
                          VAR_22, VAR_23,
                          VAR_30,
                          VAR_24, VAR_25,
                          VAR_26, VAR_27,
                          VAR_31, VAR_32,
                          VAR_33));

  VAR_37 = FUNC_4(VAR_35->pool);

  VAR_37->set_target_revision = VAR_14;
  VAR_37->open_root = VAR_13;
  VAR_37->delete_entry = VAR_10;
  VAR_37->add_directory = VAR_2;
  VAR_37->open_directory = VAR_11;
  VAR_37->close_directory = VAR_7;
  VAR_37->add_file = VAR_3;
  VAR_37->open_file = VAR_12;
  VAR_37->apply_textdelta = VAR_4;
  VAR_37->change_file_prop = VAR_6;
  VAR_37->change_dir_prop = VAR_5;
  VAR_37->close_file = VAR_9;
  VAR_37->close_edit = VAR_8;

  VAR_38 = VAR_37;
  VAR_36 = VAR_35;

  if (!VAR_28
      && VAR_24 == VAR_15)
    FUNC_0(FUNC_10(&VAR_38,
                                                &VAR_36,
                                                VAR_21->db,
                                                VAR_22,
                                                VAR_23,
                                                VAR_38,
                                                VAR_36,
                                                VAR_33));

  FUNC_0(FUNC_5(VAR_31,
                                            VAR_32,
                                            VAR_38,
                                            VAR_36,
                                            VAR_19,
                                            VAR_20,
                                            VAR_33));

  VAR_39 = FUNC_2(VAR_33, sizeof(*VAR_39));
  VAR_39->db = VAR_21->db;
  VAR_39->base_abspath = VAR_35->anchor_abspath;
  VAR_39->fetch_base = VAR_1;

  VAR_40->fetch_kind_func = VAR_17;
  VAR_40->fetch_props_func = VAR_18;
  VAR_40->fetch_base_func = VAR_16;
  VAR_40->fetch_baton = VAR_39;


  FUNC_0(FUNC_8(VAR_19, VAR_20, *VAR_19, *VAR_20,
                                   ((void*)0), ((void*)0), VAR_40,
                                   VAR_33, VAR_34));

  return VAR_0;
}
