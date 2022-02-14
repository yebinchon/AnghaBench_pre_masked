
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int * root; int completed; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_2,
            apr_pool_t *VAR_3)
{
  struct edit_baton *VAR_4 = VAR_2;




  VAR_4->completed = VAR_1;

  if (VAR_4->root != ((void*)0))
    {
      FUNC_0(VAR_4->root);
      VAR_4->root = ((void*)0);
    }

  return VAR_0;
}
