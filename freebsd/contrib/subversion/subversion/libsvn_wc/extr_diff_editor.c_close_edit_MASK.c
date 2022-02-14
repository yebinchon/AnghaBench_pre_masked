
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton_t {int pool; int depth; int anchor_abspath; int root_opened; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct edit_baton_t*,int ,char*,int ,int *,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
           apr_pool_t *VAR_2)
{
  struct edit_baton_t *VAR_3 = VAR_1;

  if (!VAR_3->root_opened)
    {
      FUNC_0(FUNC_1(VAR_3,
                                    VAR_3->anchor_abspath,
                                    "",
                                    VAR_3->depth,
                                    ((void*)0) ,
                                    ((void*)0) ,
                                    VAR_3->pool));
    }

  return VAR_0;
}
