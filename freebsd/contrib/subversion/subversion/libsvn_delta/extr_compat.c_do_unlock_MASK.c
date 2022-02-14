
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct editor_baton {int changes; } ;
struct change_node {int unlock; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 struct change_node* FUNC_0 (char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_2,
          const char *VAR_3,
          apr_pool_t *VAR_4)
{
  struct editor_baton *VAR_5 = VAR_2;

  {

    struct change_node *VAR_6 = FUNC_0(VAR_3, VAR_5->changes);


    VAR_6->unlock = VAR_1;
  }

  return VAR_0;
}
