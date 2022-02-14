
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


union ciss_statrequest {size_t cs_item; int cs_qstat; } ;
typedef int u_long ;
typedef int u_int8_t ;
struct thread {int dummy; } ;
struct ciss_softc {int ciss_mtx; TYPE_2__* ciss_id; TYPE_1__* ciss_cfg; int ciss_dev; int * ciss_qstat; } ;
struct ciss_qstat {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int int32_t ;
struct TYPE_10__ {int board_id; int dev_fn; int bus; } ;
typedef TYPE_3__ cciss_pci_info_struct ;
struct TYPE_11__ {int count; int delay; } ;
typedef TYPE_4__ cciss_coalint_struct ;
typedef scalar_t__ caddr_t ;
struct TYPE_13__ {int * buf; int buf_size; int error_info; int Request; int LUN_info; } ;
struct TYPE_12__ {int buf; int buf_size; int error_info; int Request; int LUN_info; } ;
struct TYPE_9__ {int * running_firmware_revision; } ;
struct TYPE_8__ {int bus_types; int heartbeat; int * server_name; int interrupt_coalesce_count; int interrupt_coalesce_delay; } ;
typedef int NodeName_type ;
typedef TYPE_5__ IOCTL_Command_struct32 ;
typedef TYPE_6__ IOCTL_Command_struct ;
typedef int Heartbeat_type ;
typedef int FirmwareVer_type ;
typedef int DriverVer_type ;
typedef int BusTypes_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct ciss_softc*) ;
 int FUNC_2 (struct ciss_softc*,TYPE_6__*) ;
 int FUNC_3 (int,char*,int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_4, u_long VAR_5, caddr_t VAR_6, int32_t VAR_7, struct thread *VAR_8)
{
    struct ciss_softc *VAR_9;
    IOCTL_Command_struct *VAR_10 = (IOCTL_Command_struct *)VAR_6;

    IOCTL_Command_struct32 *VAR_11 = (IOCTL_Command_struct32 *)VAR_6;
    IOCTL_Command_struct VAR_12;

    int VAR_13;

    FUNC_4(1);

    VAR_9 = (struct ciss_softc *)VAR_4->si_drv1;
    VAR_13 = 0;
    FUNC_5(&VAR_9->ciss_mtx);

    switch(VAR_5) {
    case 135:
    {
 union ciss_statrequest *VAR_14 = (union ciss_statrequest *)VAR_6;

 switch (VAR_14->cs_item) {
 case 129:
 case 128:
     FUNC_0(&VAR_9->ciss_qstat[VAR_14->cs_item], &VAR_14->cs_qstat,
  sizeof(struct ciss_qstat));
     break;
 default:
     VAR_13 = VAR_3;
     break;
 }

 break;
    }

    case 136:
    {
 cciss_pci_info_struct *VAR_15 = (cciss_pci_info_struct *)VAR_6;

 VAR_15->bus = FUNC_7(VAR_9->ciss_dev);
 VAR_15->dev_fn = FUNC_8(VAR_9->ciss_dev);
        VAR_15->board_id = (FUNC_10(VAR_9->ciss_dev) << 16) |
                FUNC_9(VAR_9->ciss_dev);

 break;
    }

    case 138:
    {
 cciss_coalint_struct *VAR_16 = (cciss_coalint_struct *)VAR_6;

 VAR_16->delay = VAR_9->ciss_cfg->interrupt_coalesce_delay;
 VAR_16->count = VAR_9->ciss_cfg->interrupt_coalesce_count;

 break;
    }

    case 131:
    {
 cciss_coalint_struct *VAR_17 = (cciss_coalint_struct *)VAR_6;

 if ((VAR_17->delay == 0) && (VAR_17->count == 0)) {
     VAR_13 = VAR_1;
     break;
 }





 VAR_9->ciss_cfg->interrupt_coalesce_delay = VAR_17->delay;
 VAR_9->ciss_cfg->interrupt_coalesce_count = VAR_17->count;

 if (FUNC_1(VAR_9))
     VAR_13 = VAR_2;


 break;
    }

    case 137:
 FUNC_0(VAR_9->ciss_cfg->server_name, (NodeName_type *)VAR_6,
       sizeof(NodeName_type));
 break;

    case 130:
 FUNC_0((NodeName_type *)VAR_6, VAR_9->ciss_cfg->server_name,
       sizeof(NodeName_type));
 if (FUNC_1(VAR_9))
     VAR_13 = VAR_2;
 break;

    case 139:
 *(Heartbeat_type *)VAR_6 = VAR_9->ciss_cfg->heartbeat;
 break;

    case 142:
 *(BusTypes_type *)VAR_6 = VAR_9->ciss_cfg->bus_types;
 break;

    case 140:
 FUNC_0(VAR_9->ciss_id->running_firmware_revision, (FirmwareVer_type *)VAR_6,
       sizeof(FirmwareVer_type));
 break;

    case 141:
 *(DriverVer_type *)VAR_6 = VAR_0;
 break;

    case 132:







 break;


    case 133:
 VAR_12.LUN_info = VAR_11->LUN_info;
 VAR_12.Request = VAR_11->Request;
 VAR_12.error_info = VAR_11->error_info;
 VAR_12.buf_size = VAR_11->buf_size;
 VAR_12.buf = (u_int8_t *)(uintptr_t)VAR_11->buf;
 VAR_10 = &VAR_12;



    case 134:
 VAR_13 = FUNC_2(VAR_9, VAR_10);
 break;

    default:
 FUNC_3(0, "unknown ioctl 0x%lx", VAR_5);

 FUNC_3(1, "CCISS_GETPCIINFO:   0x%lx", 136);
 FUNC_3(1, "CCISS_GETINTINFO:   0x%lx", 138);
 FUNC_3(1, "CCISS_SETINTINFO:   0x%lx", 131);
 FUNC_3(1, "CCISS_GETNODENAME:  0x%lx", 137);
 FUNC_3(1, "CCISS_SETNODENAME:  0x%lx", 130);
 FUNC_3(1, "CCISS_GETHEARTBEAT: 0x%lx", 139);
 FUNC_3(1, "CCISS_GETBUSTYPES:  0x%lx", 142);
 FUNC_3(1, "CCISS_GETFIRMVER:   0x%lx", 140);
 FUNC_3(1, "CCISS_GETDRIVERVER: 0x%lx", 141);
 FUNC_3(1, "CCISS_REVALIDVOLS:  0x%lx", 132);
 FUNC_3(1, "CCISS_PASSTHRU:     0x%lx", 134);

 VAR_13 = VAR_3;
 break;
    }

    FUNC_6(&VAR_9->ciss_mtx);
    return(VAR_13);
}
