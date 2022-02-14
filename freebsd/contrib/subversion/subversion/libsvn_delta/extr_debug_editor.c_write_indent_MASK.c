
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {char* prefix; int indent_level; int out; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct edit_baton *VAR_1, apr_pool_t *VAR_2)
{
  int VAR_3;

  FUNC_0(FUNC_1(VAR_1->out, VAR_1->prefix));
  for (VAR_3 = 0; VAR_3 < VAR_1->indent_level; ++VAR_3)
    FUNC_0(FUNC_1(VAR_1->out, " "));

  return VAR_0;
}
