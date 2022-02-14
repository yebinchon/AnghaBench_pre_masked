
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ revision; } ;
struct TYPE_4__ {TYPE_1__ item; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0,
                           const void *VAR_1)
{
  const svn_fs_fs__p2l_entry_t *VAR_2
    =*(const svn_fs_fs__p2l_entry_t **)VAR_0;
  const svn_fs_fs__p2l_entry_t *VAR_3
    =*(const svn_fs_fs__p2l_entry_t **)VAR_1;

  if (VAR_2->item.revision < VAR_3->item.revision)
    return -1;

  return VAR_2->item.revision == VAR_3->item.revision ? 0 : 1;
}
