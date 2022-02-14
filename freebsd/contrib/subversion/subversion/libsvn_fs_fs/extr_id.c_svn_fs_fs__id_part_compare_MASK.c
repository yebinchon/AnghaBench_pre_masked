
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ revision; scalar_t__ number; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;



int
FUNC_0(const svn_fs_fs__id_part_t *VAR_0,
                           const svn_fs_fs__id_part_t *VAR_1)
{
  if (VAR_0->revision < VAR_1->revision)
    return -1;
  if (VAR_0->revision > VAR_1->revision)
    return 1;

  return VAR_0->number < VAR_1->number ? -1 : VAR_0->number == VAR_1->number ? 0 : 1;
}
