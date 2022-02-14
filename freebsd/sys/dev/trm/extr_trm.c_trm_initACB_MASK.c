
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int8_t ;
typedef size_t u_int16_t ;
struct TYPE_6__ {int max_id; int max_lun; int TagMaxNum; scalar_t__ ACBFlag; void* AdaptType; scalar_t__ DeviceCnt; scalar_t__ AdaptSCSILUN; int AdaptSCSIID; void* AdapterUnit; int * pActiveDCB; int * pDCBRunRobin; int * pLinkDCB; } ;
struct TYPE_5__ {int NvramChannelCfg; int NvramMaxTag; int NvramScsiId; } ;
typedef TYPE_1__* PNVRAMTYPE ;
typedef TYPE_2__* PACB ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(PACB VAR_2, u_int8_t VAR_3, u_int16_t VAR_4)
{
 PNVRAMTYPE VAR_5;

 VAR_5 = &VAR_1[VAR_4];
 VAR_2->max_id = 15;

 if (VAR_5->NvramChannelCfg & VAR_0)
    VAR_2->max_lun = 7;
 else
  VAR_2->max_lun = 0;

 FUNC_0("trm: pACB->max_id= %d pACB->max_lun= %d \n",
     VAR_2->max_id, VAR_2->max_lun);
 VAR_2->pLinkDCB = ((void*)0);
 VAR_2->pDCBRunRobin = ((void*)0);
 VAR_2->pActiveDCB = ((void*)0);
 VAR_2->AdapterUnit = (u_int8_t)VAR_4;
 VAR_2->AdaptSCSIID = VAR_5->NvramScsiId;
 VAR_2->AdaptSCSILUN = 0;
 VAR_2->DeviceCnt = 0;
 VAR_2->AdaptType = VAR_3;
 VAR_2->TagMaxNum = 2 << VAR_5->NvramMaxTag;
 VAR_2->ACBFlag = 0;
 return;
}
