
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pool; int size; int data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int *,int ,int *) ;

void
FUNC_1(svn_membuf_t *VAR_0, apr_size_t VAR_1, apr_pool_t *VAR_2)
{
  FUNC_0(&VAR_0->data, &VAR_0->size, VAR_1, VAR_2);
  VAR_0->pool = VAR_2;
}
