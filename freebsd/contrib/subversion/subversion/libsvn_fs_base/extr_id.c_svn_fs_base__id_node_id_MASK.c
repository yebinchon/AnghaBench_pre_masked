
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_id_t ;
struct TYPE_5__ {char const* node_id; } ;
typedef TYPE_2__ id_private_t ;



const char *
FUNC_0(const svn_fs_id_t *VAR_0)
{
  id_private_t *VAR_1 = VAR_0->fsap_data;

  return VAR_1->node_id;
}
