
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct editor_baton {int edit_pool; int changes; } ;
struct change_node {int props; int deleting; int kind; int action; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * VAR_1 ;
 struct change_node* FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3,
                 const char *VAR_4,
                 const apr_array_header_t *VAR_5,
                 apr_hash_t *VAR_6,
                 svn_revnum_t VAR_7,
                 apr_pool_t *VAR_8)
{
  struct editor_baton *VAR_9 = VAR_3;
  struct change_node *VAR_10 = FUNC_0(VAR_4, VAR_9->changes);

  VAR_10->action = VAR_0;
  VAR_10->kind = VAR_2;
  VAR_10->deleting = VAR_7;
  VAR_10->props = FUNC_1(VAR_6, VAR_9->edit_pool);

  return VAR_1;
}
