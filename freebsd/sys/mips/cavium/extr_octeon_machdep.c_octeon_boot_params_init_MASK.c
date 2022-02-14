
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ register_t ;
struct TYPE_4__ {int desc_version; } ;
typedef TYPE_1__ octeon_boot_descriptor_t ;
typedef int cvmx_bootinfo_t ;
struct TYPE_5__ {scalar_t__ led_display_base_addr; scalar_t__ board_type; int board_rev_major; scalar_t__ phy_mem_desc_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int * FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(register_t VAR_2)
{
 octeon_boot_descriptor_t *VAR_3;
 cvmx_bootinfo_t *VAR_4;

 if (VAR_2 == 0 || VAR_2 >= VAR_1) {
  FUNC_2("app descriptor passed at invalid address %#jx\n",
      (uintmax_t)VAR_2);
  FUNC_7();
 }

 VAR_3 = (octeon_boot_descriptor_t *)(intptr_t)VAR_2;
 if (VAR_3->desc_version < 6) {
  FUNC_2("Your boot code is too old to be supported.\n");
  FUNC_7();
 }
 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_2("Could not parse boot descriptor.\n");
  FUNC_7();
 }

 if (FUNC_3()->led_display_base_addr != 0) {




  if (FUNC_3()->board_type == VAR_0 &&
      FUNC_3()->board_rev_major == 1)
   FUNC_4("FBSD");
  else
   FUNC_4("FreeBSD!");
 }

 if (FUNC_3()->phy_mem_desc_addr == (uint64_t)0) {
  FUNC_2("Your boot loader did not supply a memory descriptor.\n");
  FUNC_7();
 }
 FUNC_1(FUNC_3()->phy_mem_desc_addr);

 FUNC_5();

 FUNC_0();
}
