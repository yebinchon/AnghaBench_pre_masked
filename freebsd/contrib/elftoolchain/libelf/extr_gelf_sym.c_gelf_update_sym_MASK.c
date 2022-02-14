
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_4__ d_data; TYPE_6__* d_scn; } ;
struct TYPE_20__ {int e_class; int e_version; } ;
struct TYPE_19__ {int st_shndx; int st_other; int st_info; int st_name; } ;
struct TYPE_14__ {int sh_type; } ;
struct TYPE_13__ {int sh_type; } ;
struct TYPE_15__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_18__ {TYPE_3__ s_shdr; TYPE_9__* s_elf; } ;
struct TYPE_17__ {int st_shndx; int st_other; int st_info; int st_name; } ;
typedef TYPE_5__ GElf_Sym ;
typedef TYPE_6__ Elf_Scn ;
typedef int Elf_Data ;
typedef TYPE_5__ Elf64_Sym ;
typedef TYPE_8__ Elf32_Sym ;
typedef TYPE_9__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_8__*,TYPE_5__*,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_5(Elf_Data *VAR_6, int VAR_7, GElf_Sym *VAR_8)
{
 int VAR_9;
 Elf *VAR_10;
 size_t VAR_11;
 Elf_Scn *VAR_12;
 uint32_t VAR_13;
 Elf32_Sym *VAR_14;
 Elf64_Sym *VAR_15;
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
  VAR_13 = VAR_12->s_shdr.s_shdr32.sh_type;
 else
  VAR_13 = VAR_12->s_shdr.s_shdr64.sh_type;

 if (FUNC_3(VAR_13) != VAR_3) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 VAR_11 = FUNC_2(VAR_3, VAR_9, VAR_10->e_version);

 FUNC_4(VAR_11 > 0);
 FUNC_4(VAR_7 >= 0);

 if (VAR_11 * (size_t) VAR_7 >= VAR_16->d_data.d_size) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 if (VAR_9 == VAR_1) {
  VAR_14 = (Elf32_Sym *) VAR_16->d_data.d_buf + VAR_7;

  VAR_14->st_name = VAR_8->st_name;
  VAR_14->st_info = VAR_8->st_info;
  VAR_14->st_other = VAR_8->st_other;
  VAR_14->st_shndx = VAR_8->st_shndx;

  FUNC_0(VAR_14, VAR_8, VAR_5);
  FUNC_0(VAR_14, VAR_8, VAR_4);
 } else {
  VAR_15 = (Elf64_Sym *) VAR_16->d_data.d_buf + VAR_7;

  *VAR_15 = *VAR_8;
 }

 return (1);
}
