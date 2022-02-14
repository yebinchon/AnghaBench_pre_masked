
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
struct TYPE_3__ {int const copy_id; } ;
struct TYPE_4__ {TYPE_1__ private_id; } ;
typedef TYPE_2__ fs_fs__id_t ;



const svn_fs_fs__id_part_t *
FUNC_0(const svn_fs_id_t *VAR_0)
{
  const fs_fs__id_t *VAR_1 = (const fs_fs__id_t *)VAR_0;

  return &VAR_1->private_id.copy_id;
}
