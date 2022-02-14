
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_sa_rw {scalar_t__ control; int length; int sli_fixed; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int,int ,int *,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ccb_scsiio *VAR_10, u_int32_t VAR_11,
     void (*VAR_12)(struct cam_periph *, union ccb *),
     u_int8_t VAR_13, int VAR_14, int VAR_15,
     int VAR_16, u_int32_t VAR_17, u_int8_t *VAR_18,
     u_int32_t VAR_19, u_int8_t VAR_20, u_int32_t VAR_21)
{
 struct scsi_sa_rw *VAR_22;
 int VAR_23;

 VAR_23 = (VAR_14 & VAR_8) == VAR_9;

 VAR_22 = (struct scsi_sa_rw *)&VAR_10->cdb_io.cdb_bytes;
 VAR_22->opcode = VAR_23 ? VAR_5 : VAR_6;
 VAR_22->sli_fixed = 0;
 if (VAR_15 && VAR_23)
  VAR_22->sli_fixed |= VAR_4;
 if (VAR_16)
  VAR_22->sli_fixed |= VAR_3;
 FUNC_1(VAR_17, VAR_22->length);
 VAR_22->control = 0;

 FUNC_0(VAR_10, VAR_11, VAR_12, (VAR_23 ? VAR_1 : VAR_2) |
     ((VAR_14 & VAR_7) != 0 ? VAR_0 : 0),
     VAR_13, VAR_18, VAR_19, VAR_20,
     sizeof(*VAR_22), VAR_21);
}
