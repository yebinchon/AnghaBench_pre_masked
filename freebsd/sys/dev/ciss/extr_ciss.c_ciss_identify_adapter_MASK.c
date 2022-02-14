
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ciss_softc {TYPE_2__* ciss_id; TYPE_1__* ciss_cfg; int ciss_flags; } ;
struct ciss_request {int dummy; } ;
struct TYPE_4__ {int controller_flags; int configured_logical_drives; char* running_firmware_revision; char* scsi_chip_count; int uiYetMoreControllerFlags; int PowerUPNvramFlags; } ;
struct TYPE_3__ {char* max_logical_supported; char* max_physical_supported; char* signature; char* valence; char* command_physlimit; char* interrupt_coalesce_delay; char* interrupt_coalesce_count; char* max_outstanding_commands; char* server_name; char* heartbeat; char* max_physical_per_logical; int bus_types; int active_method; int supported_methods; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request**,int ,void**,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct ciss_softc*,char*,...) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int*,int *) ;
 int FUNC_5 (struct ciss_request*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_12)
{
    struct ciss_request *VAR_13;
    int VAR_14, VAR_15;

    FUNC_6(1);

    VAR_13 = ((void*)0);




    if ((VAR_14 = FUNC_0(VAR_12, &VAR_13, VAR_0,
           (void **)&VAR_12->ciss_id,
           sizeof(*VAR_12->ciss_id))) != 0)
 goto out;




    if ((VAR_14 = FUNC_5(VAR_13, 60 * 1000)) != 0) {
 FUNC_2(VAR_12, "error sending BMIC ID_CTLR command (%d)\n", VAR_14);
 goto out;
    }




    FUNC_4(VAR_13, &VAR_15, ((void*)0));
    switch(VAR_15) {
    case 128:
 break;
    case 129:
    case 130:
 FUNC_2(VAR_12, "data over/underrun reading adapter information\n");
    default:
 FUNC_2(VAR_12, "error reading adapter information (%s)\n",
      FUNC_1(VAR_15));
 VAR_14 = VAR_7;
 goto out;
    }


    if (!(VAR_12->ciss_id->controller_flags & VAR_6)) {
 FUNC_2(VAR_12, "adapter does not support BIG_MAP\n");
 VAR_14 = VAR_8;
 goto out;
    }







    VAR_12->ciss_flags |= VAR_1;







    if (VAR_12->ciss_cfg->max_logical_supported == 0)
        VAR_12->ciss_cfg->max_logical_supported = VAR_4;
    if (VAR_12->ciss_cfg->max_physical_supported == 0)
 VAR_12->ciss_cfg->max_physical_supported = VAR_5;

    if (VAR_11) {
 FUNC_2(VAR_12, "  %d logical drive%s configured\n",
      VAR_12->ciss_id->configured_logical_drives,
      (VAR_12->ciss_id->configured_logical_drives == 1) ? "" : "s");
 FUNC_2(VAR_12, "  firmware %4.4s\n", VAR_12->ciss_id->running_firmware_revision);
 FUNC_2(VAR_12, "  %d SCSI channels\n", VAR_12->ciss_id->scsi_chip_count);

 FUNC_2(VAR_12, "  signature '%.4s'\n", VAR_12->ciss_cfg->signature);
 FUNC_2(VAR_12, "  valence %d\n", VAR_12->ciss_cfg->valence);
 FUNC_2(VAR_12, "  supported I/O methods 0x%b\n",
      VAR_12->ciss_cfg->supported_methods,
      "\20\1READY\2simple\3performant\4MEMQ\n");
 FUNC_2(VAR_12, "  active I/O method 0x%b\n",
      VAR_12->ciss_cfg->active_method, "\20\2simple\3performant\4MEMQ\n");
 FUNC_2(VAR_12, "  4G page base 0x%08x\n",
      VAR_12->ciss_cfg->command_physlimit);
 FUNC_2(VAR_12, "  interrupt coalesce delay %dus\n",
      VAR_12->ciss_cfg->interrupt_coalesce_delay);
 FUNC_2(VAR_12, "  interrupt coalesce count %d\n",
      VAR_12->ciss_cfg->interrupt_coalesce_count);
 FUNC_2(VAR_12, "  max outstanding commands %d\n",
      VAR_12->ciss_cfg->max_outstanding_commands);
 FUNC_2(VAR_12, "  bus types 0x%b\n", VAR_12->ciss_cfg->bus_types,
      "\20\1ultra2\2ultra3\10fibre1\11fibre2\n");
 FUNC_2(VAR_12, "  server name '%.16s'\n", VAR_12->ciss_cfg->server_name);
 FUNC_2(VAR_12, "  heartbeat 0x%x\n", VAR_12->ciss_cfg->heartbeat);
     FUNC_2(VAR_12, "  max logical logical volumes: %d\n", VAR_12->ciss_cfg->max_logical_supported);
     FUNC_2(VAR_12, "  max physical disks supported: %d\n", VAR_12->ciss_cfg->max_physical_supported);
     FUNC_2(VAR_12, "  max physical disks per logical volume: %d\n", VAR_12->ciss_cfg->max_physical_per_logical);
 FUNC_2(VAR_12, "  JBOD Support is %s\n", (VAR_12->ciss_id->uiYetMoreControllerFlags & VAR_10) ?
   "Available" : "Unavailable");
 FUNC_2(VAR_12, "  JBOD Mode is %s\n", (VAR_12->ciss_id->PowerUPNvramFlags & VAR_9) ?
   "Enabled" : "Disabled");
    }

out:
    if (VAR_14) {
 if (VAR_12->ciss_id != ((void*)0)) {
     FUNC_7(VAR_12->ciss_id, VAR_3);
     VAR_12->ciss_id = ((void*)0);
 }
    }
    if (VAR_13 != ((void*)0))
 FUNC_3(VAR_13);
    return(VAR_14);
}
