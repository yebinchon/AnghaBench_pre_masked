
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef void* svn_boolean_t ;
struct edit_baton_t {int * pool; void* cancel_baton; int cancel_func; void* diff_pristine; void* local_before_remote; void* ignore_ancestry; int depth; int const* processor; void* target; void* anchor_abspath; int * db; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct edit_baton_t* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(struct edit_baton_t **VAR_1,
                svn_wc__db_t *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                const svn_diff_tree_processor_t *VAR_5,
                svn_depth_t VAR_6,
                svn_boolean_t VAR_7,
                svn_boolean_t VAR_8,
                svn_boolean_t VAR_9,
                svn_cancel_func_t VAR_10,
                void *VAR_11,
                apr_pool_t *VAR_12)
{
  struct edit_baton_t *VAR_13;

  FUNC_0(FUNC_3(VAR_3));

  VAR_13 = FUNC_1(VAR_12, sizeof(*VAR_13));
  VAR_13->db = VAR_2;
  VAR_13->anchor_abspath = FUNC_2(VAR_12, VAR_3);
  VAR_13->target = FUNC_2(VAR_12, VAR_4);
  VAR_13->processor = VAR_5;
  VAR_13->depth = VAR_6;
  VAR_13->ignore_ancestry = VAR_7;
  VAR_13->local_before_remote = VAR_9;
  VAR_13->diff_pristine = VAR_8;
  VAR_13->cancel_func = VAR_10;
  VAR_13->cancel_baton = VAR_11;
  VAR_13->pool = VAR_12;

  *VAR_1 = VAR_13;
  return VAR_0;
}
