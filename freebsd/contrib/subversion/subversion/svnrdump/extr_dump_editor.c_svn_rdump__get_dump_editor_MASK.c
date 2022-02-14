
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_11__ {struct dump_edit_baton* fetch_baton; int fetch_kind_func; int fetch_props_func; int fetch_base_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct TYPE_12__ {int close_edit; int close_file; int open_file; int add_file; int apply_textdelta; int change_file_prop; int change_dir_prop; int close_directory; int open_directory; int add_directory; int delete_entry; int open_root; } ;
typedef TYPE_2__ svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
struct dump_edit_baton {char const* update_anchor_relpath; int delta_abspath; int delta_file; int pool; int * pending_db; int current_revision; int * ra_session; int * stream; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dump_edit_baton* FUNC_1 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,void*,TYPE_2__*,struct dump_edit_baton*,TYPE_2__ const**,void**,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__ const**,void**,TYPE_2__ const*,void*,int *,int *,TYPE_1__*,int *,int *) ;
 int VAR_16 ;
 int FUNC_6 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_7 (int *) ;

svn_error_t *
FUNC_8(const svn_delta_editor_t **VAR_17,
                           void **VAR_18,
                           svn_revnum_t VAR_19,
                           svn_stream_t *VAR_20,
                           svn_ra_session_t *VAR_21,
                           const char *VAR_22,
                           svn_cancel_func_t VAR_23,
                           void *VAR_24,
                           apr_pool_t *VAR_25)
{
  struct dump_edit_baton *VAR_26;
  svn_delta_editor_t *VAR_27;
  svn_delta_shim_callbacks_t *VAR_28 =
                                        FUNC_4(VAR_25);

  VAR_26 = FUNC_1(VAR_25, sizeof(struct dump_edit_baton));
  VAR_26->stream = VAR_20;
  VAR_26->ra_session = VAR_21;
  VAR_26->update_anchor_relpath = VAR_22;
  VAR_26->current_revision = VAR_19;
  VAR_26->pending_db = ((void*)0);


  VAR_26->pool = FUNC_7(VAR_25);




  FUNC_0(FUNC_6(&(VAR_26->delta_file), &(VAR_26->delta_abspath),
                                   ((void*)0), VAR_16, VAR_25, VAR_25));

  VAR_27 = FUNC_2(VAR_25);
  VAR_27->open_root = VAR_15;
  VAR_27->delete_entry = VAR_9;
  VAR_27->add_directory = VAR_1;
  VAR_27->open_directory = VAR_13;
  VAR_27->close_directory = VAR_6;
  VAR_27->change_dir_prop = VAR_4;
  VAR_27->change_file_prop = VAR_5;
  VAR_27->apply_textdelta = VAR_3;
  VAR_27->add_file = VAR_2;
  VAR_27->open_file = VAR_14;
  VAR_27->close_file = VAR_8;
  VAR_27->close_edit = VAR_7;


  *VAR_18 = VAR_26;
  *VAR_17 = VAR_27;


  FUNC_0(FUNC_3(VAR_23, VAR_24,
                                            VAR_27, VAR_26, VAR_17, VAR_18, VAR_25));

  VAR_28->fetch_base_func = VAR_10;
  VAR_28->fetch_props_func = VAR_12;
  VAR_28->fetch_kind_func = VAR_11;
  VAR_28->fetch_baton = VAR_26;

  FUNC_0(FUNC_5(VAR_17, VAR_18, *VAR_17, *VAR_18,
                                   ((void*)0), ((void*)0), VAR_28, VAR_25, VAR_25));

  return VAR_0;
}
