
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int stbc; int OpMode; int AddChan; int ControlChan; } ;
struct TYPE_10__ {TYPE_2__ AddHtInfo; int MacHTParamInfo; int HTCapabilitiesInfo; int CapInfo; int HTRateBitMap; int LegacyRateBitMap; } ;
struct TYPE_7__ {void* stbc; void* OpMode; int AddChan; int ControlChan; } ;
struct TYPE_9__ {TYPE_1__ AddHtInfo; int MacHTParamInfo; void* HTCapabilitiesInfo; void* CapInfo; void* HTRateBitMap; void* LegacyRateBitMap; } ;
typedef TYPE_3__ PeerInfo_t ;
typedef TYPE_4__ MWL_HAL_PEERINFO ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PeerInfo_t *VAR_0, const MWL_HAL_PEERINFO *VAR_1)
{
 VAR_0->LegacyRateBitMap = FUNC_1(VAR_1->LegacyRateBitMap);
 VAR_0->HTRateBitMap = FUNC_1(VAR_1->HTRateBitMap);
 VAR_0->CapInfo = FUNC_0(VAR_1->CapInfo);
 VAR_0->HTCapabilitiesInfo = FUNC_0(VAR_1->HTCapabilitiesInfo);
 VAR_0->MacHTParamInfo = VAR_1->MacHTParamInfo;
 VAR_0->AddHtInfo.ControlChan = VAR_1->AddHtInfo.ControlChan;
 VAR_0->AddHtInfo.AddChan = VAR_1->AddHtInfo.AddChan;
 VAR_0->AddHtInfo.OpMode = FUNC_0(VAR_1->AddHtInfo.OpMode);
 VAR_0->AddHtInfo.stbc = FUNC_0(VAR_1->AddHtInfo.stbc);
}
