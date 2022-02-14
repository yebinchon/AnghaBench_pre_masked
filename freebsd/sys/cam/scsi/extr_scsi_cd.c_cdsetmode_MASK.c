
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {int dummy; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int32_t ;
struct scsi_mode_header_6 {int data_length; scalar_t__ medium_type; } ;
struct scsi_mode_header_10 {scalar_t__ medium_type; int data_length; } ;
struct cd_softc {int minimum_command_size; int mode_queue; } ;
struct cd_mode_params {int cdb_size; scalar_t__ mode_buf; int alloc_len; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct cd_mode_params*,int ) ;
 int FUNC_1 (int *,struct cd_mode_params*,int ,int ) ;
 union ccb* FUNC_2 (struct cam_periph*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (union ccb*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ccb_scsiio*,int ,int *,int ,int,int ,scalar_t__,int,int,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static int
FUNC_9(struct cam_periph *VAR_9, struct cd_mode_params *VAR_10)
{
 struct ccb_scsiio *VAR_11;
 struct cd_softc *VAR_12;
 union ccb *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = (struct cd_softc *)VAR_9->softc;

 VAR_13 = FUNC_2(VAR_9, VAR_0);

 VAR_11 = &VAR_13->csio;

 VAR_16 = 0;






 if (VAR_10->cdb_size == 10)
  VAR_14 = VAR_10->cdb_size;
 else
  VAR_14 = VAR_12->minimum_command_size;

 if (VAR_14 >= 10) {
  struct scsi_mode_header_10 *VAR_17;
  u_int32_t VAR_18;

  VAR_17 = (struct scsi_mode_header_10 *)VAR_10->mode_buf;

  VAR_18 = FUNC_5(VAR_17->data_length);

  FUNC_7(0, VAR_17->data_length);





  VAR_17->medium_type = 0;





  VAR_15 = VAR_18 + sizeof(VAR_17->data_length);

 } else {
  struct scsi_mode_header_6 *VAR_19;

  VAR_19 = (struct scsi_mode_header_6 *)VAR_10->mode_buf;

  VAR_15 = VAR_19->data_length + 1;

  VAR_19->data_length = 0;





  VAR_19->medium_type = 0;
 }


 VAR_15 = FUNC_4(VAR_15, VAR_10->alloc_len);

 FUNC_6(VAR_11,
                      VAR_6,
                     ((void*)0),
                         VAR_2,
                            1,
                         0,
                        VAR_10->mode_buf,
                        VAR_15,
                               VAR_14,
                        VAR_4,
                      50000);


 FUNC_0(&VAR_12->mode_queue, VAR_10, VAR_8);

 VAR_16 = FUNC_3(VAR_13, VAR_7, VAR_1,
                   VAR_3);

 FUNC_8(VAR_13);

 FUNC_1(&VAR_12->mode_queue, VAR_10, VAR_5, VAR_8);

 return (VAR_16);
}
