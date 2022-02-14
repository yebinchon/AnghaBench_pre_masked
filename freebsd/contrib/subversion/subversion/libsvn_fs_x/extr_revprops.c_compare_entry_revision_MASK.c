
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_2__ {scalar_t__ const start_rev; } ;
typedef TYPE_1__ manifest_entry_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0,
                       const void *VAR_1)
{
  const manifest_entry_t *VAR_2 = VAR_0;
  const svn_revnum_t *VAR_3 = VAR_1;

  if (VAR_2->start_rev < *VAR_3)
    return -1;

  return VAR_2->start_rev == *VAR_3 ? 0 : 1;
}
