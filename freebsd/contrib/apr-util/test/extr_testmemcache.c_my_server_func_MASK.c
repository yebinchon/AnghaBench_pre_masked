
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ which_server; } ;
typedef TYPE_1__ my_hash_server_baton ;
typedef int apr_uint32_t ;
struct TYPE_5__ {scalar_t__ ntotal; int ** live_servers; } ;
typedef TYPE_2__ apr_memcache_t ;
typedef int apr_memcache_server_t ;



__attribute__((used)) static apr_memcache_server_t *FUNC_0(void *VAR_0,
                                             apr_memcache_t *VAR_1,
                                             const apr_uint32_t VAR_2)
{
  apr_memcache_server_t *VAR_3 = ((void*)0);
  my_hash_server_baton *VAR_4 = (my_hash_server_baton *)VAR_0;

  if(VAR_1->ntotal == 0) {
    return ((void*)0);
  }

  if(VAR_1->ntotal < VAR_4->which_server) {
    return ((void*)0);
  }

  VAR_3 = VAR_1->live_servers[VAR_4->which_server - 1];

  return VAR_3;
}
