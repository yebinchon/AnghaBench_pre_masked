
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int abort_edit; int close_edit; int absent_file; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int absent_directory; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {char const* to_url; char const* source_prop_encoding; int* normalized_node_props_counter; void* strip_mergeinfo; void* migrate_svnmerge; int quiet; int base_revision; void* wrapped_edit_baton; TYPE_1__ const* wrapped_editor; } ;
typedef TYPE_2__ edit_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__* FUNC_2 (int *) ;

svn_error_t *
FUNC_3(const svn_delta_editor_t *VAR_18,
                        void *VAR_19,
                        svn_revnum_t VAR_20,
                        const char *VAR_21,
                        const char *VAR_22,
                        svn_boolean_t VAR_23,
                        const svn_delta_editor_t **VAR_24,
                        void **VAR_25,
                        int *VAR_26,
                        apr_pool_t *VAR_27)
{
  svn_delta_editor_t *VAR_28 = FUNC_2(VAR_27);
  edit_baton_t *VAR_29 = FUNC_0(VAR_27, sizeof(*VAR_29));

  VAR_28->set_target_revision = VAR_17;
  VAR_28->open_root = VAR_16;
  VAR_28->delete_entry = VAR_13;
  VAR_28->add_directory = VAR_5;
  VAR_28->open_directory = VAR_14;
  VAR_28->change_dir_prop = VAR_8;
  VAR_28->close_directory = VAR_10;
  VAR_28->absent_directory = VAR_3;
  VAR_28->add_file = VAR_6;
  VAR_28->open_file = VAR_15;
  VAR_28->apply_textdelta = VAR_7;
  VAR_28->change_file_prop = VAR_9;
  VAR_28->close_file = VAR_12;
  VAR_28->absent_file = VAR_4;
  VAR_28->close_edit = VAR_11;
  VAR_28->abort_edit = VAR_2;

  VAR_29->wrapped_editor = VAR_18;
  VAR_29->wrapped_edit_baton = VAR_19;
  VAR_29->base_revision = VAR_20;
  VAR_29->to_url = VAR_21;
  VAR_29->source_prop_encoding = VAR_22;
  VAR_29->quiet = VAR_23;
  VAR_29->normalized_node_props_counter = VAR_26;

  if (FUNC_1("SVNSYNC_UNSUPPORTED_STRIP_MERGEINFO"))
    {
      VAR_29->strip_mergeinfo = VAR_1;
    }
  if (FUNC_1("SVNSYNC_UNSUPPORTED_MIGRATE_SVNMERGE"))
    {
      VAR_29->migrate_svnmerge = VAR_1;
      VAR_29->strip_mergeinfo = VAR_1;
    }

  *VAR_24 = VAR_28;
  *VAR_25 = VAR_29;

  return VAR_0;
}
