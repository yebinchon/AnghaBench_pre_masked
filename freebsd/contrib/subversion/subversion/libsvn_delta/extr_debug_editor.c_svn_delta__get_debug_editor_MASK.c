
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int abort_edit; int close_edit; int absent_file; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int absent_directory; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_1__ svn_delta_editor_t ;
struct edit_baton {int prefix; scalar_t__ indent_level; int * out; void* wrapped_edit_baton; TYPE_1__ const* wrapped_editor; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int **,int *) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*,int ) ;
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
 int * FUNC_3 (scalar_t__,char*) ;
 int * FUNC_4 (int *,int ,int *) ;

svn_error_t *
FUNC_5(const svn_delta_editor_t **VAR_19,
                            void **VAR_20,
                            const svn_delta_editor_t *VAR_21,
                            void *VAR_22,
                            const char *VAR_23,
                            apr_pool_t *VAR_24)
{
  svn_delta_editor_t *VAR_25 = FUNC_1(VAR_24, sizeof(*VAR_25));
  struct edit_baton *VAR_26 = FUNC_1(VAR_24, sizeof(*VAR_26));
  apr_file_t *VAR_27;
  svn_stream_t *VAR_28;

  apr_status_t VAR_29 = FUNC_0(&VAR_27, VAR_24);
  if (VAR_29)
    return FUNC_3(VAR_29, "Problem opening stderr");

  VAR_28 = FUNC_4(VAR_27, VAR_2, VAR_24);

  VAR_25->set_target_revision = VAR_18;
  VAR_25->open_root = VAR_17;
  VAR_25->delete_entry = VAR_14;
  VAR_25->add_directory = VAR_6;
  VAR_25->open_directory = VAR_15;
  VAR_25->change_dir_prop = VAR_9;
  VAR_25->close_directory = VAR_11;
  VAR_25->absent_directory = VAR_4;
  VAR_25->add_file = VAR_7;
  VAR_25->open_file = VAR_16;
  VAR_25->apply_textdelta = VAR_8;
  VAR_25->change_file_prop = VAR_10;
  VAR_25->close_file = VAR_13;
  VAR_25->absent_file = VAR_5;
  VAR_25->close_edit = VAR_12;
  VAR_25->abort_edit = VAR_3;

  VAR_26->wrapped_editor = VAR_21;
  VAR_26->wrapped_edit_baton = VAR_22;
  VAR_26->out = VAR_28;
  VAR_26->indent_level = 0;

  VAR_26->prefix = FUNC_2(VAR_24, "DBG: ", VAR_23, VAR_1);

  *VAR_19 = VAR_25;
  *VAR_20 = VAR_26;

  return VAR_0;
}
