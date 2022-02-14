
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_md {size_t md_type; int md_attr; int md_pages; int md_virt; int md_phys; } ;


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
 int VAR_11 ;
 size_t FUNC_0 (char const**) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct efi_md *VAR_12)
{
 const char *VAR_13;
 static const char *VAR_14[] = {
  "Reserved",
  "LoaderCode",
  "LoaderData",
  "BootServicesCode",
  "BootServicesData",
  "RuntimeServicesCode",
  "RuntimeServicesData",
  "ConventionalMemory",
  "UnusableMemory",
  "ACPIReclaimMemory",
  "ACPIMemoryNVS",
  "MemoryMappedIO",
  "MemoryMappedIOPortSpace",
  "PalCode",
  "PersistentMemory"
 };

 if (VAR_12->md_type < FUNC_0(VAR_14))
  VAR_13 = VAR_14[VAR_12->md_type];
 else
  VAR_13 = "<INVALID>";
 FUNC_1("%23s %012lx %12p %08lx ", VAR_13, VAR_12->md_phys,
     VAR_12->md_virt, VAR_12->md_pages);
 if (VAR_12->md_attr & VAR_5)
  FUNC_1("UC ");
 if (VAR_12->md_attr & VAR_8)
  FUNC_1("WC ");
 if (VAR_12->md_attr & VAR_10)
  FUNC_1("WT ");
 if (VAR_12->md_attr & VAR_7)
  FUNC_1("WB ");
 if (VAR_12->md_attr & VAR_6)
  FUNC_1("UCE ");
 if (VAR_12->md_attr & VAR_9)
  FUNC_1("WP ");
 if (VAR_12->md_attr & VAR_3)
  FUNC_1("RP ");
 if (VAR_12->md_attr & VAR_11)
  FUNC_1("XP ");
 if (VAR_12->md_attr & VAR_1)
  FUNC_1("NV ");
 if (VAR_12->md_attr & VAR_0)
  FUNC_1("MORE_RELIABLE ");
 if (VAR_12->md_attr & VAR_2)
  FUNC_1("RO ");
 if (VAR_12->md_attr & VAR_4)
  FUNC_1("RUNTIME");
 FUNC_1("\n");
}
