
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct proc_handle {int dummy; } ;
struct TYPE_7__ {char const* pr_mapname; uintptr_t pr_vaddr; uintptr_t pr_offset; } ;
struct map_info {TYPE_2__ map; struct file_info* file; } ;
struct TYPE_6__ {scalar_t__ e_type; } ;
struct file_info {int symtab; int elf; int dynsymtab; TYPE_1__ ehdr; } ;
typedef int prsyminfo_t ;
struct TYPE_8__ {uintptr_t st_value; } ;
typedef TYPE_3__ GElf_Sym ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct map_info* FUNC_1 (struct proc_handle*,char const*) ;
 int FUNC_2 (int ,int *,char const*,TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (struct map_info*) ;

int
FUNC_4(struct proc_handle *VAR_2, const char *VAR_3, const char *VAR_4,
    GElf_Sym *VAR_5, prsyminfo_t *VAR_6)
{
 struct file_info *VAR_7;
 struct map_info *VAR_8;
 uintptr_t VAR_9;
 int VAR_10;

 if ((VAR_8 = FUNC_1(VAR_2, VAR_3)) == ((void*)0)) {
  FUNC_0("ERROR: proc_name2map failed to resolve %s", VAR_3);
  return (-1);
 }
 if (FUNC_3(VAR_8) != 0) {
  FUNC_0("ERROR: failed to open object %s",
      VAR_8->map.pr_mapname);
  return (-1);
 }

 VAR_7 = VAR_8->file;
 VAR_9 = VAR_7->ehdr.e_type == VAR_1 ?
     VAR_8->map.pr_vaddr - VAR_8->map.pr_offset : 0;

 VAR_10 = FUNC_2(VAR_7->elf, &VAR_7->dynsymtab, VAR_4,
     VAR_5, VAR_6);
 if (VAR_10 == VAR_0)
  VAR_10 = FUNC_2(VAR_7->elf, &VAR_7->symtab, VAR_4,
      VAR_5, VAR_6);
 if (VAR_10 == 0)
  VAR_5->st_value += VAR_9;
 return (VAR_10);
}
