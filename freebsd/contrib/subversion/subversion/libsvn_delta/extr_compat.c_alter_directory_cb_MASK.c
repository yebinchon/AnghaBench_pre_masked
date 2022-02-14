
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct editor_baton {int edit_pool; int changes; } ;
struct change_node {int props; int changing; int kind; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 struct change_node* FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
                   const char *VAR_3,
                   svn_revnum_t VAR_4,
                   const apr_array_header_t *VAR_5,
                   apr_hash_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  struct editor_baton *VAR_8 = VAR_2;
  struct change_node *VAR_9 = FUNC_0(VAR_3, VAR_8->changes);







  VAR_9->kind = VAR_1;
  VAR_9->changing = VAR_4;
  VAR_9->props = FUNC_1(VAR_6, VAR_8->edit_pool);

  return VAR_0;
}
