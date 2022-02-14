
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef void* svn_revnum_t ;
typedef int svn_repos_notify_func_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_9__ {struct edit_baton* fetch_baton; int fetch_base_func; int fetch_props_func; int fetch_kind_func; } ;
typedef TYPE_1__ svn_delta_shim_callbacks_t ;
struct TYPE_10__ {int open_file; int add_file; int change_dir_prop; int * (* close_directory ) (void*,int *) ;int open_directory; int add_directory; int delete_entry; int open_root; } ;
typedef TYPE_2__ svn_delta_editor_t ;
typedef void* svn_boolean_t ;
struct edit_baton {void** found_old_reference; void** found_old_mergeinfo; int * path_tracker; void* check_normalization; void* verify; void* use_deltas; void* current_rev; int * fs; int fs_root; int path; void* oldest_dumped_rev; void* notify_baton; int notify_func; int * stream; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct edit_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_3 ;
 int * FUNC_3 (void*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__ const**,void**,TYPE_2__ const*,void*,int *,int *,TYPE_1__*,int *,int *) ;
 int FUNC_7 (int *,int *,void*,int *) ;
 int * FUNC_8 (void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const svn_delta_editor_t **VAR_11,
                void **VAR_12,
                svn_fs_t *VAR_13,
                svn_revnum_t VAR_14,
                const char *VAR_15,
                svn_stream_t *VAR_16,
                svn_boolean_t *VAR_17,
                svn_boolean_t *VAR_18,
                svn_error_t *(*VAR_19)(void *VAR_20,
                                  apr_pool_t *VAR_21),
                svn_repos_notify_func_t VAR_22,
                void *VAR_23,
                svn_revnum_t VAR_24,
                svn_boolean_t VAR_25,
                svn_boolean_t VAR_26,
                svn_boolean_t VAR_27,
                apr_pool_t *VAR_28)
{



  struct edit_baton *VAR_29 = FUNC_1(VAR_28, sizeof(*VAR_29));
  svn_delta_editor_t *VAR_30 = FUNC_4(VAR_28);
  svn_delta_shim_callbacks_t *VAR_31 =
                                FUNC_5(VAR_28);


  VAR_29->stream = VAR_16;
  VAR_29->notify_func = VAR_22;
  VAR_29->notify_baton = VAR_23;
  VAR_29->oldest_dumped_rev = VAR_24;
  VAR_29->path = FUNC_2(VAR_28, VAR_15);
  FUNC_0(FUNC_7(&(VAR_29->fs_root), VAR_13, VAR_14, VAR_28));
  VAR_29->fs = VAR_13;
  VAR_29->current_rev = VAR_14;
  VAR_29->use_deltas = VAR_25;
  VAR_29->verify = VAR_26;
  VAR_29->check_normalization = VAR_27;
  VAR_29->found_old_reference = VAR_17;
  VAR_29->found_old_mergeinfo = VAR_18;







  VAR_29->path_tracker = VAR_26 ? FUNC_8(VAR_14, VAR_28) : ((void*)0);


  VAR_30->open_root = VAR_10;
  VAR_30->delete_entry = VAR_4;
  VAR_30->add_directory = VAR_1;
  VAR_30->open_directory = VAR_8;
  if (VAR_19)
    VAR_30->close_directory = VAR_19;
  else
    VAR_30->close_directory = FUNC_3;
  VAR_30->change_dir_prop = VAR_3;
  VAR_30->add_file = VAR_2;
  VAR_30->open_file = VAR_9;

  *VAR_12 = VAR_29;
  *VAR_11 = VAR_30;

  VAR_31->fetch_kind_func = VAR_6;
  VAR_31->fetch_props_func = VAR_7;
  VAR_31->fetch_base_func = VAR_5;
  VAR_31->fetch_baton = VAR_29;

  FUNC_0(FUNC_6(VAR_11, VAR_12, *VAR_11, *VAR_12,
                                   ((void*)0), ((void*)0), VAR_31, VAR_28, VAR_28));

  return VAR_0;
}
