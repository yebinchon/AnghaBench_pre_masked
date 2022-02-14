
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; void* copyfrom_rev; void* revision; } ;
typedef TYPE_1__ svn_client_commit_item3_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_1 ;

svn_client_commit_item3_t *
FUNC_1(apr_pool_t *VAR_2)
{
  svn_client_commit_item3_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->revision = VAR_0;
  VAR_3->copyfrom_rev = VAR_0;
  VAR_3->kind = VAR_1;

  return VAR_3;
}
