
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int txn; scalar_t__ txn_root; scalar_t__ txn_aborted; int txn_owner; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
           apr_pool_t *VAR_3)
{
  struct edit_baton *VAR_4 = VAR_2;
  if ((! VAR_4->txn) || (! VAR_4->txn_owner) || VAR_4->txn_aborted)
    return VAR_0;

  VAR_4->txn_aborted = VAR_1;


  if (VAR_4->txn_root)
    FUNC_2(VAR_4->txn_root);

  return FUNC_0(FUNC_1(VAR_4->txn, VAR_3));
}
