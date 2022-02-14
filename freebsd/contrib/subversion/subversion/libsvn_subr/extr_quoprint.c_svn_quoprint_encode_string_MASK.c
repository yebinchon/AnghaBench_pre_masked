
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 (int *) ;

svn_stringbuf_t *
FUNC_3(const svn_stringbuf_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_stringbuf_t *VAR_2 = FUNC_2(VAR_1);
  int VAR_3 = 0;

  FUNC_0(VAR_2, VAR_0->data, VAR_0->len, &VAR_3);
  if (VAR_3 > 0)
    FUNC_1(VAR_2, "=\n");
  return VAR_2;
}
