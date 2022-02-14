
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct scsi_exchange_medium {int invert; int sdst; int fdst; int src; int tea; int opcode; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_exchange_medium*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_4, u_int32_t VAR_5,
       void (*VAR_6)(struct cam_periph *, union ccb *),
       u_int8_t VAR_7, u_int32_t VAR_8, u_int32_t VAR_9,
       u_int32_t VAR_10, u_int32_t VAR_11, int VAR_12,
       int VAR_13, u_int8_t VAR_14, u_int32_t VAR_15)
{
 struct scsi_exchange_medium *VAR_16;

 VAR_16 = (struct scsi_exchange_medium *)&VAR_4->cdb_io.cdb_bytes;
 FUNC_0(VAR_16, sizeof(*VAR_16));

 VAR_16->opcode = VAR_1;

 FUNC_2(VAR_8, VAR_16->tea);
 FUNC_2(VAR_9, VAR_16->src);
 FUNC_2(VAR_10, VAR_16->fdst);
 FUNC_2(VAR_11, VAR_16->sdst);

 if (VAR_12)
  VAR_16->invert |= VAR_2;

 if (VAR_13)
  VAR_16->invert |= VAR_3;

 FUNC_1(VAR_4,
        VAR_5,
        VAR_6,
                  VAR_0,
        VAR_7,
                     ((void*)0),
                      0,
        VAR_14,
        sizeof(*VAR_16),
        VAR_15);
}
