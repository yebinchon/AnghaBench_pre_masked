
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_vpd_id_descriptor {int length; } ;
struct scsi_token {int* length; int * body; int type; } ;
struct scsi_read_capacity_data_long {int prot_lbppbe; int* lalba_lbp; int length; } ;
struct TYPE_6__ {int block_length; } ;
struct scsi_ec_cscd_id {TYPE_2__ dtsp; int codeset; int luidt_pdt; int type_code; } ;
struct ctl_port {TYPE_4__* target_devid; } ;
struct ctl_lun {TYPE_3__* be_lun; TYPE_1__* lun_devid; } ;
typedef int off_t ;
struct TYPE_8__ {int len; struct scsi_vpd_id_descriptor* data; } ;
struct TYPE_7__ {int pblockexp; int pblockoff; int flags; int blocksize; } ;
struct TYPE_5__ {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,struct scsi_vpd_id_descriptor*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 struct scsi_vpd_id_descriptor* FUNC_3 (struct scsi_vpd_id_descriptor*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct ctl_lun *VAR_10, struct ctl_port *VAR_11, off_t VAR_12,
    struct scsi_token *VAR_13)
{
 static int VAR_14 = 0;
 struct scsi_vpd_id_descriptor *VAR_15 = ((void*)0);
 struct scsi_ec_cscd_id *VAR_16;
 struct scsi_read_capacity_data_long *VAR_17;
 int VAR_18;

 FUNC_7(VAR_2, VAR_13->type);
 FUNC_5(0x01f8, VAR_13->length);
 FUNC_4(FUNC_1(&VAR_14, 1), &VAR_13->body[0]);
 if (VAR_10->lun_devid)
  VAR_15 = FUNC_3((struct scsi_vpd_id_descriptor *)
      VAR_10->lun_devid->data, VAR_10->lun_devid->len,
      VAR_9);
 if (VAR_15 == ((void*)0) && VAR_10->lun_devid)
  VAR_15 = FUNC_3((struct scsi_vpd_id_descriptor *)
      VAR_10->lun_devid->data, VAR_10->lun_devid->len,
      VAR_8);
 if (VAR_15 != ((void*)0)) {
  VAR_16 = (struct scsi_ec_cscd_id *)&VAR_13->body[8];
  VAR_16->type_code = VAR_1;
  VAR_16->luidt_pdt = VAR_7;
  FUNC_2(&VAR_16->codeset, VAR_15, 4 + VAR_15->length);
  FUNC_6(VAR_10->be_lun->blocksize, VAR_16->dtsp.block_length);
 }
 FUNC_4(0, &VAR_13->body[40]);
 FUNC_4(VAR_12, &VAR_13->body[48]);


 VAR_17 = (struct scsi_read_capacity_data_long *)&VAR_13->body[88 - 8];
 FUNC_7(VAR_10->be_lun->blocksize, VAR_17->length);
 VAR_17->prot_lbppbe = VAR_10->be_lun->pblockexp & VAR_5;
 FUNC_5(VAR_10->be_lun->pblockoff & VAR_3, VAR_17->lalba_lbp);
 if (VAR_10->be_lun->flags & VAR_0)
  VAR_17->lalba_lbp[0] |= VAR_4 | VAR_6;

 if (VAR_11->target_devid) {
  VAR_18 = VAR_11->target_devid->len;
  FUNC_2(&VAR_13->body[120], VAR_11->target_devid->data, VAR_18);
 } else
  VAR_18 = 32;
 FUNC_0(&VAR_13->body[120 + VAR_18], 384 - VAR_18, 0);
}
