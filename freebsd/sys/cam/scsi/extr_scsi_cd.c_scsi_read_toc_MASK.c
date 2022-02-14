
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct scsi_read_toc {int data_len; void* from_track; void* format; void* byte2; int op_code; } ;
struct TYPE_2__ {int cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_read_toc*,int) ;
 int FUNC_1 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,void*,void**,int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct ccb_scsiio *VAR_2, uint32_t VAR_3,
       void (*VAR_4)(struct cam_periph *, union ccb *),
       uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7,
       uint8_t VAR_8, uint8_t *VAR_9, uint32_t VAR_10,
       int VAR_11, int VAR_12)
{
 struct scsi_read_toc *VAR_13;

 VAR_13 = (struct scsi_read_toc *)&VAR_2->cdb_io.cdb_bytes;
 FUNC_0(VAR_13, sizeof(*VAR_13));
 VAR_13->op_code = VAR_1;






 VAR_13->byte2 = VAR_6;
 VAR_13->format = VAR_7;
 VAR_13->from_track = VAR_8;
 FUNC_2(VAR_10, VAR_13->data_len);

 FUNC_1(VAR_2,
                      VAR_3,
                     VAR_4,
                    VAR_0,
                         VAR_5,
                       VAR_9,
                        VAR_10,
                        VAR_11,
        sizeof(*VAR_13),
                      VAR_12);
}
