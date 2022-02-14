
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ item_index; } ;
typedef TYPE_1__ rep_stats_t ;
typedef scalar_t__ apr_uint64_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  apr_uint64_t VAR_2 = (*(const rep_stats_t *const *)VAR_0)->item_index;
  apr_uint64_t VAR_3 = *(const apr_uint64_t *)VAR_1;

  if (VAR_2 < VAR_3)
    return -1;
  return (VAR_2 > VAR_3 ? 1 : 0);
}
