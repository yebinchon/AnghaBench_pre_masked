
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sense_len; int scsi_status; int sense_data; } ;
struct TYPE_3__ {int status; int target_lun; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct mrsas_softc {int mrsas_dev; } ;
struct mrsas_mpt_cmd {struct mrsas_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int*,int) ;

void
FUNC_2(struct mrsas_mpt_cmd *VAR_7, union ccb *VAR_8, u_int8_t VAR_9,
    u_int8_t VAR_10, u_int32_t VAR_11, u_int8_t *VAR_12)
{
 struct mrsas_softc *VAR_13 = VAR_7->sc;
 u_int8_t *VAR_14;

 switch (VAR_9) {
 case 130:
  VAR_8->ccb_h.status = VAR_4;
  break;
 case 128:
 case 129:
  VAR_8->ccb_h.status = VAR_6;
  VAR_14 = (u_int8_t *)&VAR_8->csio.sense_data;
  if (VAR_14) {

   FUNC_1(VAR_14, VAR_12, 18);
   VAR_8->csio.sense_len = 18;
   VAR_8->ccb_h.status |= VAR_0;
  }
  break;
 case 131:
 case 132:
  if (VAR_8->ccb_h.target_lun)
   VAR_8->ccb_h.status |= VAR_2;
  else
   VAR_8->ccb_h.status |= VAR_1;
  break;
 case 133:
  VAR_8->ccb_h.status |= VAR_3;
  break;
 default:
  FUNC_0(VAR_13->mrsas_dev, "FW cmd complete status %x\n", VAR_9);
  VAR_8->ccb_h.status = VAR_5;
  VAR_8->csio.scsi_status = VAR_9;
 }
 return;
}
