
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {size_t prefix_idx; } ;
struct TYPE_8__ {char const* data; } ;
struct TYPE_9__ {TYPE_1__ full_key; } ;
struct TYPE_13__ {TYPE_5__ prefix; TYPE_4__* membuffer; TYPE_2__ combined_key; } ;
typedef TYPE_6__ svn_membuffer_cache_t ;
struct TYPE_11__ {TYPE_3__* prefix_pool; } ;
struct TYPE_10__ {char const** values; } ;


 size_t VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(const svn_membuffer_cache_t *VAR_1)
{
  return (VAR_1->prefix.prefix_idx == VAR_0
       ? VAR_1->combined_key.full_key.data
       : VAR_1->membuffer->prefix_pool->values[VAR_1->prefix.prefix_idx]);
}
