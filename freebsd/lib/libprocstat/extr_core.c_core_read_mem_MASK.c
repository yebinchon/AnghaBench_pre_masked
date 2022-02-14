
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
struct TYPE_5__ {int e_phnum; } ;
struct procstat_core {scalar_t__ pc_magic; int pc_elf; TYPE_1__ pc_ehdr; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {scalar_t__ p_type; scalar_t__ p_vaddr; scalar_t__ p_memsz; scalar_t__ p_offset; } ;
typedef TYPE_2__ GElf_Phdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct procstat_core*,scalar_t__) ;
 int FUNC_2 (struct procstat_core*,void*,size_t) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int ,int,TYPE_2__*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static ssize_t
FUNC_6(struct procstat_core *VAR_2, void *VAR_3, size_t VAR_4,
    vm_offset_t VAR_5, bool VAR_6)
{
 GElf_Phdr VAR_7;
 off_t VAR_8;
 int VAR_9;

 FUNC_0(VAR_2->pc_magic == VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_2->pc_ehdr.e_phnum; VAR_9++) {
  if (FUNC_4(VAR_2->pc_elf, VAR_9, &VAR_7) != &VAR_7) {
   FUNC_5("gelf_getphdr: %s", FUNC_3(-1));
   return (-1);
  }
  if (VAR_7.p_type != VAR_1)
   continue;
  if (VAR_5 < VAR_7.p_vaddr || VAR_5 > VAR_7.p_vaddr + VAR_7.p_memsz)
   continue;
  VAR_8 = VAR_7.p_offset + (VAR_5 - VAR_7.p_vaddr);
  if ((VAR_7.p_vaddr + VAR_7.p_memsz) - VAR_5 < VAR_4) {
   if (VAR_6) {
    FUNC_5("format error: "
        "attempt to read out of segment");
    return (-1);
   }
   VAR_4 = (VAR_7.p_vaddr + VAR_7.p_memsz) - VAR_5;
  }
  if (!FUNC_1(VAR_2, VAR_8))
   return (-1);
  if (!FUNC_2(VAR_2, VAR_3, VAR_4))
   return (-1);
  return (VAR_4);
 }
 FUNC_5("format error: address %ju not found", (uintmax_t)VAR_5);
 return (-1);
}
