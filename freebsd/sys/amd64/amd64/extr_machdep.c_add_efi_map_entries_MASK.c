
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint8_t ;
struct efi_md {size_t md_type; int md_pages; int md_attr; int md_phys; int md_virt; } ;
struct efi_map_header {int descriptor_size; int memory_size; } ;


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





 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int,int *,int*) ;
 int VAR_14 ;
 struct efi_md* FUNC_1 (struct efi_md*,int) ;
 size_t FUNC_2 (char const**) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct efi_map_header *VAR_15, vm_paddr_t *VAR_16,
    int *VAR_17)
{
 struct efi_md *VAR_18, *VAR_19;
 const char *VAR_20;
 size_t VAR_21;
 int VAR_22, VAR_23;

 static const char *VAR_24[] = {
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





 VAR_21 = (sizeof(struct efi_map_header) + 0xf) & ~0xf;
 VAR_18 = (struct efi_md *)((uint8_t *)VAR_15 + VAR_21);

 if (VAR_15->descriptor_size == 0)
  return;
 VAR_22 = VAR_15->memory_size / VAR_15->descriptor_size;

 if (VAR_14 & VAR_13)
  FUNC_3("%23s %12s %12s %8s %4s\n",
      "Type", "Physical", "Virtual", "#Pages", "Attr");

 for (VAR_23 = 0, VAR_19 = VAR_18; VAR_23 < VAR_22; VAR_23++,
     VAR_19 = FUNC_1(VAR_19, VAR_15->descriptor_size)) {
  if (VAR_14 & VAR_13) {
   if (VAR_19->md_type < FUNC_2(VAR_24))
    VAR_20 = VAR_24[VAR_19->md_type];
   else
    VAR_20 = "<INVALID>";
   FUNC_3("%23s %012lx %12p %08lx ", VAR_20, VAR_19->md_phys,
       VAR_19->md_virt, VAR_19->md_pages);
   if (VAR_19->md_attr & VAR_5)
    FUNC_3("UC ");
   if (VAR_19->md_attr & VAR_8)
    FUNC_3("WC ");
   if (VAR_19->md_attr & VAR_10)
    FUNC_3("WT ");
   if (VAR_19->md_attr & VAR_7)
    FUNC_3("WB ");
   if (VAR_19->md_attr & VAR_6)
    FUNC_3("UCE ");
   if (VAR_19->md_attr & VAR_9)
    FUNC_3("WP ");
   if (VAR_19->md_attr & VAR_3)
    FUNC_3("RP ");
   if (VAR_19->md_attr & VAR_11)
    FUNC_3("XP ");
   if (VAR_19->md_attr & VAR_1)
    FUNC_3("NV ");
   if (VAR_19->md_attr & VAR_0)
    FUNC_3("MORE_RELIABLE ");
   if (VAR_19->md_attr & VAR_2)
    FUNC_3("RO ");
   if (VAR_19->md_attr & VAR_4)
    FUNC_3("RUNTIME");
   FUNC_3("\n");
  }

  switch (VAR_19->md_type) {
  case 130:
  case 129:
  case 132:
  case 131:
  case 128:



   break;
  default:
   continue;
  }

  if (!FUNC_0(VAR_19->md_phys, (VAR_19->md_pages * VAR_12),
      VAR_16, VAR_17))
   break;
 }
}
