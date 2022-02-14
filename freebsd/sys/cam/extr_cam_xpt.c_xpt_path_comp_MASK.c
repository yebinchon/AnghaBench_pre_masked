
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cam_path {TYPE_3__* device; TYPE_2__* target; TYPE_1__* bus; } ;
struct TYPE_6__ {scalar_t__ lun_id; } ;
struct TYPE_5__ {scalar_t__ target_id; } ;
struct TYPE_4__ {scalar_t__ path_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_0(struct cam_path *VAR_3, struct cam_path *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->bus != VAR_4->bus) {
  if (VAR_3->bus->path_id == VAR_0)
   VAR_5 = 1;
  else if (VAR_4->bus->path_id == VAR_0)
   VAR_5 = 2;
  else
   return (-1);
 }
 if (VAR_3->target != VAR_4->target) {
  if (VAR_3->target->target_id == VAR_2) {
   if (VAR_5 == 0)
    VAR_5 = 1;
  } else if (VAR_4->target->target_id == VAR_2)
   VAR_5 = 2;
  else
   return (-1);
 }
 if (VAR_3->device != VAR_4->device) {
  if (VAR_3->device->lun_id == VAR_1) {
   if (VAR_5 == 0)
    VAR_5 = 1;
  } else if (VAR_4->device->lun_id == VAR_1)
   VAR_5 = 2;
  else
   return (-1);
 }
 return (VAR_5);
}
