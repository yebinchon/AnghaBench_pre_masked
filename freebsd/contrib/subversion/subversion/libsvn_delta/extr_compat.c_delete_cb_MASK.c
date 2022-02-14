
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct editor_baton {int changes; } ;
struct change_node {int deleting; int action; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 struct change_node* FUNC_0 (char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_2,
          const char *VAR_3,
          svn_revnum_t VAR_4,
          apr_pool_t *VAR_5)
{
  struct editor_baton *VAR_6 = VAR_2;
  struct change_node *VAR_7 = FUNC_0(VAR_3, VAR_6->changes);

  VAR_7->action = VAR_0;

  VAR_7->deleting = VAR_4;

  return VAR_1;
}
