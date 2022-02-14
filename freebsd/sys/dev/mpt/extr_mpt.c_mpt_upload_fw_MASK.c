
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mpt_softc {int fw_image_size; int fw_phys; int fw_dmap; int fw_dmat; } ;
typedef int fw_req_buf ;
typedef int fw_reply ;
struct TYPE_6__ {int DetailsLength; void* ImageSize; int Flags; } ;
struct TYPE_5__ {int SGL; void* MsgContext; int Function; int ImageType; } ;
struct TYPE_4__ {void* Address; void* FlagsLength; } ;
typedef TYPE_1__ SGE_SIMPLE32 ;
typedef int MSG_FW_UPLOAD_REPLY ;
typedef TYPE_2__ MSG_FW_UPLOAD ;
typedef TYPE_3__ FW_UPLOAD_TCSGE ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int **,int ,int) ;
 int FUNC_3 (struct mpt_softc*,int,int *) ;
 int FUNC_4 (struct mpt_softc*,int,int **) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_14)
{
 uint8_t VAR_15[VAR_2];
 MSG_FW_UPLOAD_REPLY VAR_16;
 MSG_FW_UPLOAD *VAR_17;
 FW_UPLOAD_TCSGE *VAR_18;
 SGE_SIMPLE32 *VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 VAR_17 = (MSG_FW_UPLOAD *)VAR_15;
 VAR_17->ImageType = VAR_4;
 VAR_17->Function = VAR_3;
 VAR_17->MsgContext = FUNC_1(VAR_13);
 VAR_18 = (FW_UPLOAD_TCSGE *)&VAR_17->SGL;
 VAR_18->DetailsLength = 12;
 VAR_18->Flags = VAR_12;
 VAR_18->ImageSize = FUNC_1(VAR_14->fw_image_size);
 VAR_19 = (SGE_SIMPLE32 *)(VAR_18 + 1);
 VAR_20 = (VAR_9 | VAR_6
       | VAR_7 | VAR_11
       | VAR_5 | VAR_8);
 VAR_20 <<= VAR_10;
 VAR_19->FlagsLength = FUNC_1(VAR_20 | VAR_14->fw_image_size);
 VAR_19->Address = FUNC_1(VAR_14->fw_phys);
 FUNC_0(VAR_14->fw_dmat, VAR_14->fw_dmap, VAR_1);
 VAR_21 = FUNC_4(VAR_14, sizeof(VAR_15), &VAR_15);
 if (VAR_21)
  return(VAR_21);
 VAR_21 = FUNC_3(VAR_14, sizeof(VAR_16), &VAR_16);
 FUNC_0(VAR_14->fw_dmat, VAR_14->fw_dmap, VAR_0);
 return (VAR_21);
}
