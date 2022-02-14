
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsipi_xfer {int xs_control; struct scsipi_toc_header* data; struct scsipi_generic* cmd; } ;
struct scsipi_toc_header {int revision; int product; int vendor; int dev_qual2; int device; } ;
struct scsipi_start_stop {int how; } ;
struct scsipi_read_trackinfo_data {int track_size; } ;
struct scsipi_read_discinfo_data {int revision; int product; int vendor; int dev_qual2; int device; } ;
struct scsipi_read_cd_cap_data {int addr; int length; } ;
struct scsipi_inquiry_data {int revision; int product; int vendor; int dev_qual2; int device; } ;
struct scsipi_get_conf_data {int dummy; } ;
struct scsipi_generic {int opcode; } ;
struct scsipi_channel {int dummy; } ;
struct scsi_rw_6 {int length; int addr; } ;
typedef scalar_t__ scsipi_adapter_req_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;






 size_t VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (struct scsipi_toc_header*,int ,int) ;
 int VAR_8 ;
 int FUNC_4 (char*,int,...) ;
 int * VAR_9 ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int,struct scsipi_toc_header*,int,int,int*) ;
 int FUNC_7 (struct scsipi_xfer*) ;
 int FUNC_8 (struct scsipi_xfer*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10(struct scsipi_channel *VAR_10,
 scsipi_adapter_req_t VAR_11, void *VAR_12)
{
 struct scsipi_xfer *VAR_13 = VAR_12;
 struct scsipi_generic *VAR_14 = VAR_13->cmd;




 if (VAR_11 != VAR_0)
  return;



 switch (VAR_14->opcode) {
 case 129:
  if (VAR_7 == -1)
   FUNC_8(VAR_13);

  break;
 case 137: {
  struct scsipi_inquiry_data *VAR_15 = (void *)VAR_13->data;

  FUNC_3(VAR_15, 0, sizeof(*VAR_15));
  VAR_15->device = VAR_5;
  VAR_15->dev_qual2 = VAR_3;
  FUNC_9(VAR_15->vendor, "RUMPHOBO");
  FUNC_9(VAR_15->product, "It's a LIE");
  FUNC_9(VAR_15->revision, "0.00");
  break;
 }
 case 136: {
  struct scsipi_read_cd_cap_data *VAR_16 = (void *)VAR_13->data;

  FUNC_1(VAR_1, VAR_16->length);
  FUNC_1(VAR_8, VAR_16->addr);

  break;
 }
 case 135: {
  struct scsipi_read_discinfo_data *VAR_17 = (void *)VAR_13->data;

  FUNC_3(VAR_17, 0, sizeof(*VAR_17));
  break;
 }
 case 133: {
  struct scsipi_read_trackinfo_data *VAR_18 = (void *)VAR_13->data;

  FUNC_1(VAR_8, VAR_18->track_size);
  break;
 }
 case 134: {
  struct scsipi_toc_header *VAR_19 = (void *)VAR_13->data;

  FUNC_3(VAR_19, 0, sizeof(*VAR_19));
  break;
 }
 case 128: {
  struct scsipi_start_stop *VAR_20 = (void *)VAR_14;

  if (VAR_20->how & VAR_4) {



   VAR_7 = -1;
  }
  break;
 }
 case 130: {
  if (VAR_7 == -1) {
   if ((VAR_13->xs_control & VAR_6) == 0)
    FUNC_2(&VAR_9
        [VAR_2]);

   FUNC_8(VAR_13);
  }

  break;
 }
 case 138: {
  FUNC_3(VAR_13->data, 0, sizeof(struct scsipi_get_conf_data));
  break;
 }
 case 131: {
  break;
 }
 case 132:

  break;
 default:
  FUNC_4("unhandled opcode 0x%x\n", VAR_14->opcode);
  break;
 }

 FUNC_7(VAR_13);
}
