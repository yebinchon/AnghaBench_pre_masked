
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct symtab {scalar_t__ nsyms; int stridx; int data; } ;
struct proc_handle {int dummy; } ;
struct TYPE_9__ {char const* pr_mapname; scalar_t__ pr_vaddr; } ;
struct map_info {TYPE_2__ map; struct file_info* file; } ;
struct TYPE_8__ {scalar_t__ e_type; } ;
struct file_info {TYPE_1__ ehdr; int elf; struct symtab dynsymtab; struct symtab symtab; } ;
typedef int (* proc_sym_f ) (void*,TYPE_3__*,char const*) ;
struct TYPE_10__ {int st_value; int st_name; int st_info; } ;
typedef TYPE_3__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct map_info* FUNC_3 (struct proc_handle*,char const*) ;
 char* FUNC_4 (int ,int ,int ) ;
 int * FUNC_5 (int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct map_info*) ;
 int FUNC_7 (void*,TYPE_3__*,char const*) ;

int
FUNC_8(struct proc_handle *VAR_18, const char *VAR_19, int VAR_20,
    int VAR_21, proc_sym_f *VAR_22, void *VAR_23)
{
 GElf_Sym VAR_24;
 struct file_info *VAR_25;
 struct map_info *VAR_26;
 struct symtab *VAR_27;
 const char *VAR_28;
 int VAR_29, VAR_30;

 if ((VAR_26 = FUNC_3(VAR_18, VAR_19)) == ((void*)0)) {
  FUNC_0("ERROR: proc_name2map failed to resolve %s", VAR_19);
  return (-1);
 }
 if (FUNC_6(VAR_26) != 0) {
  FUNC_0("ERROR: failed to open object %s",
      VAR_26->map.pr_mapname);
  return (-1);
 }

 VAR_25 = VAR_26->file;
 VAR_27 = VAR_20 == VAR_4 ? &VAR_25->symtab : &VAR_25->dynsymtab;
 if (VAR_27->nsyms == 0)
  return (-1);

 VAR_29 = 0;
 for (VAR_30 = 0; FUNC_5(VAR_27->data, VAR_30, &VAR_24) != ((void*)0); VAR_30++) {
  if (FUNC_1(VAR_24.st_info) == VAR_6 &&
      (VAR_21 & VAR_1) == 0)
   continue;
  if (FUNC_1(VAR_24.st_info) == VAR_5 &&
      (VAR_21 & VAR_0) == 0)
   continue;
  if (FUNC_1(VAR_24.st_info) == VAR_7 &&
      (VAR_21 & VAR_2) == 0)
   continue;
  if (FUNC_2(VAR_24.st_info) == VAR_10 &&
      (VAR_21 & VAR_15) == 0)
   continue;
  if (FUNC_2(VAR_24.st_info) == VAR_11 &&
      (VAR_21 & VAR_16) == 0)
   continue;
  if (FUNC_2(VAR_24.st_info) == VAR_9 &&
      (VAR_21 & VAR_14) == 0)
   continue;
  if (FUNC_2(VAR_24.st_info) == VAR_12 &&
      (VAR_21 & VAR_17) == 0)
   continue;
  if (FUNC_2(VAR_24.st_info) == VAR_8 &&
      (VAR_21 & VAR_13) == 0)
   continue;
  VAR_28 = FUNC_4(VAR_25->elf, VAR_27->stridx, VAR_24.st_name);
  if (VAR_25->ehdr.e_type == VAR_3)
   VAR_24.st_value += VAR_26->map.pr_vaddr;
  if ((VAR_29 = (*VAR_22)(VAR_23, &VAR_24, VAR_28)) != 0)
   break;
 }
 return (VAR_29);
}
