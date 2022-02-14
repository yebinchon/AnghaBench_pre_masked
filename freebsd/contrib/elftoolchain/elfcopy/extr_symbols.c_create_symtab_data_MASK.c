
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sz; int buf; } ;
struct TYPE_8__ {int sz; int buf; } ;
struct symbuf {int nls; int ngs; TYPE_2__ g; TYPE_1__ l; int g64; int g32; int l64; int l32; } ;
struct strbuf {int nls; int ngs; TYPE_2__ g; TYPE_1__ l; int g64; int g32; int l64; int l32; } ;
struct section {int os; int sz; struct symbuf* buf; } ;
struct elfcopy {scalar_t__ oec; int eout; struct section* strtab; struct section* symtab; } ;
struct TYPE_11__ {int d_align; int d_off; int d_size; void* d_version; void* d_type; int d_buf; } ;
struct TYPE_10__ {int sh_addralign; int sh_info; scalar_t__ sh_link; scalar_t__ sh_entsize; scalar_t__ sh_flags; int sh_type; int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_3__ GElf_Shdr ;
typedef TYPE_4__ Elf_Data ;
typedef int Elf64_Sym ;
typedef int Elf32_Sym ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,void*,int,void*) ;
 int * FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;

void
FUNC_6(struct elfcopy *VAR_7)
{
 struct section *VAR_8, *VAR_9;
 struct symbuf *VAR_10;
 struct strbuf *VAR_11;
 Elf_Data *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 GElf_Shdr VAR_16, VAR_17;

 VAR_8 = VAR_7->symtab;
 VAR_9 = VAR_7->strtab;

 if (FUNC_4(VAR_8->os, &VAR_16) == ((void*)0))
  FUNC_2(VAR_4, "gelf_getshdr() failed: %s",
      FUNC_0(-1));
 if (FUNC_4(VAR_9->os, &VAR_17) == ((void*)0))
  FUNC_2(VAR_4, "gelf_getshdr() failed: %s",
      FUNC_0(-1));






 VAR_10 = VAR_8->buf;
 if (VAR_10->nls > 0) {
  if ((VAR_13 = FUNC_1(VAR_8->os)) == ((void*)0))
   FUNC_2(VAR_4, "elf_newdata() failed: %s.",
        FUNC_0(-1));
  if (VAR_7->oec == VAR_0) {
   VAR_13->d_align = 4;
   VAR_13->d_off = 0;
   VAR_13->d_buf = VAR_10->l32;
   VAR_13->d_size = VAR_10->nls *
    sizeof(Elf32_Sym);
   VAR_13->d_type = VAR_2;
   VAR_13->d_version = VAR_3;
  } else {
   VAR_13->d_align = 8;
   VAR_13->d_off = 0;
   VAR_13->d_buf = VAR_10->l64;
   VAR_13->d_size = VAR_10->nls *
    sizeof(Elf64_Sym);
   VAR_13->d_type = VAR_2;
   VAR_13->d_version = VAR_3;
  }
 }
 if (VAR_10->ngs > 0) {
  if ((VAR_12 = FUNC_1(VAR_8->os)) == ((void*)0))
   FUNC_2(VAR_4, "elf_newdata() failed: %s.",
        FUNC_0(-1));
  if (VAR_7->oec == VAR_0) {
   VAR_12->d_align = 4;
   VAR_12->d_off = VAR_10->nls *
    sizeof(Elf32_Sym);
   VAR_12->d_buf = VAR_10->g32;
   VAR_12->d_size = VAR_10->ngs *
    sizeof(Elf32_Sym);
   VAR_12->d_type = VAR_2;
   VAR_12->d_version = VAR_3;
  } else {
   VAR_12->d_align = 8;
   VAR_12->d_off = VAR_10->nls *
    sizeof(Elf64_Sym);
   VAR_12->d_buf = VAR_10->g64;
   VAR_12->d_size = VAR_10->ngs *
    sizeof(Elf64_Sym);
   VAR_12->d_type = VAR_2;
   VAR_12->d_version = VAR_3;
  }
 }






 VAR_11 = VAR_9->buf;
 if ((VAR_15 = FUNC_1(VAR_9->os)) == ((void*)0))
  FUNC_2(VAR_4, "elf_newdata() failed: %s.",
      FUNC_0(-1));
 VAR_15->d_align = 1;
 VAR_15->d_off = 0;
 VAR_15->d_buf = VAR_11->l.buf;
 VAR_15->d_size = VAR_11->l.sz;
 VAR_15->d_type = VAR_1;
 VAR_15->d_version = VAR_3;

 if (VAR_11->g.sz > 0) {
  if ((VAR_14 = FUNC_1(VAR_9->os)) == ((void*)0))
   FUNC_2(VAR_4, "elf_newdata() failed: %s.",
       FUNC_0(-1));
  VAR_14->d_align = 1;
  VAR_14->d_off = VAR_15->d_size;
  VAR_14->d_buf = VAR_11->g.buf;
  VAR_14->d_size = VAR_11->g.sz;
  VAR_14->d_type = VAR_1;
  VAR_14->d_version = VAR_3;
 }

 VAR_16.sh_addr = 0;
 VAR_16.sh_addralign = (VAR_7->oec == VAR_0 ? 4 : 8);
 VAR_16.sh_size = VAR_8->sz;
 VAR_16.sh_type = VAR_6;
 VAR_16.sh_flags = 0;
 VAR_16.sh_entsize = FUNC_3(VAR_7->eout, VAR_2, 1,
     VAR_3);





 VAR_16.sh_info = VAR_10->nls;

 VAR_17.sh_addr = 0;
 VAR_17.sh_addralign = 1;
 VAR_17.sh_size = VAR_9->sz;
 VAR_17.sh_type = VAR_5;
 VAR_17.sh_flags = 0;
 VAR_17.sh_entsize = 0;
 VAR_17.sh_info = 0;
 VAR_17.sh_link = 0;

 if (!FUNC_5(VAR_8->os, &VAR_16))
  FUNC_2(VAR_4, "gelf_update_shdr() failed: %s",
      FUNC_0(-1));
 if (!FUNC_5(VAR_9->os, &VAR_17))
  FUNC_2(VAR_4, "gelf_update_shdr() failed: %s",
      FUNC_0(-1));
}
