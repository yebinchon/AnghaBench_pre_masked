
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int * txn; int * root; int completed; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
         apr_pool_t *VAR_2)
{
  struct edit_baton *VAR_3 = VAR_1;
  svn_error_t *VAR_4;


  VAR_3->completed = VAR_0;

  if (VAR_3->root != ((void*)0))
    {
      FUNC_2(VAR_3->root);
      VAR_3->root = ((void*)0);
    }


  VAR_4 = FUNC_1(VAR_3->txn, VAR_2);


  VAR_3->txn = ((void*)0);

  return FUNC_0(VAR_4);
}
