
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ number; int revision; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 (int ) ;

svn_boolean_t
FUNC_1(const svn_fs_fs__id_part_t *VAR_0)
{
  return FUNC_0(VAR_0->revision) || (VAR_0->number != 0);
}
