
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct dump_header {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_10__ {char* bc_ver_str; int flash_size; } ;
struct bxe_softc {int pcie_func; char* fw_ver_str; int pcie_bus; int pcie_device; char* mac_addr_str; int dev; int grcdump_done; int grcdump_started; int * grc_dump; TYPE_1__ devinfo; int trigger_grcdump; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_11__ {int reg_val; int reg_id; int reg_access_type; int reg_cmd; } ;
typedef TYPE_2__ bxe_reg_rdw_t ;
struct TYPE_12__ {int mac_addr_str; } ;
typedef TYPE_3__ bxe_perm_mac_addr_t ;
struct TYPE_13__ {int cfg_width; int cfg_val; int cfg_id; int cfg_cmd; } ;
typedef TYPE_4__ bxe_pcicfg_rdw_t ;
struct TYPE_14__ {int pci_func; int grcdump_size; int grcdump_dwords; int * grcdump; } ;
typedef TYPE_5__ bxe_grcdump_t ;
struct TYPE_15__ {int reg_buf_len; int * reg_buf; } ;
typedef TYPE_6__ bxe_get_regs_t ;
typedef int bxe_eeprom_t ;
struct TYPE_16__ {int reg_dump_len; int bus_info; int eeprom_dump_len; int stormfw_version; int mfw_version; int drv_version; int drv_name; } ;
typedef TYPE_7__ bxe_drvinfo_t ;
struct TYPE_17__ {int autoneg; int phy_address; int port; int duplex; int speed; int advertising; int supported; } ;
typedef TYPE_8__ bxe_dev_setting_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;

 char* VAR_1 ;

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
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int ) ;
 int FUNC_3 (struct bxe_softc*,int *) ;
 int FUNC_4 (struct bxe_softc*,TYPE_8__*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int,char*,...) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_14, u_long VAR_15, caddr_t VAR_16, int VAR_17,
        struct thread *VAR_18)
{
    struct bxe_softc *VAR_19;
    int VAR_20 = 0;
    device_t VAR_21;
    bxe_grcdump_t *VAR_22 = ((void*)0);
    int VAR_23;
    bxe_drvinfo_t *VAR_24 = ((void*)0);
    bxe_dev_setting_t *VAR_25;
    bxe_dev_setting_t VAR_26;
    bxe_get_regs_t *VAR_27;
    bxe_reg_rdw_t *VAR_28;
    bxe_pcicfg_rdw_t *VAR_29;
    bxe_perm_mac_addr_t *VAR_30;


    if ((VAR_19 = (struct bxe_softc *)VAR_14->si_drv1) == ((void*)0))
        return VAR_12;

    VAR_21= VAR_19->dev;

    VAR_22 = (bxe_grcdump_t *)VAR_16;

    switch(VAR_15) {

        case 131:
            VAR_22->pci_func = VAR_19->pcie_func;
            VAR_22->grcdump_size =
                (FUNC_5(VAR_19) * sizeof(uint32_t)) +
                     sizeof(struct dump_header);
            break;

        case 132:

            VAR_23 = (FUNC_5(VAR_19) * sizeof(uint32_t)) +
                                sizeof(struct dump_header);
            if ((!VAR_19->trigger_grcdump) || (VAR_22->grcdump == ((void*)0)) ||
                (VAR_22->grcdump_size < VAR_23)) {
                VAR_20 = VAR_11;
                break;
            }

            if((VAR_19->trigger_grcdump) && (!VAR_19->grcdump_done) &&
                (!VAR_19->grcdump_started)) {
                VAR_20 = FUNC_6(VAR_19);
            }

            if((!VAR_20) && (VAR_19->grcdump_done) && (VAR_19->grcdump_started) &&
                (VAR_19->grc_dump != ((void*)0))) {
                VAR_22->grcdump_dwords = VAR_23 >> 2;
                VAR_20 = FUNC_7(VAR_19->grc_dump, VAR_22->grcdump, VAR_23);
                FUNC_8(VAR_19->grc_dump, VAR_13);
                VAR_19->grc_dump = ((void*)0);
                VAR_19->grcdump_started = 0;
                VAR_19->grcdump_done = 0;
            }

            break;

        case 135:
            VAR_24 = (bxe_drvinfo_t *)VAR_16;
            FUNC_11(VAR_24->drv_name, VAR_2, "%s", "bxe");
            FUNC_11(VAR_24->drv_version, VAR_3, "v:%s",
                VAR_1);
            FUNC_11(VAR_24->mfw_version, VAR_4, "%s",
                VAR_19->devinfo.bc_ver_str);
            FUNC_11(VAR_24->stormfw_version, VAR_8,
                "%s", VAR_19->fw_ver_str);
            VAR_24->eeprom_dump_len = VAR_19->devinfo.flash_size;
            VAR_24->reg_dump_len =
                (FUNC_5(VAR_19) * sizeof(uint32_t))
                    + sizeof(struct dump_header);
            FUNC_11(VAR_24->bus_info, VAR_0, "%d:%d:%d",
                VAR_19->pcie_bus, VAR_19->pcie_device, VAR_19->pcie_func);
            break;

        case 136:
            VAR_25 = (bxe_dev_setting_t *)VAR_16;
            FUNC_4(VAR_19, &VAR_26);
            VAR_25->supported = VAR_26.supported;
            VAR_25->advertising = VAR_26.advertising;
            VAR_25->speed = VAR_26.speed;
            VAR_25->duplex = VAR_26.duplex;
            VAR_25->port = VAR_26.port;
            VAR_25->phy_address = VAR_26.phy_address;
            VAR_25->autoneg = VAR_26.autoneg;

            break;

        case 133:

            VAR_27 = (bxe_get_regs_t *)VAR_16;
            VAR_23 = VAR_27->reg_buf_len;

            if((!VAR_19->grcdump_done) && (!VAR_19->grcdump_started)) {
                FUNC_6(VAR_19);
            }
            if((VAR_19->grcdump_done) && (VAR_19->grcdump_started) &&
                (VAR_19->grc_dump != ((void*)0))) {
                VAR_20 = FUNC_7(VAR_19->grc_dump, VAR_27->reg_buf, VAR_23);
                FUNC_8(VAR_19->grc_dump, VAR_13);
                VAR_19->grc_dump = ((void*)0);
                VAR_19->grcdump_started = 0;
                VAR_19->grcdump_done = 0;
            }

            break;

        case 128:
            VAR_28 = (bxe_reg_rdw_t *)VAR_16;
            if((VAR_28->reg_cmd == VAR_6) &&
                (VAR_28->reg_access_type == VAR_7))
                VAR_28->reg_val = FUNC_1(VAR_19, VAR_28->reg_id);

            if((VAR_28->reg_cmd == VAR_10) &&
                (VAR_28->reg_access_type == VAR_7))
                FUNC_2(VAR_19, VAR_28->reg_id, VAR_28->reg_val);

            break;

        case 129:
            VAR_29 = (bxe_pcicfg_rdw_t *)VAR_16;
            if(VAR_29->cfg_cmd == VAR_5) {

                VAR_29->cfg_val = FUNC_9(VAR_19->dev, VAR_29->cfg_id,
                                         VAR_29->cfg_width);

            } else if(VAR_29->cfg_cmd == VAR_9) {
                FUNC_10(VAR_19->dev, VAR_29->cfg_id, VAR_29->cfg_val,
                            VAR_29->cfg_width);
            } else {
                FUNC_0(VAR_19, "BXE_RDW_PCICFG ioctl wrong cmd passed\n");
            }
            break;

        case 130:
            VAR_30 = (bxe_perm_mac_addr_t *)VAR_16;
            FUNC_11(VAR_30->mac_addr_str, sizeof(VAR_19->mac_addr_str), "%s",
                VAR_19->mac_addr_str);
            break;

        case 134:
            VAR_20 = FUNC_3(VAR_19, (bxe_eeprom_t *)VAR_16);
            break;


        default:
            break;
    }

    return (VAR_20);
}
