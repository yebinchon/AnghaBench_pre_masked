
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef scalar_t__ ulong_t ;
struct TYPE_11__ {int cts_entsize; int * cts_data; } ;
typedef TYPE_1__ ctf_sect_t ;
struct TYPE_12__ {scalar_t__ ctc_argc; int ctc_flags; int ctc_return; } ;
typedef TYPE_2__ ctf_funcinfo_t ;
struct TYPE_13__ {scalar_t__ ctf_nsyms; unsigned int* ctf_sxlate; scalar_t__ ctf_buf; TYPE_1__ ctf_symtab; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_15__ {int st_info; } ;
struct TYPE_14__ {int st_info; } ;
typedef TYPE_4__ Elf64_Sym ;
typedef TYPE_5__ Elf32_Sym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_3__*,int ) ;

int
FUNC_5(ctf_file_t *VAR_9, ulong_t VAR_10, ctf_funcinfo_t *VAR_11)
{
 const ctf_sect_t *VAR_12 = &VAR_9->ctf_symtab;
 const ushort_t *VAR_13;
 ushort_t VAR_14, VAR_15, VAR_16;

 if (VAR_12->cts_data == ((void*)0))
  return (FUNC_4(VAR_9, VAR_5));

 if (VAR_10 >= VAR_9->ctf_nsyms)
  return (FUNC_4(VAR_9, VAR_7));

 if (VAR_12->cts_entsize == sizeof (Elf32_Sym)) {
  const Elf32_Sym *VAR_17 = (Elf32_Sym *)VAR_12->cts_data + VAR_10;
  if (FUNC_0(VAR_17->st_info) != VAR_8)
   return (FUNC_4(VAR_9, VAR_6));
 } else {
  const Elf64_Sym *VAR_18 = (Elf64_Sym *)VAR_12->cts_data + VAR_10;
  if (FUNC_1(VAR_18->st_info) != VAR_8)
   return (FUNC_4(VAR_9, VAR_6));
 }

 if (VAR_9->ctf_sxlate[VAR_10] == -1u)
  return (FUNC_4(VAR_9, VAR_4));

 VAR_13 = (ushort_t *)((uintptr_t)VAR_9->ctf_buf + VAR_9->ctf_sxlate[VAR_10]);

 VAR_14 = *VAR_13++;
 VAR_15 = FUNC_2(VAR_9, VAR_14);
 VAR_16 = FUNC_3(VAR_9, VAR_14);

 if (VAR_15 == VAR_2 && VAR_16 == 0)
  return (FUNC_4(VAR_9, VAR_4));

 if (VAR_15 != VAR_1)
  return (FUNC_4(VAR_9, VAR_3));

 VAR_11->ctc_return = *VAR_13++;
 VAR_11->ctc_argc = VAR_16;
 VAR_11->ctc_flags = 0;

 if (VAR_16 != 0 && VAR_13[VAR_16 - 1] == 0) {
  VAR_11->ctc_flags |= VAR_0;
  VAR_11->ctc_argc--;
 }

 return (0);
}
