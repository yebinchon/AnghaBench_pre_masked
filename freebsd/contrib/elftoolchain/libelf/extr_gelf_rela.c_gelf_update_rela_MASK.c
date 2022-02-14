
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_19__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_4__ d_data; TYPE_6__* d_scn; } ;
struct TYPE_23__ {int e_class; int e_version; } ;
struct TYPE_22__ {int r_info; } ;
struct TYPE_17__ {int sh_type; } ;
struct TYPE_16__ {int sh_type; } ;
struct TYPE_18__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_21__ {TYPE_3__ s_shdr; TYPE_9__* s_elf; } ;
struct TYPE_20__ {int r_info; } ;
typedef TYPE_5__ GElf_Rela ;
typedef TYPE_6__ Elf_Scn ;
typedef int Elf_Data ;
typedef TYPE_5__ Elf64_Rela ;
typedef int Elf32_Word ;
typedef TYPE_8__ Elf32_Rela ;
typedef TYPE_9__ Elf ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_8__*,TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_8__*,TYPE_5__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_13(Elf_Data *VAR_7, int VAR_8, GElf_Rela *VAR_9)
{
 int VAR_10;
 Elf *VAR_11;
 size_t VAR_12;
 Elf_Scn *VAR_13;
 uint32_t VAR_14;
 Elf32_Rela *VAR_15;
 Elf64_Rela *VAR_16;
 struct _Libelf_Data *VAR_17;

 VAR_17 = (struct _Libelf_Data *) VAR_7;

 if (VAR_17 == ((void*)0) || VAR_8 < 0 || VAR_9 == ((void*)0) ||
     (VAR_13 = VAR_17->d_scn) == ((void*)0) ||
     (VAR_11 = VAR_13->s_elf) == ((void*)0)) {
  FUNC_7(VAR_0, 0);
  return (0);
 }

 VAR_10 = VAR_11->e_class;
 FUNC_12(VAR_10 == VAR_1 || VAR_10 == VAR_2);

 if (VAR_10 == VAR_1)
  VAR_14 = VAR_13->s_shdr.s_shdr32.sh_type;
 else
  VAR_14 = VAR_13->s_shdr.s_shdr64.sh_type;

 if (FUNC_11(VAR_14) != VAR_3) {
  FUNC_7(VAR_0, 0);
  return (0);
 }

 VAR_12 = FUNC_10(VAR_3, VAR_10, VAR_11->e_version);

 FUNC_12(VAR_12 > 0);
 FUNC_12(VAR_8 >= 0);

 if (VAR_12 * (size_t) VAR_8 >= VAR_17->d_data.d_size) {
  FUNC_7(VAR_0, 0);
  return (0);
 }

 if (VAR_10 == VAR_1) {
  VAR_15 = (Elf32_Rela *) VAR_17->d_data.d_buf + VAR_8;

  FUNC_6(VAR_15, VAR_9, VAR_6);

  if (FUNC_3(VAR_9->r_info) > FUNC_1(~0UL) ||
      FUNC_4(VAR_9->r_info) > FUNC_2(~0U)) {
   FUNC_7(VAR_4, 0);
   return (0);
  }
  VAR_15->r_info = FUNC_0(
   (Elf32_Word) FUNC_3(VAR_9->r_info),
   (Elf32_Word) FUNC_4(VAR_9->r_info));

  FUNC_5(VAR_15, VAR_9, VAR_5);
 } else {
  VAR_16 = (Elf64_Rela *) VAR_17->d_data.d_buf + VAR_8;

  *VAR_16 = *VAR_9;

  if (FUNC_8(VAR_11))
   VAR_16->r_info = FUNC_9(VAR_9->r_info);
 }

 return (1);
}
