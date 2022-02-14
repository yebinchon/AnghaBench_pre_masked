
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct section {char const* name; char* newname; int loadable; int nocopy; scalar_t__ align; scalar_t__ vma; scalar_t__ type; int * os; int * is; scalar_t__ sz; scalar_t__ off; } ;
struct elfcopy {int flags; int eout; } ;
struct TYPE_7__ {int d_version; int d_type; scalar_t__ d_size; void* d_buf; scalar_t__ d_off; scalar_t__ d_align; } ;
struct TYPE_6__ {scalar_t__ sh_addralign; scalar_t__ sh_addr; scalar_t__ sh_type; scalar_t__ sh_flags; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Type ;
typedef int Elf_Scn ;
typedef TYPE_2__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct elfcopy*,char const*) ;
 struct section* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (struct elfcopy*,struct section*,int) ;

struct section *
FUNC_10(struct elfcopy *VAR_3, const char *VAR_4, char *VAR_5,
    void *VAR_6, uint64_t VAR_7, uint64_t VAR_8, uint64_t VAR_9, Elf_Type VAR_10,
    uint64_t VAR_11, uint64_t VAR_12, uint64_t VAR_13, int VAR_14)
{
 struct section *VAR_15;
 Elf_Scn *VAR_16;
 Elf_Data *VAR_17;
 GElf_Shdr VAR_18;

 if ((VAR_16 = FUNC_4(VAR_3->eout)) == ((void*)0))
  FUNC_6(VAR_1, "elf_newscn() failed: %s",
      FUNC_2(-1));
 if ((VAR_15 = FUNC_1(1, sizeof(*VAR_15))) == ((void*)0))
  FUNC_5(VAR_1, "calloc failed");
 VAR_15->name = VAR_4;
 VAR_15->newname = VAR_5;
 VAR_15->off = VAR_8;
 VAR_15->sz = VAR_7;
 VAR_15->vma = VAR_13;
 VAR_15->align = VAR_12;
 VAR_15->loadable = VAR_14;
 VAR_15->is = ((void*)0);
 VAR_15->os = VAR_16;
 VAR_15->type = VAR_9;
 VAR_15->nocopy = 1;
 FUNC_9(VAR_3, VAR_15, 1);

 if (FUNC_7(VAR_16, &VAR_18) == ((void*)0))
  FUNC_6(VAR_1, "gelf_getshdr() failed: %s",
      FUNC_2(-1));
 VAR_18.sh_flags = VAR_11;
 VAR_18.sh_type = VAR_15->type;
 VAR_18.sh_addr = VAR_15->vma;
 VAR_18.sh_addralign = VAR_15->align;
 if (!FUNC_8(VAR_16, &VAR_18))
  FUNC_6(VAR_1, "gelf_update_shdr() failed: %s",
      FUNC_2(-1));
 FUNC_0(VAR_3, VAR_4);

 if (VAR_6 != ((void*)0) && VAR_7 != 0) {
  if ((VAR_17 = FUNC_3(VAR_16)) == ((void*)0))
   FUNC_6(VAR_1, "elf_newdata() failed: %s",
       FUNC_2(-1));
  VAR_17->d_align = VAR_12;
  VAR_17->d_off = 0;
  VAR_17->d_buf = VAR_6;
  VAR_17->d_size = VAR_7;
  VAR_17->d_type = VAR_10;
  VAR_17->d_version = VAR_0;
 }





 VAR_3->flags &= ~VAR_2;

 return (VAR_15);
}
