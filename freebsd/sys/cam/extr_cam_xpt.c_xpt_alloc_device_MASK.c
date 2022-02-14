
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cam_et {int generation; int ed_entries; int refcount; } ;
struct cam_ed {scalar_t__ lun_id; int refcount; int device_destroy_task; int callout; int device_mtx; scalar_t__ tag_saved_openings; scalar_t__ tag_delay_count; int flags; scalar_t__ generation; int periphs; int asyncs; int ccbq; TYPE_2__* sim; struct cam_et* target; int devq_entry; } ;
struct cam_eb {TYPE_2__* sim; int eb_mtx; } ;
struct TYPE_3__ {scalar_t__ array_size; } ;
struct cam_devq {int send_mtx; TYPE_1__ send_queue; } ;
typedef scalar_t__ lun_id_t ;
typedef scalar_t__ cam_status ;
struct TYPE_4__ {int max_dev_openings; struct cam_devq* devq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct cam_ed* FUNC_1 (int *) ;
 int FUNC_2 (struct cam_ed*,struct cam_ed*,int ) ;
 int FUNC_3 (int *,struct cam_ed*,int ) ;
 struct cam_ed* FUNC_4 (struct cam_ed*,int ) ;
 int FUNC_5 (int *,int ,int ,struct cam_ed*) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct cam_devq*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct cam_ed*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_8 ;

struct cam_ed *
FUNC_16(struct cam_eb *VAR_9, struct cam_et *VAR_10, lun_id_t VAR_11)
{
 struct cam_ed *VAR_12, *VAR_13;
 struct cam_devq *VAR_14;
 cam_status VAR_15;

 FUNC_12(&VAR_9->eb_mtx, VAR_2);

 VAR_14 = VAR_9->sim->devq;
 FUNC_14(&VAR_14->send_mtx);
 VAR_15 = FUNC_8(VAR_14, VAR_14->send_queue.array_size + 1);
 FUNC_15(&VAR_14->send_mtx);
 if (VAR_15 != VAR_1)
  return (((void*)0));

 VAR_13 = (struct cam_ed *)FUNC_11(sizeof(*VAR_13),
      VAR_4, VAR_5|VAR_6);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 FUNC_9(&VAR_13->devq_entry);
 VAR_13->target = VAR_10;
 VAR_13->lun_id = VAR_11;
 VAR_13->sim = VAR_9->sim;
 if (FUNC_7(&VAR_13->ccbq,
     VAR_9->sim->max_dev_openings) != 0) {
  FUNC_10(VAR_13, VAR_4);
  return (((void*)0));
 }
 FUNC_0(&VAR_13->asyncs);
 FUNC_0(&VAR_13->periphs);
 VAR_13->generation = 0;
 VAR_13->flags = VAR_0;
 VAR_13->tag_delay_count = 0;
 VAR_13->tag_saved_openings = 0;
 VAR_13->refcount = 1;
 FUNC_13(&VAR_13->device_mtx, "CAM device lock", ((void*)0), VAR_3);
 FUNC_6(&VAR_13->callout, &VAR_14->send_mtx, 0);
 FUNC_5(&VAR_13->device_destroy_task, 0, VAR_8, VAR_13);




 VAR_10->refcount++;

 VAR_12 = FUNC_1(&VAR_10->ed_entries);
 while (VAR_12 != ((void*)0) && VAR_12->lun_id < VAR_11)
  VAR_12 = FUNC_4(VAR_12, VAR_7);
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12, VAR_13, VAR_7);
 else
  FUNC_3(&VAR_10->ed_entries, VAR_13, VAR_7);
 VAR_10->generation++;
 return (VAR_13);
}
