
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct preloaded_file {int f_size; } ;
struct multiboot_header {scalar_t__ magic; int flags; scalar_t__ checksum; } ;
typedef int ssize_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,struct preloaded_file**,int) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int,int *,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(char *VAR_8, uint64_t VAR_9,
    struct preloaded_file **VAR_10)
{
 uint32_t *VAR_11;
 int VAR_12, VAR_13;
 caddr_t VAR_14;
 ssize_t VAR_15;
 int VAR_16;
 struct multiboot_header *VAR_17;
 char *VAR_18;





 if (VAR_8 == ((void*)0))
  return (VAR_0);
 if ((VAR_16 = FUNC_4(VAR_8, VAR_5)) == -1)
  return (VAR_7);
 VAR_14 = FUNC_3(VAR_3);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_16);
  return (VAR_1);
 }
 VAR_15 = FUNC_6(VAR_16, VAR_14, VAR_3);
 VAR_11 = (uint32_t *)VAR_14;

 VAR_17 = ((void*)0);
 for (VAR_12 = 0; VAR_12 < (VAR_15 / sizeof(uint32_t)); VAR_12++) {
  if (VAR_11[VAR_12] == VAR_2) {
   VAR_17 = (struct multiboot_header *)&VAR_11[VAR_12];
   break;
  }
 }

 if (VAR_17 == ((void*)0)) {
  VAR_13 = VAR_0;
  goto out;
 }


 if (VAR_17->magic + VAR_17->flags + VAR_17->checksum != 0) {
  FUNC_5(
 "Multiboot checksum failed, magic: 0x%x flags: 0x%x checksum: 0x%x\n",
 VAR_17->magic, VAR_17->flags, VAR_17->checksum);
  VAR_13 = VAR_0;
  goto out;
 }

 if ((VAR_17->flags & ~VAR_4) != 0) {
  FUNC_5("Unsupported multiboot flags found: 0x%x\n",
      VAR_17->flags);
  VAR_13 = VAR_0;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_10, 1);
 if (VAR_13 != 0) {
  FUNC_5(
 "elf32_loadfile_raw failed: %d unable to load multiboot kernel\n",
 VAR_13);
  goto out;
 }






 (*VAR_10)->f_size = FUNC_7((*VAR_10)->f_size, VAR_6);

out:
 FUNC_2(VAR_14);
 FUNC_0(VAR_16);
 return (VAR_13);
}
