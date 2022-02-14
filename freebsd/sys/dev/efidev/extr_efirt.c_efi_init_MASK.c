
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ th_sig; } ;
struct efi_systbl {scalar_t__ st_cfgtbl; scalar_t__ st_rt; TYPE_1__ st_hdr; } ;
struct efi_rt {scalar_t__ rt_gettime; } ;
struct efi_md {int dummy; } ;
struct efi_map_header {int descriptor_size; int memory_size; } ;
struct efi_cfgtbl {int dummy; } ;
typedef int * caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int*) ;
 scalar_t__ VAR_7 ;
 struct efi_cfgtbl* VAR_8 ;
 int FUNC_2 (struct efi_md*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct efi_md*,int,int,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (uintptr_t) ;
 struct efi_rt* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct efi_systbl* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int * FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (char*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_10(void)
{
 struct efi_map_header *VAR_16;
 struct efi_md *VAR_17;
 struct efi_rt *VAR_18;
 caddr_t VAR_19;
 size_t VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = 0;
 FUNC_1("efi.rt.disabled", &VAR_22);
 if (VAR_22 == 1)
  return (0);
 FUNC_6(&VAR_9, "efi", ((void*)0), VAR_5);

 if (VAR_14 == 0) {
  if (VAR_7)
   FUNC_9("EFI systbl not available\n");
  return (0);
 }

 VAR_13 = (struct efi_systbl *)FUNC_5(VAR_14);
 if (VAR_13 == ((void*)0) || VAR_13->st_hdr.th_sig != VAR_0) {
  VAR_13 = ((void*)0);
  if (VAR_7)
   FUNC_9("EFI systbl signature invalid\n");
  return (0);
 }
 VAR_8 = (VAR_13->st_cfgtbl == 0) ? ((void*)0) :
     (struct efi_cfgtbl *)VAR_13->st_cfgtbl;
 if (VAR_8 == ((void*)0)) {
  if (VAR_7)
   FUNC_9("EFI config table is not present\n");
 }

 VAR_19 = FUNC_7("elf kernel");
 if (VAR_19 == ((void*)0))
  VAR_19 = FUNC_7("elf64 kernel");
 VAR_16 = (struct efi_map_header *)FUNC_8(VAR_19,
     VAR_4 | VAR_3);
 if (VAR_16 == ((void*)0)) {
  if (VAR_7)
   FUNC_9("EFI map is not present\n");
  return (0);
 }
 VAR_20 = (sizeof(struct efi_map_header) + 0xf) & ~0xf;
 VAR_17 = (struct efi_md *)((uint8_t *)VAR_16 + VAR_20);
 if (VAR_16->descriptor_size == 0)
  return (VAR_1);

 VAR_21 = VAR_16->memory_size / VAR_16->descriptor_size;
 if (!FUNC_2(VAR_17, VAR_21, VAR_16->descriptor_size)) {
  if (VAR_7)
   FUNC_9("EFI cannot create runtime map\n");
  return (VAR_1);
 }

 VAR_10 = (VAR_13->st_rt == 0) ? ((void*)0) :
     (struct efi_rt *)VAR_13->st_rt;
 if (VAR_10 == ((void*)0)) {
  if (VAR_7)
   FUNC_9("EFI runtime services table is not present\n");
  FUNC_3();
  return (VAR_2);
 }
 VAR_18 = (struct efi_rt *)FUNC_5((uintptr_t)VAR_10);
 if (VAR_18 == ((void*)0) || !FUNC_4(VAR_17, VAR_21, VAR_16->descriptor_size,
     (vm_offset_t)VAR_18->rt_gettime)) {
  if (VAR_7)
   FUNC_9(
    "EFI runtime services table has an invalid pointer\n");
  VAR_10 = ((void*)0);
  FUNC_3();
  return (VAR_2);
 }





 VAR_12 = FUNC_0(VAR_15,
     VAR_11, ((void*)0), VAR_6 - 1);

 return (0);
}
