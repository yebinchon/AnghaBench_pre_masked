
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct section {int align; int pseudo; int loadable; char const* name; scalar_t__ type; int flags; int * os; scalar_t__ off; int vma; scalar_t__ sz; int * is; } ;
struct elfcopy {int ophnum; scalar_t__ strip; int flags; struct section* strtab; struct section* symtab; scalar_t__* secndx; int eout; int * debuglink; struct section* shstrtab; int ein; } ;
struct TYPE_3__ {scalar_t__ sh_type; scalar_t__ sh_info; int sh_addralign; int sh_flags; scalar_t__ sh_offset; int sh_addr; scalar_t__ sh_size; int sh_name; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef int Elf_Scn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct elfcopy*) ;
 void* FUNC_1 (struct elfcopy*,struct section*) ;
 struct section* FUNC_2 (int,int) ;
 int FUNC_3 (struct elfcopy*,struct section*) ;
 int FUNC_4 (struct elfcopy*,struct section*,int *,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,size_t*) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int ,int *) ;
 char* FUNC_11 (int ,size_t,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int,int ) ;
 int * FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (struct elfcopy*,char const*) ;
 int FUNC_17 (struct elfcopy*) ;
 int FUNC_18 (struct elfcopy*) ;
 int FUNC_19 (struct elfcopy*,struct section*,int ) ;
 scalar_t__ FUNC_20 (struct elfcopy*,scalar_t__) ;
 scalar_t__ FUNC_21 (struct elfcopy*,char const*) ;
 scalar_t__ FUNC_22 (char const*,char*) ;

void
FUNC_23(struct elfcopy *VAR_20)
{
 struct section *VAR_21;
 const char *VAR_22;
 Elf_Scn *VAR_23;
 GElf_Shdr VAR_24;
 size_t VAR_25;
 uint64_t VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;






 if ((VAR_21 = FUNC_2(1, sizeof(*VAR_21))) == ((void*)0))
  FUNC_12(VAR_3, "calloc failed");
 VAR_21->off = 0;
 VAR_21->sz = FUNC_14(VAR_20->eout, VAR_0, 1, VAR_2) +
     FUNC_14(VAR_20->eout, VAR_1, VAR_20->ophnum, VAR_2);
 VAR_21->align = 1;
 VAR_21->pseudo = 1;
 VAR_21->loadable = FUNC_1(VAR_20, VAR_21);
 FUNC_19(VAR_20, VAR_21, 0);


 FUNC_17(VAR_20);

 if (FUNC_7(VAR_20->ein, &VAR_25) == 0)
  FUNC_13(VAR_3, "elf_getshstrndx failed: %s",
      FUNC_5(-1));

 VAR_30 = 0;
 VAR_23 = ((void*)0);
 while ((VAR_23 = FUNC_10(VAR_20->ein, VAR_23)) != ((void*)0)) {
  if (FUNC_15(VAR_23, &VAR_24) == ((void*)0))
   FUNC_13(VAR_3, "gelf_getshdr failed: %s",
       FUNC_5(-1));
  if ((VAR_22 = FUNC_11(VAR_20->ein, VAR_25, VAR_24.sh_name)) == ((void*)0))
   FUNC_13(VAR_3, "elf_strptr failed: %s",
       FUNC_5(-1));


  if (FUNC_21(VAR_20, VAR_22))
   continue;





  if (VAR_24.sh_type == VAR_14 || VAR_24.sh_type == VAR_15)
   if (VAR_24.sh_info != 0 &&
       FUNC_20(VAR_20, VAR_24.sh_info))
    continue;






  if (VAR_24.sh_type == VAR_11 && VAR_20->strip == VAR_16)
   continue;


  VAR_29 = FUNC_16(VAR_20, VAR_22);


  if (FUNC_22(VAR_22, ".shstrtab") != 0) {
   if ((VAR_21 = FUNC_2(1, sizeof(*VAR_21))) == ((void*)0))
    FUNC_12(VAR_3, "calloc failed");
   VAR_21->name = VAR_22;
   VAR_21->is = VAR_23;
   VAR_21->off = VAR_24.sh_offset;
   VAR_21->sz = VAR_24.sh_size;
   VAR_21->align = VAR_24.sh_addralign;
   VAR_21->type = VAR_24.sh_type;
   VAR_21->flags = VAR_24.sh_flags;
   VAR_21->vma = VAR_24.sh_addr;
   if (VAR_29 &&
       (VAR_29 & (VAR_7 | VAR_6)) == 0)
    VAR_21->loadable = 0;
   else {
    VAR_21->loadable = FUNC_1(VAR_20, VAR_21);
    if ((VAR_20->flags & VAR_4) &&
        (VAR_24.sh_flags & VAR_8))
     VAR_21->loadable = 1;
   }
  } else {

   VAR_21 = VAR_20->shstrtab;
   VAR_21->off = VAR_24.sh_offset;
  }

  VAR_26 = VAR_27 = VAR_10;
  if (FUNC_22(VAR_22, ".symtab") != 0 &&
      FUNC_22(VAR_22, ".strtab") != 0) {
   if (!FUNC_22(VAR_22, ".shstrtab")) {





    if (VAR_20->debuglink != ((void*)0))
     FUNC_0(VAR_20);
    if (VAR_20->flags & VAR_5)
     FUNC_18(VAR_20);
   }
    if ((VAR_21->os = FUNC_9(VAR_20->eout)) == ((void*)0))
    FUNC_13(VAR_3, "elf_newscn failed: %s",
        FUNC_5(-1));
   if ((VAR_27 = FUNC_8(VAR_21->os)) == VAR_10)
    FUNC_13(VAR_3, "elf_ndxscn failed: %s",
        FUNC_5(-1));
  }
  if ((VAR_26 = FUNC_8(VAR_23)) == VAR_10)
   FUNC_13(VAR_3, "elf_ndxscn failed: %s",
       FUNC_5(-1));
  if (VAR_26 != VAR_10 && VAR_27 != VAR_10)
   VAR_20->secndx[VAR_26] = VAR_27;
  if (VAR_20->strip == VAR_17) {
   if (((VAR_24.sh_flags & VAR_8) ||
       (VAR_24.sh_flags & VAR_9)) &&
       VAR_24.sh_type != VAR_13)
    VAR_21->type = VAR_12;
  }

  FUNC_3(VAR_20, VAR_21);


  if (FUNC_22(VAR_22, ".symtab") != 0 &&
      FUNC_22(VAR_22, ".strtab") != 0 &&
      FUNC_22(VAR_22, ".shstrtab") != 0) {
   FUNC_4(VAR_20, VAR_21, ((void*)0), 0, VAR_29);
   if (VAR_30)
    VAR_20->flags &= ~VAR_19;
  } else
   VAR_30 = 1;

  if (FUNC_22(VAR_22, ".symtab") == 0) {
   VAR_20->flags |= VAR_18;
   VAR_20->symtab = VAR_21;
  }
  if (FUNC_22(VAR_22, ".strtab") == 0)
   VAR_20->strtab = VAR_21;

  FUNC_19(VAR_20, VAR_21, 0);
 }
 VAR_28 = FUNC_6();
 if (VAR_28 != 0)
  FUNC_13(VAR_3, "elf_nextscn failed: %s",
      FUNC_5(VAR_28));
}
