
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_sqlite__transaction_callback_t ) (void*,int *,int *) ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;

svn_error_t *
FUNC_1(
  svn_sqlite__db_t *VAR_1,
  svn_sqlite__transaction_callback_t VAR_2,
  void *VAR_3,
  apr_pool_t *VAR_4 )
{
  FUNC_0(VAR_2(VAR_3, VAR_1, VAR_4), VAR_1);
  return VAR_0;
}
