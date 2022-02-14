
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ushort_t ;
typedef int uint_t ;
typedef int uchar_t ;
struct TYPE_13__ {int cts_entsize; scalar_t__ cts_size; int * cts_data; } ;
typedef TYPE_1__ ctf_sect_t ;
struct TYPE_14__ {int cth_objtoff; int cth_funcoff; int cth_typeoff; } ;
typedef TYPE_2__ ctf_header_t ;
struct TYPE_15__ {int* ctf_sxlate; int ctf_nsyms; scalar_t__ ctf_buf; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_16__ {scalar_t__ st_name; scalar_t__ st_shndx; int st_value; int st_info; } ;
typedef TYPE_4__ Elf64_Sym ;
typedef int Elf32_Sym ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 char* VAR_3 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 TYPE_4__* FUNC_5 (int *,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_6(ctf_file_t *VAR_4, const ctf_header_t *VAR_5,
    const ctf_sect_t *VAR_6, const ctf_sect_t *VAR_7)
{
 const uchar_t *VAR_8 = VAR_6->cts_data;
 uint_t *VAR_9 = VAR_4->ctf_sxlate;
 uint_t *VAR_10 = VAR_9 + VAR_4->ctf_nsyms;

 uint_t VAR_11 = VAR_5->cth_objtoff;
 uint_t VAR_12 = VAR_5->cth_funcoff;

 ushort_t VAR_13, VAR_14;
 Elf64_Sym VAR_15, *VAR_16;
 const char *VAR_17;
 for (; VAR_9 < VAR_10; VAR_9++, VAR_8 += VAR_6->cts_entsize) {
  if (VAR_6->cts_entsize == sizeof (Elf32_Sym))
   VAR_16 = FUNC_5((Elf32_Sym *)(uintptr_t)VAR_8, &VAR_15);
  else
   VAR_16 = (Elf64_Sym *)(uintptr_t)VAR_8;

  if (VAR_16->st_name < VAR_7->cts_size)
   VAR_17 = (const char *)VAR_7->cts_data + VAR_16->st_name;
  else
   VAR_17 = VAR_3;

  if (VAR_16->st_name == 0 || VAR_16->st_shndx == VAR_2 ||
      FUNC_4(VAR_17, "_START_") == 0 ||
      FUNC_4(VAR_17, "_END_") == 0) {
   *VAR_9 = -1u;
   continue;
  }

  switch (FUNC_0(VAR_16->st_info)) {
  case 128:
   if (VAR_11 >= VAR_5->cth_funcoff ||
       (VAR_16->st_shndx == VAR_1 && VAR_16->st_value == 0)) {
    *VAR_9 = -1u;
    break;
   }

   *VAR_9 = VAR_11;
   VAR_11 += sizeof (ushort_t);
   break;

  case 129:
   if (VAR_12 >= VAR_5->cth_typeoff) {
    *VAR_9 = -1u;
    break;
   }

   *VAR_9 = VAR_12;

   VAR_13 = *(ushort_t *)((uintptr_t)VAR_4->ctf_buf + VAR_12);
   VAR_14 = FUNC_2(VAR_4, VAR_13);






   if (FUNC_1(VAR_4, VAR_13) == VAR_0 &&
       VAR_14 == 0)
    VAR_12 += sizeof (ushort_t);
   else
    VAR_12 += sizeof (ushort_t) * (VAR_14 + 2);
   break;

  default:
   *VAR_9 = -1u;
   break;
  }
 }

 FUNC_3("loaded %lu symtab entries\n", VAR_4->ctf_nsyms);
 return (0);
}
