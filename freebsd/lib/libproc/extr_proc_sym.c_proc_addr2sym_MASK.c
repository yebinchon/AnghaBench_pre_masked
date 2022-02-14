
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct proc_handle {int dummy; } ;
struct TYPE_7__ {uintptr_t pr_mapname; uintptr_t pr_vaddr; uintptr_t pr_offset; } ;
struct map_info {TYPE_2__ map; struct file_info* file; } ;
struct TYPE_6__ {scalar_t__ e_type; } ;
struct file_info {int symtab; int elf; int dynsymtab; TYPE_1__ ehdr; } ;
struct TYPE_8__ {uintptr_t st_value; } ;
typedef TYPE_3__ GElf_Sym ;


 int FUNC_0 (char*,uintptr_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct map_info* FUNC_1 (struct proc_handle*,uintptr_t) ;
 int FUNC_2 (char const*,char*,size_t) ;
 int FUNC_3 (int ,int *,uintptr_t,char const**,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct map_info*) ;

int
FUNC_5(struct proc_handle *VAR_2, uintptr_t VAR_3, char *VAR_4,
    size_t VAR_5, GElf_Sym *VAR_6)
{
 struct file_info *VAR_7;
 struct map_info *VAR_8;
 const char *VAR_9;
 uintptr_t VAR_10;
 int VAR_11;

 if ((VAR_8 = FUNC_1(VAR_2, VAR_3)) == ((void*)0)) {
  FUNC_0("ERROR: proc_addr2map failed to resolve 0x%jx", VAR_3);
  return (-1);
 }
 if (FUNC_4(VAR_8) != 0) {
  FUNC_0("ERROR: failed to open object %s",
      VAR_8->map.pr_mapname);
  return (-1);
 }

 VAR_7 = VAR_8->file;
 VAR_10 = VAR_7->ehdr.e_type == VAR_1 ?
     VAR_8->map.pr_vaddr - VAR_8->map.pr_offset : 0;
 if (VAR_3 < VAR_10)
  return (VAR_0);
 VAR_3 -= VAR_10;

 VAR_11 = FUNC_3(VAR_7->elf, &VAR_7->dynsymtab, VAR_3, &VAR_9,
     VAR_6);
 if (VAR_11 == VAR_0)
  VAR_11 = FUNC_3(VAR_7->elf, &VAR_7->symtab, VAR_3,
      &VAR_9, VAR_6);
 if (VAR_11 == 0) {
  VAR_6->st_value += VAR_10;
  FUNC_2(VAR_9, VAR_4, VAR_5);
 }
 return (VAR_11);
}
