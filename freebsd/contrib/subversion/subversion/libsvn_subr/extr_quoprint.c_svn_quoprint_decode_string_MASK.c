
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,char*,int*) ;
 TYPE_1__* FUNC_1 (int *) ;

svn_stringbuf_t *
FUNC_2(const svn_stringbuf_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_stringbuf_t *VAR_2 = FUNC_1(VAR_1);
  char VAR_3[4];
  int VAR_4 = 0;

  FUNC_0(VAR_2, VAR_0->data, VAR_0->len, VAR_3, &VAR_4);
  return VAR_2;
}
