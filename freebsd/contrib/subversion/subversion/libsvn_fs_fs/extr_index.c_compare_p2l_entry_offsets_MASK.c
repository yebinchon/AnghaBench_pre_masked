
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
typedef TYPE_1__ svn_fs_fs__p2l_entry_t ;
typedef scalar_t__ apr_off_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  const svn_fs_fs__p2l_entry_t *VAR_2 = (const svn_fs_fs__p2l_entry_t *)VAR_0;
  apr_off_t VAR_3 = *(const apr_off_t *)VAR_1;

  return VAR_2->offset < VAR_3 ? -1 : (VAR_2->offset == VAR_3 ? 0 : 1);
}
