
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ change_set; scalar_t__ number; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
typedef int svn_boolean_t ;



svn_boolean_t
FUNC_0(const svn_fs_x__id_t *VAR_0,
                const svn_fs_x__id_t *VAR_1)
{
  return VAR_0->change_set == VAR_1->change_set && VAR_0->number == VAR_1->number;
}
