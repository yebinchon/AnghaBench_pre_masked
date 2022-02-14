
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int walk_deleted_dirs; int * empty_file; void* callback_baton; int const* callbacks; int * result_pool; } ;
typedef TYPE_1__ wc_diff_wrap_baton_t ;
typedef int svn_wc_diff_callbacks4_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int file_changed; int file_deleted; int file_added; int file_opened; int dir_closed; int dir_changed; int dir_deleted; int dir_added; int dir_opened; } ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

svn_error_t *
FUNC_2(const svn_diff_tree_processor_t **VAR_10,
                            const svn_wc_diff_callbacks4_t *VAR_11,
                            void *VAR_12,
                            svn_boolean_t VAR_13,
                            apr_pool_t *VAR_14,
                            apr_pool_t *VAR_15)
{
  wc_diff_wrap_baton_t *VAR_16;
  svn_diff_tree_processor_t *VAR_17;

  VAR_16 = FUNC_0(VAR_14, sizeof(*VAR_16));

  VAR_16->result_pool = VAR_14;
  VAR_16->callbacks = VAR_11;
  VAR_16->callback_baton = VAR_12;
  VAR_16->empty_file = ((void*)0);
  VAR_16->walk_deleted_dirs = VAR_13;

  VAR_17 = FUNC_1(VAR_16, VAR_14);

  VAR_17->dir_opened = VAR_5;
  VAR_17->dir_added = VAR_1;
  VAR_17->dir_deleted = VAR_4;
  VAR_17->dir_changed = VAR_2;
  VAR_17->dir_closed = VAR_3;

  VAR_17->file_opened = VAR_9;
  VAR_17->file_added = VAR_6;
  VAR_17->file_deleted = VAR_8;
  VAR_17->file_changed = VAR_7;
                                                 ;

  *VAR_10 = VAR_17;
  return VAR_0;
}
