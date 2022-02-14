
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_13, char *VAR_14[])
{
 int VAR_15 = FUNC_0();

 FUNC_1("bios_basemem: 0x%llx\n", (unsigned long long)VAR_8);
 FUNC_1("bios_extmem: 0x%llx\n", (unsigned long long)VAR_9);
 FUNC_1("memtop: 0x%llx\n", (unsigned long long)VAR_12);
 FUNC_1("high_heap_base: 0x%llx\n", (unsigned long long)VAR_10);
 FUNC_1("high_heap_size: 0x%llx\n", (unsigned long long)VAR_11);
 FUNC_1("bios_quirks: 0x%02x", VAR_15);
 if (VAR_15 & VAR_0)
  FUNC_1(" BQ_DISTRUST_E820_EXTMEM");
 FUNC_1("\n");
 FUNC_1("b_bios_probed: 0x%02x", (int)VAR_7);
 if (VAR_7 & VAR_2)
  FUNC_1(" B_BASEMEM_E820");
 if (VAR_7 & VAR_1)
  FUNC_1(" B_BASEMEM_12");
 if (VAR_7 & VAR_5)
  FUNC_1(" B_EXTMEM_E820");
 if (VAR_7 & VAR_4)
  FUNC_1(" B_EXTMEM_E801");
 if (VAR_7 & VAR_3)
  FUNC_1(" B_EXTMEM_8800");
 FUNC_1("\n");

 return (VAR_6);
}
