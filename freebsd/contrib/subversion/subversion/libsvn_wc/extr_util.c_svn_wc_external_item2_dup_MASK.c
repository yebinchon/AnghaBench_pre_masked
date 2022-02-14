
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* url; void* target_dir; } ;
typedef TYPE_1__ svn_wc_external_item2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;

svn_wc_external_item2_t *
FUNC_2(const svn_wc_external_item2_t *VAR_0,
                          apr_pool_t *VAR_1)
{
  svn_wc_external_item2_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  if (VAR_2->target_dir)
    VAR_2->target_dir = FUNC_1(VAR_1, VAR_2->target_dir);

  if (VAR_2->url)
    VAR_2->url = FUNC_1(VAR_1, VAR_2->url);

  return VAR_2;
}
