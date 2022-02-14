
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ushort_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {char* pathname; } ;
typedef TYPE_1__ modctl_t ;
struct TYPE_8__ {int nsym; int** ctfoffp; TYPE_4__* symtab; int * ctftab; } ;
typedef TYPE_2__ linker_ctf_t ;
struct TYPE_9__ {int cth_objtoff; int cth_funcoff; scalar_t__ cth_magic; int cth_typeoff; } ;
typedef TYPE_3__ ctf_header_t ;
struct TYPE_10__ {scalar_t__ st_name; scalar_t__ st_shndx; int st_value; int st_info; } ;
typedef TYPE_4__ Elf_Sym ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;


 int* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(modctl_t *VAR_7, linker_ctf_t *VAR_8)
{
 const Elf_Sym *VAR_9 = VAR_8->symtab;;
 const ctf_header_t *VAR_10 = (const ctf_header_t *) VAR_8->ctftab;
 const uint8_t *VAR_11 = VAR_8->ctftab + sizeof(ctf_header_t);
 int VAR_12;
 uint32_t *VAR_13;
 uint32_t VAR_14 = VAR_10->cth_objtoff;
 uint32_t VAR_15 = VAR_10->cth_funcoff;
 ushort_t VAR_16;
 ushort_t VAR_17;


 if (VAR_10->cth_magic != VAR_1) {
  FUNC_4("Bad magic value in CTF data of '%s'\n",VAR_7->pathname);
  return (VAR_2);
 }

 if (VAR_8->symtab == ((void*)0)) {
  FUNC_4("No symbol table in '%s'\n",VAR_7->pathname);
  return (VAR_2);
 }

 VAR_13 = FUNC_3(sizeof(uint32_t) * VAR_8->nsym, VAR_3, VAR_4);
 *VAR_8->ctfoffp = VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_8->nsym; VAR_12++, VAR_13++, VAR_9++) {
  if (VAR_9->st_name == 0 || VAR_9->st_shndx == VAR_6) {
   *VAR_13 = 0xffffffff;
   continue;
  }

  switch (FUNC_2(VAR_9->st_info)) {
  case 128:
   if (VAR_14 >= VAR_10->cth_funcoff ||
                            (VAR_9->st_shndx == VAR_5 && VAR_9->st_value == 0)) {
    *VAR_13 = 0xffffffff;
                                break;
                        }

                        *VAR_13 = VAR_14;
                        VAR_14 += sizeof (ushort_t);
   break;

  case 129:
   if (VAR_15 >= VAR_10->cth_typeoff) {
    *VAR_13 = 0xffffffff;
    break;
   }

   *VAR_13 = VAR_15;

   VAR_16 = *((const ushort_t *)(VAR_11 + VAR_15));
   VAR_17 = FUNC_1(VAR_16);






   if (FUNC_0(VAR_16) == VAR_0 && VAR_17 == 0)
    VAR_15 += sizeof (ushort_t);
   else
    VAR_15 += sizeof (ushort_t) * (VAR_17 + 2);
   break;

  default:
   *VAR_13 = 0xffffffff;
   break;
  }
 }

 return (0);
}
