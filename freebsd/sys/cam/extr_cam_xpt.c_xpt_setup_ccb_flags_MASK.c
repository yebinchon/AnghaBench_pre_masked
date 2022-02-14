
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u_int32_t ;
struct TYPE_12__ {int index; scalar_t__ generation; void* priority; } ;
struct ccb_hdr {scalar_t__ xflags; void* flags; TYPE_6__ pinfo; void* target_lun; void* target_id; int path_id; struct cam_path* path; } ;
struct cam_path {TYPE_5__* device; TYPE_2__* target; TYPE_1__* bus; } ;
struct TYPE_9__ {scalar_t__ generation; } ;
struct TYPE_10__ {TYPE_3__ queue; } ;
struct TYPE_11__ {TYPE_4__ ccbq; void* lun_id; } ;
struct TYPE_8__ {void* target_id; } ;
struct TYPE_7__ {int path_id; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct ccb_hdr *VAR_3, struct cam_path *VAR_4,
      u_int32_t VAR_5, u_int32_t VAR_6)
{

 FUNC_0(VAR_4, VAR_0, ("xpt_setup_ccb\n"));
 VAR_3->pinfo.priority = VAR_5;
 VAR_3->path = VAR_4;
 VAR_3->path_id = VAR_4->bus->path_id;
 if (VAR_4->target)
  VAR_3->target_id = VAR_4->target->target_id;
 else
  VAR_3->target_id = VAR_1;
 if (VAR_4->device) {
  VAR_3->target_lun = VAR_4->device->lun_id;
  VAR_3->pinfo.generation = ++VAR_4->device->ccbq.queue.generation;
 } else {
  VAR_3->target_lun = VAR_1;
 }
 VAR_3->pinfo.index = VAR_2;
 VAR_3->flags = VAR_6;
 VAR_3->xflags = 0;
}
