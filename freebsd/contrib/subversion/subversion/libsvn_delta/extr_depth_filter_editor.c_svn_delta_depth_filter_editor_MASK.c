
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_5__ {int close_edit; int absent_file; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int absent_directory; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct edit_baton {scalar_t__ requested_depth; int has_target; void* wrapped_edit_baton; TYPE_1__ const* wrapped_editor; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct edit_baton* FUNC_0 (int *,int) ;
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
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

svn_error_t *
FUNC_2(const svn_delta_editor_t **VAR_18,
                              void **VAR_19,
                              const svn_delta_editor_t *VAR_20,
                              void *VAR_21,
                              svn_depth_t VAR_22,
                              svn_boolean_t VAR_23,
                              apr_pool_t *VAR_24)
{
  svn_delta_editor_t *VAR_25;
  struct edit_baton *VAR_26;





  if ((VAR_22 == VAR_17)
      || (VAR_22 == VAR_16))
    {
      *VAR_18 = VAR_20;
      *VAR_19 = VAR_21;
      return VAR_0;
    }

  VAR_25 = FUNC_1(VAR_24);
  VAR_25->set_target_revision = VAR_15;
  VAR_25->open_root = VAR_14;
  VAR_25->delete_entry = VAR_11;
  VAR_25->add_directory = VAR_3;
  VAR_25->open_directory = VAR_12;
  VAR_25->change_dir_prop = VAR_6;
  VAR_25->close_directory = VAR_8;
  VAR_25->absent_directory = VAR_1;
  VAR_25->add_file = VAR_4;
  VAR_25->open_file = VAR_13;
  VAR_25->apply_textdelta = VAR_5;
  VAR_25->change_file_prop = VAR_7;
  VAR_25->close_file = VAR_10;
  VAR_25->absent_file = VAR_2;
  VAR_25->close_edit = VAR_9;

  VAR_26 = FUNC_0(VAR_24, sizeof(*VAR_26));
  VAR_26->wrapped_editor = VAR_20;
  VAR_26->wrapped_edit_baton = VAR_21;
  VAR_26->has_target = VAR_23;
  VAR_26->requested_depth = VAR_22;

  *VAR_18 = VAR_25;
  *VAR_19 = VAR_26;

  return VAR_0;
}
