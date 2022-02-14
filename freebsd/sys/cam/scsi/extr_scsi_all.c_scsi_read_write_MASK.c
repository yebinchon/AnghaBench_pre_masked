
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct scsi_rw_6 {int length; int * addr; scalar_t__ control; int opcode; } ;
struct scsi_rw_16 {scalar_t__ control; int * length; scalar_t__ reserved; int addr; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_12 {int * length; int * addr; scalar_t__ control; scalar_t__ reserved; scalar_t__ byte2; int opcode; } ;
struct scsi_rw_10 {int * length; int * addr; scalar_t__ control; scalar_t__ reserved; scalar_t__ byte2; int opcode; } ;
struct TYPE_4__ {int cdb_bytes; } ;
struct TYPE_3__ {int path; } ;
struct ccb_scsiio {TYPE_2__ cdb_io; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct ccb_scsiio*,int,void (*) (struct cam_periph*,union ccb*),int,scalar_t__,scalar_t__*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;

void
FUNC_6(struct ccb_scsiio *VAR_15, u_int32_t VAR_16,
  void (*VAR_17)(struct cam_periph *, union ccb *),
  u_int8_t VAR_18, int VAR_19, u_int8_t VAR_20,
  int VAR_21, u_int64_t VAR_22, u_int32_t VAR_23,
  u_int8_t *VAR_24, u_int32_t VAR_25, u_int8_t VAR_26,
  u_int32_t VAR_27)
{
 int VAR_28;
 u_int8_t VAR_29;

 VAR_28 = (VAR_19 & VAR_9) == VAR_10;







 if ((VAR_21 < 10)
  && ((VAR_22 & 0x1fffff) == VAR_22)
  && ((VAR_23 & 0xff) == VAR_23)
  && (VAR_20 == 0)) {



  struct scsi_rw_6 *VAR_30;

  VAR_30 = (struct scsi_rw_6 *)&VAR_15->cdb_io.cdb_bytes;
  VAR_30->opcode = VAR_28 ? VAR_7 : VAR_14;
  FUNC_4(VAR_22, VAR_30->addr);
  VAR_30->length = VAR_23 & 0xff;
  VAR_30->control = 0;
  VAR_29 = sizeof(*VAR_30);

  FUNC_0(VAR_15->ccb_h.path, VAR_1,
     ("6byte: %x%x%x:%d:%d\n", VAR_30->addr[0],
      VAR_30->addr[1], VAR_30->addr[2],
      VAR_30->length, VAR_25));
 } else if ((VAR_21 < 12)
  && ((VAR_23 & 0xffff) == VAR_23)
  && ((VAR_22 & 0xffffffff) == VAR_22)) {



  struct scsi_rw_10 *VAR_31;

  VAR_31 = (struct scsi_rw_10 *)&VAR_15->cdb_io.cdb_bytes;
  VAR_31->opcode = VAR_28 ? VAR_4 : VAR_11;
  VAR_31->byte2 = VAR_20;
  FUNC_5(VAR_22, VAR_31->addr);
  VAR_31->reserved = 0;
  FUNC_3(VAR_23, VAR_31->length);
  VAR_31->control = 0;
  VAR_29 = sizeof(*VAR_31);

  FUNC_0(VAR_15->ccb_h.path, VAR_1,
     ("10byte: %x%x%x%x:%x%x: %d\n", VAR_31->addr[0],
      VAR_31->addr[1], VAR_31->addr[2],
      VAR_31->addr[3], VAR_31->length[0],
      VAR_31->length[1], VAR_25));
 } else if ((VAR_21 < 16)
  && ((VAR_23 & 0xffffffff) == VAR_23)
  && ((VAR_22 & 0xffffffff) == VAR_22)) {




  struct scsi_rw_12 *VAR_32;

  VAR_32 = (struct scsi_rw_12 *)&VAR_15->cdb_io.cdb_bytes;
  VAR_32->opcode = VAR_28 ? VAR_5 : VAR_12;
  VAR_32->byte2 = VAR_20;
  FUNC_5(VAR_22, VAR_32->addr);
  VAR_32->reserved = 0;
  FUNC_5(VAR_23, VAR_32->length);
  VAR_32->control = 0;
  VAR_29 = sizeof(*VAR_32);

  FUNC_0(VAR_15->ccb_h.path, VAR_1,
     ("12byte: %x%x%x%x:%x%x%x%x: %d\n", VAR_32->addr[0],
      VAR_32->addr[1], VAR_32->addr[2],
      VAR_32->addr[3], VAR_32->length[0],
      VAR_32->length[1], VAR_32->length[2],
      VAR_32->length[3], VAR_25));
 } else {




  struct scsi_rw_16 *VAR_33;

  VAR_33 = (struct scsi_rw_16 *)&VAR_15->cdb_io.cdb_bytes;
  VAR_33->opcode = VAR_28 ? VAR_6 : VAR_13;
  VAR_33->byte2 = VAR_20;
  FUNC_2(VAR_22, VAR_33->addr);
  VAR_33->reserved = 0;
  FUNC_5(VAR_23, VAR_33->length);
  VAR_33->control = 0;
  VAR_29 = sizeof(*VAR_33);
 }
 FUNC_1(VAR_15,
        VAR_16,
        VAR_17,
        (VAR_28 ? VAR_2 : VAR_3) |
        ((VAR_19 & VAR_8) != 0 ? VAR_0 : 0),
        VAR_18,
        VAR_24,
        VAR_25,
        VAR_26,
        VAR_29,
        VAR_27);
}
