
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virtio_device_id {int dummy; } ;
struct vio_device_id {int dummy; } ;
struct ssb_device_id {int dummy; } ;
struct spi_device_id {int dummy; } ;
struct serio_device_id {int dummy; } ;
struct sdio_device_id {int dummy; } ;
struct platform_device_id {int dummy; } ;
struct pcmcia_device_id {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct parisc_device_id {int dummy; } ;
struct of_device_id {int dummy; } ;
struct module {int dummy; } ;
struct mdio_device_id {int dummy; } ;
struct input_device_id {int dummy; } ;
struct ieee1394_device_id {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct hv_vmbus_device_id {int dummy; } ;
struct hid_device_id {int dummy; } ;
struct elf_info {TYPE_2__* sechdrs; TYPE_1__* hdr; } ;
struct eisa_device_id {int dummy; } ;
struct dmi_system_id {int dummy; } ;
struct css_device_id {int dummy; } ;
struct ccw_device_id {int dummy; } ;
struct bcma_device_id {int dummy; } ;
struct ap_device_id {int dummy; } ;
struct acpi_device_id {int dummy; } ;
struct TYPE_7__ {size_t st_shndx; int st_value; int st_size; } ;
struct TYPE_6__ {int sh_type; int sh_offset; } ;
struct TYPE_5__ {size_t e_shnum; } ;
typedef TYPE_3__ Elf_Sym ;


 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (void*,int ,struct module*) ;
 int FUNC_2 (void*,int ,struct module*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (void*,int ,int,char*,int ,struct module*) ;
 int FUNC_4 (void*,int ,struct module*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

void FUNC_7(struct module *VAR_25, struct elf_info *VAR_26,
   Elf_Sym *VAR_27, const char *VAR_28)
{
 void *VAR_29;
 char *VAR_30 = ((void*)0);


 if (!VAR_27->st_shndx || VAR_27->st_shndx >= VAR_26->hdr->e_shnum)
  return;


 if (VAR_26->sechdrs[VAR_27->st_shndx].sh_type & VAR_0) {
  VAR_30 = FUNC_0(1, VAR_27->st_size);
  VAR_29 = VAR_30;
 } else {
  VAR_29 = (void *)VAR_26->hdr
   + VAR_26->sechdrs[VAR_27->st_shndx].sh_offset
   + VAR_27->st_value;
 }

 if (FUNC_6(VAR_28, "__mod_pci_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct pci_device_id), "pci",
    VAR_15, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_usb_device_table"))

  FUNC_4(VAR_29, VAR_27->st_size, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_hid_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct hid_device_id), "hid",
    VAR_8, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_ieee1394_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct ieee1394_device_id), "ieee1394",
    VAR_10, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_ccw_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct ccw_device_id), "ccw",
    VAR_4, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_ap_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct ap_device_id), "ap",
    VAR_2, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_css_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct css_device_id), "css",
    VAR_5, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_serio_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct serio_device_id), "serio",
    VAR_19, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_acpi_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct acpi_device_id), "acpi",
    VAR_1, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_pnp_device_table"))
  FUNC_2(VAR_29, VAR_27->st_size, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_pnp_card_device_table"))
  FUNC_1(VAR_29, VAR_27->st_size, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_pcmcia_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct pcmcia_device_id), "pcmcia",
    VAR_16, VAR_25);
        else if (FUNC_6(VAR_28, "__mod_of_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct of_device_id), "of",
    VAR_13, VAR_25);
        else if (FUNC_6(VAR_28, "__mod_vio_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct vio_device_id), "vio",
    VAR_22, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_input_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct input_device_id), "input",
    VAR_11, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_eisa_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct eisa_device_id), "eisa",
    VAR_7, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_parisc_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct parisc_device_id), "parisc",
    VAR_14, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_sdio_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct sdio_device_id), "sdio",
    VAR_18, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_ssb_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct ssb_device_id), "ssb",
    VAR_21, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_bcma_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct bcma_device_id), "bcma",
    VAR_3, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_virtio_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct virtio_device_id), "virtio",
    VAR_23, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_vmbus_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct hv_vmbus_device_id), "vmbus",
    VAR_24, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_i2c_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct i2c_device_id), "i2c",
    VAR_9, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_spi_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct spi_device_id), "spi",
    VAR_20, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_dmi_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct dmi_system_id), "dmi",
    VAR_6, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_platform_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct platform_device_id), "platform",
    VAR_17, VAR_25);
 else if (FUNC_6(VAR_28, "__mod_mdio_device_table"))
  FUNC_3(VAR_29, VAR_27->st_size,
    sizeof(struct mdio_device_id), "mdio",
    VAR_12, VAR_25);
 FUNC_5(VAR_30);
}
