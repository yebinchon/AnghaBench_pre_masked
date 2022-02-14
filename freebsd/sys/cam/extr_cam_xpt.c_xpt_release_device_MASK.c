
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ index; } ;
struct cam_ed {scalar_t__ refcount; int flags; int device_destroy_task; int nvme_cdata; int nvme_data; int serial_num; int rcap_buf; int physpath; int ext_inq; int device_id; int supported_vpds; int ccbq; TYPE_5__* target; int callout; TYPE_3__ devq_entry; int periphs; } ;
struct cam_eb {TYPE_1__* sim; int eb_mtx; } ;
struct TYPE_7__ {scalar_t__ array_size; } ;
struct cam_devq {int send_mtx; TYPE_2__ send_queue; } ;
struct TYPE_10__ {int generation; int ed_entries; struct cam_eb* bus; } ;
struct TYPE_9__ {int xpt_taskq; } ;
struct TYPE_6__ {struct cam_devq* devq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cam_ed*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cam_devq*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_4__ VAR_4 ;

void
FUNC_11(struct cam_ed *VAR_5)
{
 struct cam_eb *VAR_6 = VAR_5->target->bus;
 struct cam_devq *VAR_7;

 FUNC_7(&VAR_6->eb_mtx);
 if (--VAR_5->refcount > 0) {
  FUNC_8(&VAR_6->eb_mtx);
  return;
 }

 FUNC_2(&VAR_5->target->ed_entries, VAR_5,VAR_3);
 VAR_5->target->generation++;
 FUNC_8(&VAR_6->eb_mtx);


 VAR_7 = VAR_6->sim->devq;
 FUNC_7(&VAR_7->send_mtx);
 FUNC_5(VAR_7, VAR_7->send_queue.array_size - 1);
 FUNC_8(&VAR_7->send_mtx);

 FUNC_0(FUNC_1(&VAR_5->periphs),
     ("destroying device, but periphs list is not empty"));
 FUNC_0(VAR_5->devq_entry.index == VAR_1,
     ("destroying device while still queued for ccbs"));

 if ((VAR_5->flags & VAR_0) != 0)
  FUNC_3(&VAR_5->callout);

 FUNC_10(VAR_5->target);

 FUNC_4(&VAR_5->ccbq);





 FUNC_6(VAR_5->supported_vpds, VAR_2);
 FUNC_6(VAR_5->device_id, VAR_2);
 FUNC_6(VAR_5->ext_inq, VAR_2);
 FUNC_6(VAR_5->physpath, VAR_2);
 FUNC_6(VAR_5->rcap_buf, VAR_2);
 FUNC_6(VAR_5->serial_num, VAR_2);
 FUNC_6(VAR_5->nvme_data, VAR_2);
 FUNC_6(VAR_5->nvme_cdata, VAR_2);
 FUNC_9(VAR_4.xpt_taskq, &VAR_5->device_destroy_task);
}
