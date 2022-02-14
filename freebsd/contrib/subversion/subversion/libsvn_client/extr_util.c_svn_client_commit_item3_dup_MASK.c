
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* moved_from_abspath; void* session_relpath; void* outgoing_prop_changes; void* incoming_prop_changes; void* copyfrom_url; void* url; void* path; } ;
typedef TYPE_1__ svn_client_commit_item3_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;

svn_client_commit_item3_t *
FUNC_3(const svn_client_commit_item3_t *VAR_0,
                            apr_pool_t *VAR_1)
{
  svn_client_commit_item3_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  if (VAR_2->path)
    VAR_2->path = FUNC_1(VAR_1, VAR_2->path);

  if (VAR_2->url)
    VAR_2->url = FUNC_1(VAR_1, VAR_2->url);

  if (VAR_2->copyfrom_url)
    VAR_2->copyfrom_url = FUNC_1(VAR_1, VAR_2->copyfrom_url);

  if (VAR_2->incoming_prop_changes)
    VAR_2->incoming_prop_changes =
      FUNC_2(VAR_2->incoming_prop_changes, VAR_1);

  if (VAR_2->outgoing_prop_changes)
    VAR_2->outgoing_prop_changes =
      FUNC_2(VAR_2->outgoing_prop_changes, VAR_1);

  if (VAR_2->session_relpath)
    VAR_2->session_relpath = FUNC_1(VAR_1, VAR_2->session_relpath);

  if (VAR_2->moved_from_abspath)
    VAR_2->moved_from_abspath = FUNC_1(VAR_1,
                                               VAR_2->moved_from_abspath);

  return VAR_2;
}
