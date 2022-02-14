
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_skel_t ;
typedef int apr_pool_t ;
typedef int DBT ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

DBT *
FUNC_2(DBT *VAR_0,
                         svn_skel_t *VAR_1,
                         apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_3->data, VAR_3->len);
  return VAR_0;
}
