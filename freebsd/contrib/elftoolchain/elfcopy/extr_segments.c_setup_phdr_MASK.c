
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct segment {int type; int msz; int fsz; int off; int paddr; int vaddr; } ;
struct elfcopy {size_t ophnum; size_t iphnum; scalar_t__ strip; int v_seg; int ein; } ;
struct TYPE_4__ {int p_type; int p_memsz; int p_filesz; int p_offset; int p_paddr; int p_vaddr; } ;
typedef TYPE_1__ GElf_Phdr ;


 int VAR_0 ;
 int FUNC_0 (int *,struct segment*,int ) ;
 scalar_t__ VAR_1 ;
 struct segment* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_1__* FUNC_6 (int ,size_t,TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_7(struct elfcopy *VAR_3)
{
 struct segment *VAR_4;
 GElf_Phdr VAR_5;
 size_t VAR_6, VAR_7;

 if (FUNC_3(VAR_3->ein, &VAR_6) == 0)
  FUNC_5(VAR_0, "elf_getphnum failed: %s",
      FUNC_2(-1));

 VAR_3->ophnum = VAR_3->iphnum = VAR_6;
 if (VAR_6 == 0)
  return;


 if (VAR_3->strip == VAR_1) {
  VAR_3->ophnum = 0;
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_6(VAR_3->ein, VAR_7, &VAR_5) != &VAR_5)
   FUNC_5(VAR_0, "gelf_getphdr failed: %s",
       FUNC_2(-1));
  if ((VAR_4 = FUNC_1(1, sizeof(*VAR_4))) == ((void*)0))
   FUNC_4(VAR_0, "calloc failed");
  VAR_4->vaddr = VAR_5.p_vaddr;
  VAR_4->paddr = VAR_5.p_paddr;
  VAR_4->off = VAR_5.p_offset;
  VAR_4->fsz = VAR_5.p_filesz;
  VAR_4->msz = VAR_5.p_memsz;
  VAR_4->type = VAR_5.p_type;
  FUNC_0(&VAR_3->v_seg, VAR_4, VAR_2);
 }
}
