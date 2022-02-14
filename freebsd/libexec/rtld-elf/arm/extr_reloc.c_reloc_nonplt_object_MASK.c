
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_14__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_13__ {int st_value; } ;
struct TYPE_12__ {int tlsoffset; int path; TYPE_1__* symtab; scalar_t__ strtab; int tls_done; int tlsindex; int mainprog; scalar_t__ relocbase; } ;
struct TYPE_11__ {scalar_t__ st_name; } ;
typedef int SymCache ;
typedef int RtldLockState ;
typedef TYPE_2__ Obj_Entry ;
typedef TYPE_3__ Elf_Sym ;
typedef TYPE_4__ Elf_Rel ;
typedef int Elf_Addr ;
typedef int Elf32_Sword ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,...) ;
 TYPE_3__* FUNC_7 (unsigned long,TYPE_2__*,TYPE_2__ const**,int,int *,int *) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,int) ;

__attribute__((used)) static int
FUNC_10(Obj_Entry *VAR_0, const Elf_Rel *VAR_1, SymCache *VAR_2,
    int VAR_3, RtldLockState *VAR_4)
{
 Elf_Addr *VAR_5;
 const Elf_Sym *VAR_6;
 const Obj_Entry *VAR_7;
 Elf_Addr VAR_8;
 unsigned long VAR_9;

 VAR_5 = (Elf_Addr *)(VAR_0->relocbase + VAR_1->r_offset);
 VAR_9 = FUNC_0(VAR_1->r_info);

 switch (FUNC_1(VAR_1->r_info)) {
 case 133:
  break;


 case 132: {
  Elf32_Sword VAR_10;




  VAR_10 = *VAR_5;
  if (VAR_10 & 0x00800000)
   VAR_10 |= 0xff000000;

  VAR_6 = FUNC_7(VAR_9, VAR_0, &VAR_7, VAR_3, VAR_2,
      VAR_4);
  if (VAR_6 == ((void*)0))
    return -1;
   VAR_8 = (Elf_Addr)VAR_0->relocbase + VAR_6->st_value
       - (Elf_Addr)VAR_5 + (VAR_10 << 2);
   if ((VAR_8 & 0xfe000000) != 0xfe000000 &&
       (VAR_8 & 0xfe000000) != 0) {
    FUNC_4(
    "%s: R_ARM_PC24 relocation @ %p to %s failed "
    "(displacement %ld (%#lx) out of range)",
        VAR_0->path, VAR_5,
        VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
        (long) VAR_8, (long) VAR_8);
    return -1;
   }
   VAR_8 >>= 2;
   *VAR_5 = (*VAR_5 & 0xff000000) | (VAR_8 & 0x00ffffff);
   FUNC_6("PC24 %s in %s --> %p @ %p in %s",
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
       VAR_0->path, (void *)*VAR_5, VAR_5, VAR_7->path);
   break;
  }


  case 136:
  case 134:
   VAR_6 = FUNC_7(VAR_9, VAR_0, &VAR_7, VAR_3, VAR_2,
       VAR_4);
   if (VAR_6 == ((void*)0))
    return -1;
   if (FUNC_3(FUNC_2(VAR_5))) {
    VAR_8 = *VAR_5 + (Elf_Addr)VAR_7->relocbase +
        VAR_6->st_value;
    *VAR_5 = VAR_8;
   } else {
    VAR_8 = FUNC_8(VAR_5) +
        (Elf_Addr)VAR_7->relocbase +
        VAR_6->st_value;
    FUNC_9(VAR_5, VAR_8);
   }
   FUNC_6("ABS32/GLOB_DAT %s in %s --> %p @ %p in %s",
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
       VAR_0->path, (void *)VAR_8, VAR_5, VAR_7->path);
   break;

  case 131:
   if (FUNC_3(FUNC_2(VAR_5))) {
    VAR_8 = *VAR_5 + (Elf_Addr)VAR_0->relocbase;
    *VAR_5 = VAR_8;
   } else {
    VAR_8 = FUNC_8(VAR_5) +
        (Elf_Addr)VAR_0->relocbase;
    FUNC_9(VAR_5, VAR_8);
   }
   FUNC_6("RELATIVE in %s --> %p", VAR_0->path,
       (void *)VAR_8);
   break;

  case 135:






   if (!VAR_0->mainprog) {
    FUNC_4(
   "%s: Unexpected R_COPY relocation in shared library",
        VAR_0->path);
    return -1;
   }
   FUNC_6("COPY (avoid in main)");
   break;

  case 129:
   VAR_6 = FUNC_7(VAR_9, VAR_0, &VAR_7, VAR_3, VAR_2,
       VAR_4);
   if (VAR_6 == ((void*)0))
    return -1;

   VAR_8 = (Elf_Addr)(VAR_6->st_value);
   if (FUNC_3(FUNC_2(VAR_5)))
    *VAR_5 = VAR_8;
   else
    FUNC_9(VAR_5, VAR_8);

   FUNC_6("TLS_DTPOFF32 %s in %s --> %p",
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
       VAR_0->path, (void *)VAR_8);

   break;
  case 130:
   VAR_6 = FUNC_7(VAR_9, VAR_0, &VAR_7, VAR_3, VAR_2,
       VAR_4);
   if (VAR_6 == ((void*)0))
    return -1;

   VAR_8 = (Elf_Addr)(VAR_7->tlsindex);
   if (FUNC_3(FUNC_2(VAR_5)))
    *VAR_5 = VAR_8;
   else
    FUNC_9(VAR_5, VAR_8);

   FUNC_6("TLS_DTPMOD32 %s in %s --> %p",
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
       VAR_0->path, (void *)VAR_8);

   break;

  case 128:
   VAR_6 = FUNC_7(VAR_9, VAR_0, &VAR_7, VAR_3, VAR_2,
       VAR_4);
   if (VAR_6 == ((void*)0))
    return -1;

   if (!VAR_7->tls_done && !FUNC_5(VAR_0))
    return -1;

   VAR_8 = (Elf_Addr)VAR_6->st_value + VAR_7->tlsoffset;
   if (FUNC_3(FUNC_2(VAR_5)))
    *VAR_5 = VAR_8;
   else
    FUNC_9(VAR_5, VAR_8);
   FUNC_6("TLS_TPOFF32 %s in %s --> %p",
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name,
       VAR_0->path, (void *)VAR_8);
   break;


  default:
   FUNC_6("sym = %lu, type = %lu, offset = %p, "
       "contents = %p, symbol = %s",
       VAR_9, (u_long)FUNC_1(VAR_1->r_info),
       (void *)VAR_1->r_offset, (void *)FUNC_8(VAR_5),
       VAR_0->strtab + VAR_0->symtab[VAR_9].st_name);
   FUNC_4("%s: Unsupported relocation type %ld "
       "in non-PLT relocations\n",
       VAR_0->path, (u_long) FUNC_1(VAR_1->r_info));
   return -1;
 }
 return 0;
}
