
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; void const* data; int is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

svn_skel_t *
FUNC_1(const void *VAR_1,
                   apr_size_t VAR_2,
                   apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));
  VAR_4->is_atom = VAR_0;
  VAR_4->data = VAR_1;
  VAR_4->len = VAR_2;

  return VAR_4;
}
