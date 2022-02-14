
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
struct TYPE_11__ {struct edit_baton* fetch_baton; int fetch_base_func; int fetch_props_func; int fetch_kind_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct TYPE_12__ {int absent_file; int absent_directory; int close_edit; int change_dir_prop; int change_file_prop; int close_directory; int close_file; int apply_textdelta; int open_file; int add_file; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_2__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct edit_baton {int * pool; void* cancel_baton; int cancel_func; int text_deltas; int empty_hash; int * empty_file; int target_revision; int revision; int * ra_session; int const* processor; int depth; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct edit_baton* FUNC_2 (int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ,void*,TYPE_2__*,struct edit_baton*,TYPE_2__ const**,void**,int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__ const**,void**,TYPE_2__ const*,void*,int *,int *,TYPE_1__*,int *,int *) ;
 int * FUNC_7 (int *) ;

svn_error_t *
FUNC_8(const svn_delta_editor_t **VAR_20,
                             void **VAR_21,
                             svn_ra_session_t *VAR_22,
                             svn_depth_t VAR_23,
                             svn_revnum_t VAR_24,
                             svn_boolean_t VAR_25,
                             const svn_diff_tree_processor_t *VAR_26,
                             svn_cancel_func_t VAR_27,
                             void *VAR_28,
                             apr_pool_t *VAR_29)
{
  apr_pool_t *VAR_30 = FUNC_7(VAR_29);
  svn_delta_editor_t *VAR_31 = FUNC_3(VAR_30);
  struct edit_baton *VAR_32 = FUNC_2(VAR_30, sizeof(*VAR_32));
  svn_delta_shim_callbacks_t *VAR_33 =
                                FUNC_5(VAR_30);

  VAR_32->pool = VAR_30;
  VAR_32->depth = VAR_23;

  VAR_32->processor = VAR_26;

  VAR_32->ra_session = VAR_22;

  VAR_32->revision = VAR_24;
  VAR_32->target_revision = VAR_0;
  VAR_32->empty_file = ((void*)0);
  VAR_32->empty_hash = FUNC_1(VAR_32->pool);
  VAR_32->text_deltas = VAR_25;
  VAR_32->cancel_func = VAR_27;
  VAR_32->cancel_baton = VAR_28;

  VAR_31->set_target_revision = VAR_19;
  VAR_31->open_root = VAR_18;
  VAR_31->delete_entry = VAR_12;
  VAR_31->add_directory = VAR_4;
  VAR_31->open_directory = VAR_16;
  VAR_31->add_file = VAR_5;
  VAR_31->open_file = VAR_17;
  VAR_31->apply_textdelta = VAR_6;
  VAR_31->close_file = VAR_11;
  VAR_31->close_directory = VAR_9;
  VAR_31->change_file_prop = VAR_8;
  VAR_31->change_dir_prop = VAR_7;
  VAR_31->close_edit = VAR_10;
  VAR_31->absent_directory = VAR_2;
  VAR_31->absent_file = VAR_3;

  FUNC_0(FUNC_4(VAR_27, VAR_28,
                                            VAR_31, VAR_32,
                                            VAR_20, VAR_21,
                                            VAR_32->pool));

  VAR_33->fetch_kind_func = VAR_14;
  VAR_33->fetch_props_func = VAR_15;
  VAR_33->fetch_base_func = VAR_13;
  VAR_33->fetch_baton = VAR_32;

  FUNC_0(FUNC_6(VAR_20, VAR_21, *VAR_20, *VAR_21,
                                   ((void*)0), ((void*)0), VAR_33,
                                   VAR_29, VAR_29));

  return VAR_1;
}
