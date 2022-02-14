
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_get_config_header {int* current_profile; int* data_length; } ;
struct scsi_get_config_feature {int* feature_code; int flags; int add_length; int* feature_data; } ;
struct scsi_get_config {int rt; int* starting_feature; int* length; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_data_ptr; scalar_t__ kern_rel_offset; scalar_t__ kern_sg_entries; scalar_t__ cdb; } ;
struct ctl_lun {int flags; TYPE_1__* be_lun; } ;
struct TYPE_3__ {int blocksize; } ;


 int VAR_0 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int,int*) ;

int
FUNC_8(struct ctl_scsiio *VAR_12)
{
 struct ctl_lun *VAR_13 = FUNC_0(VAR_12);
 struct scsi_get_config_header *VAR_14;
 struct scsi_get_config_feature *VAR_15;
 struct scsi_get_config *VAR_16;
 uint32_t VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_16 = (struct scsi_get_config *)VAR_12->cdb;
 VAR_19 = (VAR_16->rt & VAR_9);
 VAR_20 = FUNC_5(VAR_16->starting_feature);
 VAR_17 = FUNC_5(VAR_16->length);

 VAR_18 = sizeof(struct scsi_get_config_header) +
     sizeof(struct scsi_get_config_feature) + 8 +
     sizeof(struct scsi_get_config_feature) + 8 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 8 +
     sizeof(struct scsi_get_config_feature) +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4 +
     sizeof(struct scsi_get_config_feature) + 4;
 VAR_12->kern_data_ptr = FUNC_3(VAR_18, VAR_3, VAR_4 | VAR_5);
 VAR_12->kern_sg_entries = 0;
 VAR_12->kern_rel_offset = 0;

 VAR_14 = (struct scsi_get_config_header *)VAR_12->kern_data_ptr;
 if (VAR_13->flags & VAR_1)
  FUNC_6(0x0000, VAR_14->current_profile);
 else
  FUNC_6(0x0010, VAR_14->current_profile);
 VAR_15 = (struct scsi_get_config_feature *)(VAR_14 + 1);

 if (VAR_20 > 0x003b)
  goto done;
 if (VAR_20 > 0x003a)
  goto f3b;
 if (VAR_20 > 0x002b)
  goto f3a;
 if (VAR_20 > 0x002a)
  goto f2b;
 if (VAR_20 > 0x001f)
  goto f2a;
 if (VAR_20 > 0x001e)
  goto f1f;
 if (VAR_20 > 0x001d)
  goto f1e;
 if (VAR_20 > 0x0010)
  goto f1d;
 if (VAR_20 > 0x0003)
  goto f10;
 if (VAR_20 > 0x0002)
  goto f3;
 if (VAR_20 > 0x0001)
  goto f2;
 if (VAR_20 > 0x0000)
  goto f1;


 FUNC_6(0x0000, VAR_15->feature_code);
 VAR_15->flags = VAR_7 | VAR_6;
 VAR_15->add_length = 8;
 FUNC_6(0x0008, &VAR_15->feature_data[0]);
 VAR_15->feature_data[2] = 0x00;
 FUNC_6(0x0010, &VAR_15->feature_data[4]);
 VAR_15->feature_data[6] = 0x01;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f1:
 FUNC_6(0x0001, VAR_15->feature_code);
 VAR_15->flags = 0x08 | VAR_7 | VAR_6;
 VAR_15->add_length = 8;
 FUNC_7(0x00000000, &VAR_15->feature_data[0]);
 VAR_15->feature_data[4] = 0x03;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f2:
 FUNC_6(0x0002, VAR_15->feature_code);
 VAR_15->flags = 0x04 | VAR_7 | VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x02;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f3:
 FUNC_6(0x0003, VAR_15->feature_code);
 VAR_15->flags = 0x04 | VAR_7 | VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x39;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

 if (VAR_19 == VAR_8 && (VAR_13->flags & VAR_1))
  goto done;

f10:
 FUNC_6(0x0010, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 8;
 FUNC_7(VAR_13->be_lun->blocksize, &VAR_15->feature_data[0]);
 FUNC_6(1, &VAR_15->feature_data[4]);
 VAR_15->feature_data[6] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f1d:
 FUNC_6(0x001D, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 0;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f1e:
 FUNC_6(0x001E, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f1f:
 FUNC_6(0x001F, VAR_15->feature_code);
 VAR_15->flags = 0x08;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x01;
 VAR_15->feature_data[2] = 0x03;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f2a:
 FUNC_6(0x002A, VAR_15->feature_code);
 VAR_15->flags = 0x04;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x00;
 VAR_15->feature_data[1] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f2b:
 FUNC_6(0x002B, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f3a:
 FUNC_6(0x003A, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x00;
 VAR_15->feature_data[1] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

f3b:
 FUNC_6(0x003B, VAR_15->feature_code);
 VAR_15->flags = 0x00;
 if ((VAR_13->flags & VAR_1) == 0)
  VAR_15->flags |= VAR_6;
 VAR_15->add_length = 4;
 VAR_15->feature_data[0] = 0x00;
 VAR_15 = (struct scsi_get_config_feature *)
     &VAR_15->feature_data[VAR_15->add_length];

done:
 VAR_18 = (uint8_t *)VAR_15 - (uint8_t *)VAR_14;
 if (VAR_19 == VAR_10 && VAR_18 > 4) {
  VAR_15 = (struct scsi_get_config_feature *)(VAR_14 + 1);
  if (FUNC_5(VAR_15->feature_code) == VAR_20)
   VAR_15 = (struct scsi_get_config_feature *)
       &VAR_15->feature_data[VAR_15->add_length];
  VAR_18 = (uint8_t *)VAR_15 - (uint8_t *)VAR_14;
 }
 FUNC_7(VAR_18 - 4, VAR_14->data_length);
 VAR_12->kern_data_len = FUNC_4(VAR_18, VAR_17);
 VAR_12->kern_total_len = VAR_12->kern_data_len;

 FUNC_2(VAR_12);
 VAR_12->io_hdr.flags |= VAR_0;
 VAR_12->be_move_done = VAR_11;
 FUNC_1((union ctl_io *)VAR_12);
 return (VAR_2);
}
