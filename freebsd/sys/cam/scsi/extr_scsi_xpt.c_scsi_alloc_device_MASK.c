
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_quirk_entry {int maxtags; int mintags; } ;
struct cam_et {int dummy; } ;
struct cam_ed {scalar_t__ supported_vpds_len; int * supported_vpds; scalar_t__ device_id_len; int * device_id; scalar_t__ serial_num_len; int * serial_num; scalar_t__ queue_flags; scalar_t__ inq_flags; int inq_data; int maxtags; int mintags; void* quirk; } ;
struct cam_eb {int dummy; } ;
typedef int lun_id_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct scsi_quirk_entry*) ;
 struct scsi_quirk_entry* VAR_0 ;
 struct cam_ed* FUNC_2 (struct cam_eb*,struct cam_et*,int ) ;

__attribute__((used)) static struct cam_ed *
FUNC_3(struct cam_eb *VAR_1, struct cam_et *VAR_2, lun_id_t VAR_3)
{
 struct scsi_quirk_entry *VAR_4;
 struct cam_ed *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return (((void*)0));





 VAR_4 = &VAR_0[FUNC_1(VAR_0) - 1];
 VAR_5->quirk = (void *)VAR_4;
 VAR_5->mintags = VAR_4->mintags;
 VAR_5->maxtags = VAR_4->maxtags;
 FUNC_0(&VAR_5->inq_data, sizeof(VAR_5->inq_data));
 VAR_5->inq_flags = 0;
 VAR_5->queue_flags = 0;
 VAR_5->serial_num = ((void*)0);
 VAR_5->serial_num_len = 0;
 VAR_5->device_id = ((void*)0);
 VAR_5->device_id_len = 0;
 VAR_5->supported_vpds = ((void*)0);
 VAR_5->supported_vpds_len = 0;
 return (VAR_5);
}
