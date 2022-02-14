
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char const* dlpi_name; unsigned int dlpi_phnum; int dlpi_tls_modid; int dlpi_adds; TYPE_2__ const* dlpi_phdr; void* dlpi_tls_data; int dlpi_addr; } ;
struct TYPE_6__ {int a_val; scalar_t__ a_ptr; } ;
struct TYPE_8__ {int a_type; TYPE_1__ a_un; } ;
struct TYPE_7__ {scalar_t__ p_type; scalar_t__ p_vaddr; } ;
typedef TYPE_2__ Elf_Phdr ;
typedef unsigned int Elf_Half ;
typedef TYPE_3__ Elf_Auxinfo ;
typedef int Elf_Addr ;




 int VAR_0 ;


 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void
FUNC_0(void)
{
 Elf_Auxinfo *VAR_4;
 unsigned int VAR_5;

 for (VAR_4 = VAR_2; VAR_4->a_type != VAR_0; VAR_4++) {
  switch (VAR_4->a_type) {
  case 131:
   VAR_3.dlpi_addr = (Elf_Addr)VAR_4->a_un.a_ptr;
   break;
  case 130:
   VAR_3.dlpi_name = (const char *)VAR_4->a_un.a_ptr;
   break;
  case 129:
   VAR_3.dlpi_phdr =
       (const Elf_Phdr *)VAR_4->a_un.a_ptr;
   break;
  case 128:
   VAR_3.dlpi_phnum = (Elf_Half)VAR_4->a_un.a_val;
   break;
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_3.dlpi_phnum; VAR_5++) {
  if (VAR_3.dlpi_phdr[VAR_5].p_type == VAR_1) {
   VAR_3.dlpi_tls_modid = 1;
   VAR_3.dlpi_tls_data =
       (void*)VAR_3.dlpi_phdr[VAR_5].p_vaddr;
  }
 }
 VAR_3.dlpi_adds = 1;
}
