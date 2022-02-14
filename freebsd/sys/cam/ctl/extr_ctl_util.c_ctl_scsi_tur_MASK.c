
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int io_type; } ;
struct ctl_scsiio {int cdb_len; int sense_len; scalar_t__ ext_data_filled; scalar_t__ ext_sg_entries; int * ext_data_ptr; scalar_t__ ext_data_len; int tag_type; scalar_t__ cdb; } ;
union ctl_io {TYPE_1__ io_hdr; struct ctl_scsiio scsiio; } ;
typedef int uint8_t ;
struct scsi_test_unit_ready {int control; int opcode; } ;
typedef int ctl_tag_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;

void
FUNC_1(union ctl_io *VAR_4, ctl_tag_type VAR_5, uint8_t VAR_6)
{
 struct ctl_scsiio *VAR_7;
 struct scsi_test_unit_ready *VAR_8;

 FUNC_0(VAR_4);

 VAR_4->io_hdr.io_type = VAR_1;
 VAR_7 = &VAR_4->scsiio;
 VAR_8 = (struct scsi_test_unit_ready *)VAR_7->cdb;

 VAR_8->opcode = VAR_3;
 VAR_8->control = VAR_6;
 VAR_4->io_hdr.flags = VAR_0;
 VAR_7->tag_type = VAR_5;
 VAR_7->cdb_len = sizeof(*VAR_8);
 VAR_7->ext_data_len = 0;
 VAR_7->ext_data_ptr = ((void*)0);
 VAR_7->ext_sg_entries = 0;
 VAR_7->ext_data_filled = 0;
 VAR_7->sense_len = VAR_2;
}
