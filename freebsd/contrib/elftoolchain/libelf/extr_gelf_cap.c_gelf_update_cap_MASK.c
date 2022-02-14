
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_4__ d_data; TYPE_5__* d_scn; } ;
struct TYPE_14__ {int c_val; } ;
struct TYPE_13__ {int e_class; int e_version; } ;
struct TYPE_9__ {int sh_type; } ;
struct TYPE_8__ {int sh_type; } ;
struct TYPE_10__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_12__ {TYPE_3__ s_shdr; TYPE_6__* s_elf; } ;
typedef int GElf_Cap ;
typedef TYPE_5__ Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf64_Cap ;
typedef int Elf32_Cap ;
typedef TYPE_6__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 TYPE_7__ VAR_5 ;

int
FUNC_5(Elf_Data *VAR_6, int VAR_7, GElf_Cap *VAR_8)
{
 int VAR_9;
 Elf *VAR_10;
 size_t VAR_11;
 Elf_Scn *VAR_12;
 Elf32_Cap *VAR_13;
 Elf64_Cap *VAR_14;
 uint32_t VAR_15;
 struct _Libelf_Data *VAR_16;

 VAR_16 = (struct _Libelf_Data *) VAR_6;

 if (VAR_16 == ((void*)0) || VAR_7 < 0 || VAR_8 == ((void*)0) ||
     (VAR_12 = VAR_16->d_scn) == ((void*)0) ||
     (VAR_10 = VAR_12->s_elf) == ((void*)0)) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 VAR_9 = VAR_10->e_class;
 FUNC_4(VAR_9 == VAR_1 || VAR_9 == VAR_2);

 if (VAR_9 == VAR_1)
  VAR_15 = VAR_12->s_shdr.s_shdr32.sh_type;
 else
  VAR_15 = VAR_12->s_shdr.s_shdr64.sh_type;

 if (FUNC_3(VAR_15) != VAR_3) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 VAR_11 = FUNC_2(VAR_3, VAR_9, VAR_10->e_version);
 FUNC_4(VAR_11 > 0);

 if (VAR_11 * (size_t) VAR_7 >= VAR_16->d_data.d_size) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 if (VAR_9 == VAR_1) {
  VAR_13 = (Elf32_Cap *) VAR_16->d_data.d_buf + VAR_7;

  FUNC_0(VAR_13, VAR_8, VAR_4);
  FUNC_0(VAR_13, VAR_8, VAR_5.c_val);
 } else {
  VAR_14 = (Elf64_Cap *) VAR_16->d_data.d_buf + VAR_7;

  *VAR_14 = *VAR_8;
 }

 return (1);
}
