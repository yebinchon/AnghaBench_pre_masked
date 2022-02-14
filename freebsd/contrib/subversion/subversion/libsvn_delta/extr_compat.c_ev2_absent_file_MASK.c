
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct ev2_dir_baton {int eb; } ;
struct change_node {int kind; int action; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 struct change_node* FUNC_0 (int ,char const*) ;
 char* FUNC_1 (int ,char const*,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_3,
                void *VAR_4,
                apr_pool_t *VAR_5)
{
  struct ev2_dir_baton *VAR_6 = VAR_4;
  const char *VAR_7 = FUNC_1(VAR_6->eb, VAR_3, VAR_5);
  struct change_node *VAR_8 = FUNC_0(VAR_6->eb, VAR_7);


  VAR_8->action = VAR_0;
  VAR_8->kind = VAR_2;

  return VAR_1;
}
