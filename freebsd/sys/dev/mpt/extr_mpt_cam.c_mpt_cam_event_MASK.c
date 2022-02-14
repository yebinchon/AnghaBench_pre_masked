
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct cam_path* path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct mpt_softc {struct cam_sim* sim; struct cam_sim* phydisk_sim; int ready; struct cam_path* path; } ;
struct TYPE_13__ {int status; int flags; int func_code; } ;
struct ccb_relsim {TYPE_6__ ccb_h; int openings; int release_flags; } ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int request_t ;
typedef int lun_id_t ;
typedef int data0 ;
struct TYPE_12__ {int Event; void** Data; } ;
struct TYPE_11__ {void* DiscoveryStatus; int Port; } ;
struct TYPE_10__ {int CurrentDepth; int TargetID; int Bus; } ;
struct TYPE_9__ {int ReasonCode; int TargetID; int Bus; } ;
typedef TYPE_2__* PTR_EVENT_DATA_SAS_DEVICE_STATUS_CHANGE ;
typedef TYPE_3__* PTR_EVENT_DATA_QUEUE_FULL ;
typedef TYPE_4__* PTR_EVENT_DATA_DISCOVERY_ERROR ;
typedef TYPE_5__ MSG_EVENT_NOTIFY_REPLY ;


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
 int FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct mpt_softc*,int ) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,int,...) ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;
 int FUNC_6 (union ccb*) ;
 union ccb* FUNC_7 () ;
 int FUNC_8 (int ,struct cam_path*,int *) ;
 int FUNC_9 (struct cam_path**,int *,int,int ,int ) ;
 int FUNC_10 (union ccb*) ;
 int FUNC_11 (struct cam_path*) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (TYPE_6__*,struct cam_path*,int) ;

__attribute__((used)) static int
FUNC_14(struct mpt_softc *VAR_11, request_t *VAR_12,
       MSG_EVENT_NOTIFY_REPLY *VAR_13)
{
 uint32_t VAR_14, VAR_15;

 VAR_14 = FUNC_2(VAR_13->Data[0]);
 VAR_15 = FUNC_2(VAR_13->Data[1]);
 switch(VAR_13->Event & 0xFF) {
 case 128:
  FUNC_5(VAR_11, "UNIT ATTENTION: Bus: 0x%02x TargetID: 0x%02x\n",
      (VAR_14 >> 8) & 0xff, VAR_14 & 0xff);
  break;

 case 147:

  FUNC_5(VAR_11, "IOC Generated Bus Reset Port: %d\n",
      (VAR_14 >> 8) & 0xff);
  FUNC_8(VAR_0, VAR_11->path, ((void*)0));
  break;

 case 149:

  FUNC_5(VAR_11, "External Bus Reset Detected\n");




  FUNC_8(VAR_0, VAR_11->path, ((void*)0));
  break;

 case 139:
 {
  union ccb *VAR_16;
  uint32_t VAR_17;



  FUNC_5(VAR_11, "Rescan Port: %d\n", (VAR_14 >> 8) & 0xff);
  if (VAR_11->ready == 0) {
   break;
  }
  if (VAR_11->phydisk_sim) {
   VAR_17 = FUNC_0(VAR_11->phydisk_sim);
  } else {
   VAR_17 = FUNC_0(VAR_11->sim);
  }




  VAR_16 = FUNC_7();
  if (VAR_16 == ((void*)0)) {
   FUNC_5(VAR_11, "unable to alloc CCB for rescan\n");
   break;
  }

  if (FUNC_9(&VAR_16->ccb_h.path, ((void*)0), VAR_17,
      VAR_5, VAR_3) != VAR_4) {
   FUNC_5(VAR_11, "unable to create path for rescan\n");
   FUNC_10(VAR_16);
   break;
  }
  FUNC_12(VAR_16);
  break;
 }

 case 144:
  FUNC_5(VAR_11, "Port %d: LinkState: %s\n",
      (VAR_15 >> 8) & 0xff,
      ((VAR_14 & 0xff) == 0)? "Failed" : "Active");
  break;

 case 141:
  switch ((VAR_14 >> 16) & 0xff) {
  case 0x01:
   FUNC_5(VAR_11,
       "Port 0x%x: FC LinkEvent: LIP(%02x,%02x) "
       "(Loop Initialization)\n",
       (VAR_15 >> 8) & 0xff,
       (VAR_14 >> 8) & 0xff,
       (VAR_14 ) & 0xff);
   switch ((VAR_14 >> 8) & 0xff) {
   case 0xF7:
    if ((VAR_14 & 0xff) == 0xF7) {
     FUNC_5(VAR_11, "Device needs AL_PA\n");
    } else {
     FUNC_5(VAR_11, "Device %02x doesn't like "
         "FC performance\n",
         VAR_14 & 0xFF);
    }
    break;
   case 0xF8:
    if ((VAR_14 & 0xff) == 0xF7) {
     FUNC_5(VAR_11, "Device had loop failure "
         "at its receiver prior to acquiring"
         " AL_PA\n");
    } else {
     FUNC_5(VAR_11, "Device %02x detected loop"
         " failure at its receiver\n",
         VAR_14 & 0xFF);
    }
    break;
   default:
    FUNC_5(VAR_11, "Device %02x requests that device "
        "%02x reset itself\n",
        VAR_14 & 0xFF,
        (VAR_14 >> 8) & 0xFF);
    break;
   }
   break;
  case 0x02:
   FUNC_5(VAR_11, "Port 0x%x: FC LinkEvent: "
       "LPE(%02x,%02x) (Loop Port Enable)\n",
       (VAR_15 >> 8) & 0xff,
       (VAR_14 >> 8) & 0xff,
       (VAR_14 ) & 0xff );
   break;
  case 0x03:
   FUNC_5(VAR_11, "Port 0x%x: FC LinkEvent: "
       "LPB(%02x,%02x) (Loop Port Bypass)\n",
       (VAR_15 >> 8) & 0xff,
       (VAR_14 >> 8) & 0xff,
       (VAR_14 ) & 0xff );
   break;
  default:
   FUNC_5(VAR_11, "Port 0x%x: FC LinkEvent: Unknown "
       "FC event (%02x %02x %02x)\n",
       (VAR_15 >> 8) & 0xff,
       (VAR_14 >> 16) & 0xff,
       (VAR_14 >> 8) & 0xff,
       (VAR_14 ) & 0xff );
  }
  break;

 case 143:
  FUNC_5(VAR_11, "FC Logout Port: %d N_PortID: %02x\n",
      (VAR_15 >> 8) & 0xff, VAR_14);
  break;
 case 140:
 {
  struct cam_sim *VAR_18;
  struct cam_path *VAR_19;
  struct ccb_relsim VAR_20;
  PTR_EVENT_DATA_QUEUE_FULL VAR_21;
  lun_id_t VAR_22;

  VAR_21 = (PTR_EVENT_DATA_QUEUE_FULL)VAR_13->Data;
  VAR_21->CurrentDepth = FUNC_1(VAR_21->CurrentDepth);
  if (VAR_10) {
      FUNC_5(VAR_11, "QUEUE FULL EVENT: Bus 0x%02x Target 0x%02x "
   "Depth %d\n",
   VAR_21->Bus, VAR_21->TargetID, VAR_21->CurrentDepth);
  }
  if (VAR_11->phydisk_sim && FUNC_3(VAR_11,
      VAR_21->TargetID) != 0) {
   VAR_18 = VAR_11->phydisk_sim;
  } else {
   VAR_18 = VAR_11->sim;
  }
  for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
   if (FUNC_9(&VAR_19, ((void*)0), FUNC_0(VAR_18),
       VAR_21->TargetID, VAR_22) != VAR_4) {
    FUNC_5(VAR_11, "unable to create a path to send "
        "XPT_REL_SIMQ");
    break;
   }
   FUNC_13(&VAR_20.ccb_h, VAR_19, 5);
   VAR_20.ccb_h.func_code = VAR_9;
   VAR_20.ccb_h.flags = VAR_2;
   VAR_20.release_flags = VAR_8;
   VAR_20.openings = VAR_21->CurrentDepth - 1;
   FUNC_6((union ccb *)&VAR_20);
   if (VAR_20.ccb_h.status != VAR_4) {
    FUNC_5(VAR_11, "XPT_REL_SIMQ failed\n");
   }
   FUNC_11(VAR_19);
  }
  break;
 }
 case 145:
  FUNC_5(VAR_11, "IR resync update %d completed\n",
      (VAR_14 >> 16) & 0xff);
  break;
 case 138:
 {
  union ccb *VAR_23;
  struct cam_sim *VAR_24;
  struct cam_path *VAR_25;
  PTR_EVENT_DATA_SAS_DEVICE_STATUS_CHANGE VAR_26;

  VAR_26 = (PTR_EVENT_DATA_SAS_DEVICE_STATUS_CHANGE)VAR_13->Data;
  if (VAR_11->phydisk_sim && FUNC_3(VAR_11,
      VAR_26->TargetID) != 0)
   VAR_24 = VAR_11->phydisk_sim;
  else
   VAR_24 = VAR_11->sim;
  switch(VAR_26->ReasonCode) {
  case 137:
   VAR_23 = FUNC_7();
   if (VAR_23 == ((void*)0)) {
    FUNC_5(VAR_11,
        "unable to alloc CCB for rescan\n");
    break;
   }
   if (FUNC_9(&VAR_23->ccb_h.path, ((void*)0),
       FUNC_0(VAR_24), VAR_26->TargetID,
       VAR_3) != VAR_4) {
    FUNC_5(VAR_11,
        "unable to create path for rescan\n");
    FUNC_10(VAR_23);
    break;
   }
   FUNC_12(VAR_23);
   break;
  case 133:
   if (FUNC_9(&VAR_25, ((void*)0), FUNC_0(VAR_24),
       VAR_26->TargetID, VAR_3) !=
       VAR_4) {
    FUNC_5(VAR_11,
        "unable to create path for async event");
    break;
   }
   FUNC_8(VAR_1, VAR_25, ((void*)0));
   FUNC_11(VAR_25);
   break;
  case 136:
  case 135:
  case 134:
   break;
  default:
   FUNC_4(VAR_11, VAR_7,
       "SAS device status change: Bus: 0x%02x TargetID: "
       "0x%02x ReasonCode: 0x%02x\n", VAR_26->Bus,
       VAR_26->TargetID, VAR_26->ReasonCode);
   break;
  }
  break;
 }
 case 131:
 {
  PTR_EVENT_DATA_DISCOVERY_ERROR VAR_27;

  VAR_27 = (PTR_EVENT_DATA_DISCOVERY_ERROR)VAR_13->Data;
  VAR_27->DiscoveryStatus = FUNC_2(VAR_27->DiscoveryStatus);
  FUNC_4(VAR_11, VAR_7,
      "SAS discovery error: Port: 0x%02x Status: 0x%08x\n",
      VAR_27->Port, VAR_27->DiscoveryStatus);
  break;
 }
 case 150:
 case 148:
 case 146:
 case 142:
 case 132:
 case 130:
 case 129:
  break;
 default:
  FUNC_4(VAR_11, VAR_7, "mpt_cam_event: 0x%x\n",
      VAR_13->Event & 0xFF);
  return (0);
 }
 return (1);
}
