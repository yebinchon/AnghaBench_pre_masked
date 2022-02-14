
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct efi_md {int dummy; } ;
struct efi_map_header {int descriptor_size; int memory_size; } ;
typedef int (* efi_map_entry_cb ) (struct efi_md*) ;


 struct efi_md* FUNC_0 (struct efi_md*,int) ;

__attribute__((used)) static void
FUNC_1(struct efi_map_header *VAR_0, efi_map_entry_cb VAR_1)
{
 struct efi_md *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5, VAR_6;





 VAR_4 = (sizeof(struct efi_map_header) + 0xf) & ~0xf;
 VAR_2 = (struct efi_md *)((uint8_t *)VAR_0 + VAR_4);

 if (VAR_0->descriptor_size == 0)
  return;
 VAR_5 = VAR_0->memory_size / VAR_0->descriptor_size;

 for (VAR_6 = 0, VAR_3 = VAR_2; VAR_6 < VAR_5; VAR_6++,
     VAR_3 = FUNC_0(VAR_3, VAR_0->descriptor_size)) {
  VAR_1(VAR_3);
 }
}
