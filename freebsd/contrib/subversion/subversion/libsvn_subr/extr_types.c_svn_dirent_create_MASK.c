
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * last_author; scalar_t__ time; int created_rev; int size; int kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_2 ;

svn_dirent_t *
FUNC_1(apr_pool_t *VAR_3)
{
  svn_dirent_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->kind = VAR_2;
  VAR_4->size = VAR_0;
  VAR_4->created_rev = VAR_1;
  VAR_4->time = 0;
  VAR_4->last_author = ((void*)0);

  return VAR_4;
}
