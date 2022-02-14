
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_path {TYPE_1__* device; } ;
typedef int lun_id_t ;
struct TYPE_2__ {int lun_id; } ;


 int VAR_0 ;

lun_id_t
FUNC_0(struct cam_path *VAR_1)
{
 if (VAR_1->device != ((void*)0))
  return (VAR_1->device->lun_id);
 else
  return (VAR_0);
}
