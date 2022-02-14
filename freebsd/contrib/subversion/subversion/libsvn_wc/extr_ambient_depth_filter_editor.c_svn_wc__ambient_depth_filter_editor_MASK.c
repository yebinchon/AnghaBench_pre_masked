
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int close_edit; int absent_file; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int absent_directory; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_1__ svn_delta_editor_t ;
struct edit_baton {char const* anchor_abspath; char const* target; int * db; void* wrapped_edit_baton; TYPE_1__ const* wrapped_editor; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct edit_baton* FUNC_1 (int *,int) ;
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
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;

svn_error_t *
FUNC_4(const svn_delta_editor_t **VAR_16,
                                    void **VAR_17,
                                    svn_wc__db_t *VAR_18,
                                    const char *VAR_19,
                                    const char *VAR_20,
                                    const svn_delta_editor_t *VAR_21,
                                    void *VAR_22,
                                    apr_pool_t *VAR_23)
{
  svn_delta_editor_t *VAR_24;
  struct edit_baton *VAR_25;

  FUNC_0(FUNC_3(VAR_19));

  VAR_24 = FUNC_2(VAR_23);
  VAR_24->set_target_revision = VAR_15;
  VAR_24->open_root = VAR_14;
  VAR_24->delete_entry = VAR_11;
  VAR_24->add_directory = VAR_3;
  VAR_24->open_directory = VAR_12;
  VAR_24->change_dir_prop = VAR_6;
  VAR_24->close_directory = VAR_8;
  VAR_24->absent_directory = VAR_1;
  VAR_24->add_file = VAR_4;
  VAR_24->open_file = VAR_13;
  VAR_24->apply_textdelta = VAR_5;
  VAR_24->change_file_prop = VAR_7;
  VAR_24->close_file = VAR_10;
  VAR_24->absent_file = VAR_2;
  VAR_24->close_edit = VAR_9;

  VAR_25 = FUNC_1(VAR_23, sizeof(*VAR_25));
  VAR_25->wrapped_editor = VAR_21;
  VAR_25->wrapped_edit_baton = VAR_22;
  VAR_25->db = VAR_18;
  VAR_25->anchor_abspath = VAR_19;
  VAR_25->target = VAR_20;

  *VAR_16 = VAR_24;
  *VAR_17 = VAR_25;

  return VAR_0;
}
