
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_quirk_entry {int dummy; } ;
struct cam_et {int dummy; } ;
struct cam_ed {scalar_t__ serial_num_len; int * serial_num; scalar_t__ device_id_len; int * device_id; scalar_t__ queue_flags; scalar_t__ inq_flags; scalar_t__ maxtags; scalar_t__ mintags; void* quirk; } ;
struct cam_eb {int dummy; } ;
typedef int lun_id_t ;


 struct nvme_quirk_entry* VAR_0 ;
 int VAR_1 ;
 struct cam_ed* FUNC_0 (struct cam_eb*,struct cam_et*,int ) ;

__attribute__((used)) static struct cam_ed *
FUNC_1(struct cam_eb *VAR_2, struct cam_et *VAR_3, lun_id_t VAR_4)
{
 struct nvme_quirk_entry *VAR_5;
 struct cam_ed *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (((void*)0));





 VAR_5 = &VAR_0[VAR_1 - 1];
 VAR_6->quirk = (void *)VAR_5;
 VAR_6->mintags = 0;
 VAR_6->maxtags = 0;
 VAR_6->inq_flags = 0;
 VAR_6->queue_flags = 0;
 VAR_6->device_id = ((void*)0);
 VAR_6->device_id_len = 0;
 VAR_6->serial_num = ((void*)0);
 VAR_6->serial_num_len = 0;
 return (VAR_6);
}
