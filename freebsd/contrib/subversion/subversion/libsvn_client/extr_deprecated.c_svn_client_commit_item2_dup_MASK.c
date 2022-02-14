
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wcprop_changes; void* copyfrom_url; void* url; void* path; } ;
typedef TYPE_1__ svn_client_commit_item2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;

svn_client_commit_item2_t *
FUNC_3(const svn_client_commit_item2_t *VAR_0,
                            apr_pool_t *VAR_1)
{
  svn_client_commit_item2_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  if (VAR_2->path)
    VAR_2->path = FUNC_1(VAR_1, VAR_2->path);

  if (VAR_2->url)
    VAR_2->url = FUNC_1(VAR_1, VAR_2->url);

  if (VAR_2->copyfrom_url)
    VAR_2->copyfrom_url = FUNC_1(VAR_1, VAR_2->copyfrom_url);

  if (VAR_2->wcprop_changes)
    VAR_2->wcprop_changes = FUNC_2(VAR_2->wcprop_changes,
                                                  VAR_1);

  return VAR_2;
}
