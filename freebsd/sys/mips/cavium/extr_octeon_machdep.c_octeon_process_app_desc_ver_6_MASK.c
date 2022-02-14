
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_7__ {int cvmx_desc_vaddr; } ;
typedef TYPE_1__ octeon_boot_descriptor_t ;
struct TYPE_8__ {int major_version; int board_serial_number; int led_display_base_addr; int core_mask; int compact_flash_attribute_base_addr; int compact_flash_common_base_addr; int mac_addr_count; int mac_addr_base; int eclock_hz; int board_rev_minor; int board_rev_major; int board_type; int phy_mem_desc_addr; scalar_t__ minor_version; } ;
typedef TYPE_2__ cvmx_bootinfo_t ;
struct TYPE_9__ {int board_serial_number; int led_display_base_addr; int core_mask; int compact_flash_attribute_base_addr; int compact_flash_common_base_addr; int mac_addr_count; int mac_addr_base; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static cvmx_bootinfo_t *
FUNC_5(octeon_boot_descriptor_t *VAR_0)
{
 cvmx_bootinfo_t *VAR_1;


 if (VAR_0->cvmx_desc_vaddr == 0 ||
     VAR_0->cvmx_desc_vaddr == 0xfffffffful) {
             FUNC_1("Bad octeon_bootinfo %#jx\n",
      (uintmax_t)VAR_0->cvmx_desc_vaddr);
  return (((void*)0));
 }

     VAR_1 = FUNC_0(VAR_0->cvmx_desc_vaddr);
        if (VAR_1->major_version != 1) {
             FUNC_1("Incompatible CVMX descriptor from bootloader: %d.%d %p\n",
      (int) VAR_1->major_version,
      (int) VAR_1->minor_version, VAR_1);
  return (((void*)0));
 }

 FUNC_3(VAR_1->phy_mem_desc_addr,
     VAR_1->board_type,
     VAR_1->board_rev_major,
     VAR_1->board_rev_minor,
     VAR_1->eclock_hz);
 FUNC_4(FUNC_2()->mac_addr_base,
        VAR_1->mac_addr_base, 6);
 FUNC_2()->mac_addr_count = VAR_1->mac_addr_count;
 FUNC_2()->compact_flash_common_base_addr =
  VAR_1->compact_flash_common_base_addr;
 FUNC_2()->compact_flash_attribute_base_addr =
  VAR_1->compact_flash_attribute_base_addr;
 FUNC_2()->core_mask = VAR_1->core_mask;
 FUNC_2()->led_display_base_addr =
  VAR_1->led_display_base_addr;
 FUNC_4(FUNC_2()->board_serial_number,
        VAR_1->board_serial_number,
        sizeof FUNC_2()->board_serial_number);
 return (VAR_1);
}
