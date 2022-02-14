
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int last_author; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

svn_dirent_t *
FUNC_2(const svn_dirent_t *VAR_0,
               apr_pool_t *VAR_1)
{
  svn_dirent_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  VAR_2->last_author = FUNC_1(VAR_1, VAR_0->last_author);

  return VAR_2;
}
