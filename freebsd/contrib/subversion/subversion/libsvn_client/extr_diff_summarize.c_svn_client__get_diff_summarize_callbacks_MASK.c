
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int dir_added; int dir_deleted; int dir_changed; int dir_opened; int file_changed; int file_deleted; int file_added; } ;
typedef TYPE_1__ svn_diff_tree_processor_t ;
typedef int svn_client_diff_summarize_func_t ;
struct summarize_baton_t {char* skip_relpath; void* summarize_func_baton; int summarize_func; int * baton_pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct summarize_baton_t* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (struct summarize_baton_t*,int *) ;

svn_error_t *
FUNC_2(
                        const svn_diff_tree_processor_t **VAR_8,
                        const char ***VAR_9,
                        svn_client_diff_summarize_func_t VAR_10,
                        void *VAR_11,
                        const char *VAR_12,
                        apr_pool_t *VAR_13,
                        apr_pool_t *VAR_14)
{
  svn_diff_tree_processor_t *VAR_15;
  struct summarize_baton_t *VAR_16 = FUNC_0(VAR_13, sizeof(*VAR_16));

  VAR_16->baton_pool = VAR_13;
  VAR_16->summarize_func = VAR_10;
  VAR_16->summarize_func_baton = VAR_11;

  VAR_15 = FUNC_1(VAR_16, VAR_13);


  VAR_15->file_added = VAR_5;
  VAR_15->file_deleted = VAR_7;
  VAR_15->file_changed = VAR_6;

  VAR_15->dir_opened = VAR_4;
  VAR_15->dir_changed = VAR_2;
  VAR_15->dir_deleted = VAR_3;
  VAR_15->dir_added = VAR_1;

  *VAR_8 = VAR_15;
  *VAR_9 = &VAR_16->skip_relpath;

  return VAR_0;
}
