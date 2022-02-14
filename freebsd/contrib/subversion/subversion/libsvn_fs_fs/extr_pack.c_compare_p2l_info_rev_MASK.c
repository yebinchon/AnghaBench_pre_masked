
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ revision; } ;
struct TYPE_6__ {TYPE_1__ item; } ;
typedef TYPE_2__ svn_fs_fs__p2l_entry_t ;



__attribute__((used)) static int
FUNC_0(const svn_fs_fs__p2l_entry_t * const * VAR_0,
                     const svn_fs_fs__p2l_entry_t * const * VAR_1)
{
  const svn_fs_fs__p2l_entry_t * VAR_2 = *VAR_0;
  const svn_fs_fs__p2l_entry_t * VAR_3 = *VAR_1;

  if (VAR_2->item.revision == VAR_3->item.revision)
    return 0;

  return VAR_2->item.revision < VAR_3->item.revision ? -1 : 1;
}
