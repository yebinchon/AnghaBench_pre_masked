
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef scalar_t__ ulong_t ;
struct TYPE_7__ {int cts_entsize; int * cts_data; } ;
typedef TYPE_1__ ctf_sect_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_8__ {scalar_t__ ctf_nsyms; unsigned int* ctf_sxlate; scalar_t__ ctf_buf; TYPE_1__ ctf_symtab; } ;
typedef TYPE_2__ ctf_file_t ;
struct TYPE_10__ {int st_info; } ;
struct TYPE_9__ {int st_info; } ;
typedef TYPE_3__ Elf64_Sym ;
typedef TYPE_4__ Elf32_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

ctf_id_t
FUNC_3(ctf_file_t *VAR_5, ulong_t VAR_6)
{
 const ctf_sect_t *VAR_7 = &VAR_5->ctf_symtab;
 ctf_id_t VAR_8;

 if (VAR_7->cts_data == ((void*)0))
  return (FUNC_2(VAR_5, VAR_0));

 if (VAR_6 >= VAR_5->ctf_nsyms)
  return (FUNC_2(VAR_5, VAR_3));

 if (VAR_7->cts_entsize == sizeof (Elf32_Sym)) {
  const Elf32_Sym *VAR_9 = (Elf32_Sym *)VAR_7->cts_data + VAR_6;
  if (FUNC_0(VAR_9->st_info) != VAR_4)
   return (FUNC_2(VAR_5, VAR_1));
 } else {
  const Elf64_Sym *VAR_10 = (Elf64_Sym *)VAR_7->cts_data + VAR_6;
  if (FUNC_1(VAR_10->st_info) != VAR_4)
   return (FUNC_2(VAR_5, VAR_1));
 }

 if (VAR_5->ctf_sxlate[VAR_6] == -1u)
  return (FUNC_2(VAR_5, VAR_2));

 VAR_8 = *(ushort_t *)((uintptr_t)VAR_5->ctf_buf + VAR_5->ctf_sxlate[VAR_6]);
 if (VAR_8 == 0)
  return (FUNC_2(VAR_5, VAR_2));

 return (VAR_8);
}
