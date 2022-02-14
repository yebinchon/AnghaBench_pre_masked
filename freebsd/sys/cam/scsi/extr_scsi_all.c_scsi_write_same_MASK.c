
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct scsi_write_same_16 {int * length; int * addr; scalar_t__ control; scalar_t__ group; void* byte2; int opcode; } ;
struct scsi_write_same_10 {int * length; int * addr; scalar_t__ control; scalar_t__ group; void* byte2; int opcode; } ;
struct TYPE_4__ {int path; } ;
struct TYPE_3__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_2__ ccb_h; TYPE_1__ cdb_io; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ccb_scsiio*,int,void (*) (struct cam_periph*,union ccb*),int ,void*,void**,int,void*,void*,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;

void
FUNC_5(struct ccb_scsiio *VAR_4, u_int32_t VAR_5,
  void (*VAR_6)(struct cam_periph *, union ccb *),
  u_int8_t VAR_7, u_int8_t VAR_8,
  int VAR_9, u_int64_t VAR_10, u_int32_t VAR_11,
  u_int8_t *VAR_12, u_int32_t VAR_13, u_int8_t VAR_14,
  u_int32_t VAR_15)
{
 u_int8_t VAR_16;
 if ((VAR_9 < 16) &&
     ((VAR_11 & 0xffff) == VAR_11) &&
     ((VAR_10 & 0xffffffff) == VAR_10)) {



  struct scsi_write_same_10 *VAR_17;

  VAR_17 = (struct scsi_write_same_10 *)&VAR_4->cdb_io.cdb_bytes;
  VAR_17->opcode = VAR_2;
  VAR_17->byte2 = VAR_8;
  FUNC_4(VAR_10, VAR_17->addr);
  VAR_17->group = 0;
  FUNC_3(VAR_11, VAR_17->length);
  VAR_17->control = 0;
  VAR_16 = sizeof(*VAR_17);

  FUNC_0(VAR_4->ccb_h.path, VAR_0,
     ("10byte: %x%x%x%x:%x%x: %d\n", VAR_17->addr[0],
      VAR_17->addr[1], VAR_17->addr[2],
      VAR_17->addr[3], VAR_17->length[0],
      VAR_17->length[1], VAR_13));
 } else {




  struct scsi_write_same_16 *VAR_18;

  VAR_18 = (struct scsi_write_same_16 *)&VAR_4->cdb_io.cdb_bytes;
  VAR_18->opcode = VAR_3;
  VAR_18->byte2 = VAR_8;
  FUNC_2(VAR_10, VAR_18->addr);
  FUNC_4(VAR_11, VAR_18->length);
  VAR_18->group = 0;
  VAR_18->control = 0;
  VAR_16 = sizeof(*VAR_18);

  FUNC_0(VAR_4->ccb_h.path, VAR_0,
     ("16byte: %x%x%x%x%x%x%x%x:%x%x%x%x: %d\n",
      VAR_18->addr[0], VAR_18->addr[1],
      VAR_18->addr[2], VAR_18->addr[3],
      VAR_18->addr[4], VAR_18->addr[5],
      VAR_18->addr[6], VAR_18->addr[7],
      VAR_18->length[0], VAR_18->length[1],
      VAR_18->length[2], VAR_18->length[3],
      VAR_13));
 }
 FUNC_1(VAR_4,
        VAR_5,
        VAR_6,
                 VAR_1,
        VAR_7,
        VAR_12,
        VAR_13,
        VAR_14,
        VAR_16,
        VAR_15);
}
