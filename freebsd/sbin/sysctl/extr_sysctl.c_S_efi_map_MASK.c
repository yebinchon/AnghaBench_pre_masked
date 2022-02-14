
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;
struct efi_md {size_t md_type; int md_attr; scalar_t__ md_pages; int md_virt; scalar_t__ md_phys; } ;
struct efi_map_header {int descriptor_size; size_t memory_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct efi_md* FUNC_0 (struct efi_md*,int) ;
 size_t FUNC_1 (char const* const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(size_t VAR_9, void *VAR_10)
{
 struct efi_map_header *VAR_11;
 struct efi_md *VAR_12;
 const char *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16;

 static const char * const VAR_17[] = {
  [133] = "Reserved",
  [139] = "LoaderCode",
  [138] = "LoaderData",
  [141] = "BootServicesCode",
  [140] = "BootServicesData",
  [129] = "RuntimeServicesCode",
  [128] = "RuntimeServicesData",
  [136] = "ConventionalMemory",
  [142] = "UnusableMemory",
  [130] = "ACPIReclaimMemory",
  [137] = "ACPIMemoryNVS",
  [135] = "MemoryMappedIO",
  [134] = "MemoryMappedIOPortSpace",
  [132] = "PalCode",
  [131] = "PersistentMemory",
 };





 if (VAR_9 < sizeof(*VAR_11)) {
  FUNC_3("S_efi_map length less than header");
  return (1);
 }
 VAR_11 = VAR_10;
 VAR_14 = (sizeof(struct efi_map_header) + 0xf) & ~0xf;
 VAR_12 = (struct efi_md *)((uint8_t *)VAR_11 + VAR_14);

 if (VAR_11->descriptor_size == 0)
  return (0);
 if (VAR_9 != VAR_14 + VAR_11->memory_size) {
  FUNC_3("S_efi_map length mismatch %zu vs %zu", VAR_9, VAR_14 +
      VAR_11->memory_size);
  return (1);
 }
 VAR_15 = VAR_11->memory_size / VAR_11->descriptor_size;

 FUNC_2("\n%23s %12s %12s %8s %4s",
     "Type", "Physical", "Virtual", "#Pages", "Attr");

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++,
     VAR_12 = FUNC_0(VAR_12, VAR_11->descriptor_size)) {
  VAR_13 = ((void*)0);
  if (VAR_12->md_type < FUNC_1(VAR_17))
   VAR_13 = VAR_17[VAR_12->md_type];
  if (VAR_13 == ((void*)0))
   VAR_13 = "<INVALID>";
  FUNC_2("\n%23s %012jx %12p %08jx ", VAR_13,
      (uintmax_t)VAR_12->md_phys, VAR_12->md_virt,
      (uintmax_t)VAR_12->md_pages);
  if (VAR_12->md_attr & VAR_2)
   FUNC_2("UC ");
  if (VAR_12->md_attr & VAR_5)
   FUNC_2("WC ");
  if (VAR_12->md_attr & VAR_7)
   FUNC_2("WT ");
  if (VAR_12->md_attr & VAR_4)
   FUNC_2("WB ");
  if (VAR_12->md_attr & VAR_3)
   FUNC_2("UCE ");
  if (VAR_12->md_attr & VAR_6)
   FUNC_2("WP ");
  if (VAR_12->md_attr & VAR_0)
   FUNC_2("RP ");
  if (VAR_12->md_attr & VAR_8)
   FUNC_2("XP ");
  if (VAR_12->md_attr & VAR_1)
   FUNC_2("RUNTIME");
 }
 return (0);
}
