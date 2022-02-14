
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int revprop_generation; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_5__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;



void
FUNC_0(svn_fs_t *VAR_0)
{
  svn_fs_x__data_t *VAR_1 = VAR_0->fsap_data;
  VAR_1->revprop_generation = -1;
}
