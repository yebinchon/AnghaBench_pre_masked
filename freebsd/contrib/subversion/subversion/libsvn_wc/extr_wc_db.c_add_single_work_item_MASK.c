
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_sqlite__db_t *VAR_1,
                     const svn_skel_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;
  svn_sqlite__stmt_t *VAR_5;

  VAR_4 = FUNC_2(VAR_2, VAR_3);
  FUNC_0(FUNC_4(&VAR_5, VAR_1, VAR_0));
  FUNC_0(FUNC_3(VAR_5, 1, VAR_4->data, VAR_4->len));
  return FUNC_1(FUNC_5(((void*)0), VAR_5));
}
