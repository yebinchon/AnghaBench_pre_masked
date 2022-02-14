
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct scsi_sense_desc_header {int dummy; } ;
struct scsi_sense_data {int dummy; } ;
struct scsi_sense_ata_ret_desc {int status; int error; int flags; int device; int lba_7_0; int lba_15_8; int lba_23_16; int count_7_0; int lba_31_24; int lba_39_32; int lba_47_40; int count_15_8; } ;
struct scsi_inquiry_data {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbuf*,char*,int,...) ;

void
FUNC_1(struct sbuf *VAR_1, struct scsi_sense_data *VAR_2,
    u_int VAR_3, uint8_t *VAR_4, int VAR_5,
    struct scsi_inquiry_data *VAR_6,
    struct scsi_sense_desc_header *VAR_7)
{
 struct scsi_sense_ata_ret_desc *VAR_8;

 VAR_8 = (struct scsi_sense_ata_ret_desc *)VAR_7;

 FUNC_0(VAR_1, "ATA status: %02x (%s%s%s%s%s%s%s%s), ",
     VAR_8->status,
     (VAR_8->status & 0x80) ? "BSY " : "",
     (VAR_8->status & 0x40) ? "DRDY " : "",
     (VAR_8->status & 0x20) ? "DF " : "",
     (VAR_8->status & 0x10) ? "SERV " : "",
     (VAR_8->status & 0x08) ? "DRQ " : "",
     (VAR_8->status & 0x04) ? "CORR " : "",
     (VAR_8->status & 0x02) ? "IDX " : "",
     (VAR_8->status & 0x01) ? "ERR" : "");
 if (VAR_8->status & 1) {
     FUNC_0(VAR_1, "error: %02x (%s%s%s%s%s%s%s%s), ",
  VAR_8->error,
  (VAR_8->error & 0x80) ? "ICRC " : "",
  (VAR_8->error & 0x40) ? "UNC " : "",
  (VAR_8->error & 0x20) ? "MC " : "",
  (VAR_8->error & 0x10) ? "IDNF " : "",
  (VAR_8->error & 0x08) ? "MCR " : "",
  (VAR_8->error & 0x04) ? "ABRT " : "",
  (VAR_8->error & 0x02) ? "NM " : "",
  (VAR_8->error & 0x01) ? "ILI" : "");
 }

 if (VAR_8->flags & VAR_0) {
  FUNC_0(VAR_1, "count: %02x%02x, ",
      VAR_8->count_15_8, VAR_8->count_7_0);
  FUNC_0(VAR_1, "LBA: %02x%02x%02x%02x%02x%02x, ",
      VAR_8->lba_47_40, VAR_8->lba_39_32, VAR_8->lba_31_24,
      VAR_8->lba_23_16, VAR_8->lba_15_8, VAR_8->lba_7_0);
 } else {
  FUNC_0(VAR_1, "count: %02x, ", VAR_8->count_7_0);
  FUNC_0(VAR_1, "LBA: %02x%02x%02x, ",
      VAR_8->lba_23_16, VAR_8->lba_15_8, VAR_8->lba_7_0);
 }
 FUNC_0(VAR_1, "device: %02x, ", VAR_8->device);
}
