
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int len; int is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (char const*) ;

svn_skel_t *
FUNC_2(const char *VAR_1, apr_pool_t *VAR_2)
{
  svn_skel_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));
  VAR_3->is_atom = VAR_0;
  VAR_3->data = VAR_1;
  VAR_3->len = FUNC_1(VAR_1);

  return VAR_3;
}
