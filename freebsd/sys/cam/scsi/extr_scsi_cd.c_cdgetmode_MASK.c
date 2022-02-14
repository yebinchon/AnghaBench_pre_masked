
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {int dummy; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int32_t ;
struct scsi_mode_header_6 {int data_length; } ;
struct scsi_mode_header_10 {int data_length; } ;
struct cd_softc {int minimum_command_size; int mode_queue; } ;
struct cd_mode_params {int cdb_size; int alloc_len; scalar_t__ mode_buf; } ;
struct cd_mode_data_10 {int dummy; } ;
struct cd_mode_data {int dummy; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct cd_mode_params*,int ) ;
 int FUNC_1 (int *,struct cd_mode_params*,int ,int ) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ccb_scsiio*,int ,int *,int ,int ,int ,int,scalar_t__,int,int,int ,int) ;
 int FUNC_7 (int ,char*,int,int,int) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static int
FUNC_9(struct cam_periph *VAR_11, struct cd_mode_params *VAR_12,
   u_int32_t VAR_13)
{
 struct ccb_scsiio *VAR_14;
 struct cd_softc *VAR_15;
 union ccb *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = (struct cd_softc *)VAR_11->softc;

 VAR_16 = FUNC_2(VAR_11, VAR_0);

 VAR_14 = &VAR_16->csio;

 VAR_12->cdb_size = VAR_15->minimum_command_size;
 if (VAR_12->cdb_size < 10)
  VAR_17 = sizeof(struct cd_mode_data);
 else
  VAR_17 = sizeof(struct cd_mode_data_10);


 VAR_17 = FUNC_4(VAR_17, VAR_12->alloc_len);

 FUNC_6(VAR_14,
                     VAR_8,
                    ((void*)0),
                        VAR_3,
                 0,
                       VAR_5,
                  VAR_13,
                       VAR_12->mode_buf,
                       VAR_17,
                              VAR_15->minimum_command_size,
                       VAR_6,
                     50000);
 FUNC_0(&VAR_15->mode_queue, VAR_12, VAR_10);

 VAR_18 = FUNC_3(VAR_16, VAR_9, VAR_1,
                   VAR_4);

 FUNC_8(VAR_16);

 FUNC_1(&VAR_15->mode_queue, VAR_12, VAR_7, VAR_10);
 if (VAR_18 == 0) {
  u_int32_t VAR_19;

  if (VAR_12->cdb_size == 10) {
   struct scsi_mode_header_10 *VAR_20;

   VAR_20 = (struct scsi_mode_header_10 *)VAR_12->mode_buf;
   VAR_19 = FUNC_5(VAR_20->data_length);
   VAR_19 += sizeof(VAR_20->data_length);
  } else {
   struct scsi_mode_header_6 *VAR_21;

   VAR_21 = (struct scsi_mode_header_6 *)VAR_12->mode_buf;
   VAR_19 = VAR_21->data_length;
   VAR_19 += sizeof(VAR_21->data_length);
  }
  if (VAR_19 > VAR_12->alloc_len) {
   FUNC_7(VAR_11->path, "allocated modepage %d length "
       "%d < returned length %d\n", VAR_13, VAR_12->alloc_len,
       VAR_19);
   VAR_18 = VAR_2;
  }
 }
 return (VAR_18);
}
