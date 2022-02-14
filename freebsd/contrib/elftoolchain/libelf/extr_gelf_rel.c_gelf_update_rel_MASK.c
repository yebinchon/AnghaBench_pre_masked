
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_4__ d_data; TYPE_6__* d_scn; } ;
struct TYPE_21__ {int e_class; int e_version; } ;
struct TYPE_20__ {int r_info; } ;
struct TYPE_15__ {int sh_type; } ;
struct TYPE_14__ {int sh_type; } ;
struct TYPE_16__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_19__ {TYPE_3__ s_shdr; TYPE_9__* s_elf; } ;
struct TYPE_18__ {int r_info; } ;
typedef TYPE_5__ GElf_Rel ;
typedef TYPE_6__ Elf_Scn ;
typedef int Elf_Data ;
typedef TYPE_5__ Elf64_Rel ;
typedef int Elf32_Word ;
typedef TYPE_8__ Elf32_Rel ;
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
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int VAR_5 ;

int
FUNC_12(Elf_Data *VAR_6, int VAR_7, GElf_Rel *VAR_8)
{
 int VAR_9;
 Elf *VAR_10;
 size_t VAR_11;
 Elf_Scn *VAR_12;
 uint32_t VAR_13;
 Elf32_Rel *VAR_14;
 Elf64_Rel *VAR_15;
 struct _Libelf_Data *VAR_16;

 VAR_16 = (struct _Libelf_Data *) VAR_6;

 if (VAR_16 == ((void*)0) || VAR_7 < 0 || VAR_8 == ((void*)0) ||
     (VAR_12 = VAR_16->d_scn) == ((void*)0) ||
     (VAR_10 = VAR_12->s_elf) == ((void*)0)) {
  FUNC_6(VAR_0, 0);
  return (0);
 }

 VAR_9 = VAR_10->e_class;
 FUNC_11(VAR_9 == VAR_1 || VAR_9 == VAR_2);

 if (VAR_9 == VAR_1)
  VAR_13 = VAR_12->s_shdr.s_shdr32.sh_type;
 else
  VAR_13 = VAR_12->s_shdr.s_shdr64.sh_type;

 if (FUNC_10(VAR_13) != VAR_3) {
  FUNC_6(VAR_0, 0);
  return (0);
 }

 VAR_11 = FUNC_9(VAR_3, VAR_9, VAR_10->e_version);

 FUNC_11(VAR_11 > 0);
 FUNC_11(VAR_7 >= 0);

 if (VAR_11 * (size_t) VAR_7 >= VAR_16->d_data.d_size) {
  FUNC_6(VAR_0, 0);
  return (0);
 }

 if (VAR_9 == VAR_1) {
  VAR_14 = (Elf32_Rel *) VAR_16->d_data.d_buf + VAR_7;

  FUNC_5(VAR_14, VAR_8, VAR_5);

  if (FUNC_3(VAR_8->r_info) > FUNC_1(~0UL) ||
      FUNC_4(VAR_8->r_info) > FUNC_2(~0U)) {
   FUNC_6(VAR_4, 0);
   return (0);
  }
  VAR_14->r_info = FUNC_0(
   (Elf32_Word) FUNC_3(VAR_8->r_info),
   (Elf32_Word) FUNC_4(VAR_8->r_info));
 } else {
  VAR_15 = (Elf64_Rel *) VAR_16->d_data.d_buf + VAR_7;

  *VAR_15 = *VAR_8;

  if (FUNC_7(VAR_10))
   VAR_15->r_info = FUNC_8(VAR_8->r_info);
 }

 return (1);
}
