
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct _Libelf_Data {TYPE_4__* d_scn; } ;
struct TYPE_15__ {int e_class; int e_version; } ;
struct TYPE_14__ {scalar_t__ d_type; size_t d_size; scalar_t__ d_buf; } ;
struct TYPE_11__ {int sh_type; } ;
struct TYPE_10__ {int sh_type; } ;
struct TYPE_12__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_13__ {TYPE_3__ s_shdr; TYPE_6__* s_elf; } ;
typedef int GElf_Sym ;
typedef TYPE_4__ Elf_Scn ;
typedef TYPE_5__ Elf_Data ;
typedef int Elf32_Word ;
typedef TYPE_6__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int,int *) ;

int
FUNC_5(Elf_Data *VAR_4, Elf_Data *VAR_5, int VAR_6, GElf_Sym *VAR_7,
    Elf32_Word VAR_8)
{
 int VAR_9;
 Elf *VAR_10;
 size_t VAR_11;
 Elf_Scn *VAR_12;
 uint32_t VAR_13;
 struct _Libelf_Data *VAR_14, *VAR_15;

 VAR_14 = (struct _Libelf_Data *) VAR_4;
 VAR_15 = (struct _Libelf_Data *) VAR_5;

 if (FUNC_4(VAR_4, VAR_6, VAR_7) == 0)
  return (0);

 if (VAR_15 == ((void*)0) || (VAR_12 = VAR_15->d_scn) == ((void*)0) ||
     (VAR_10 = VAR_12->s_elf) == ((void*)0) || (VAR_10 != VAR_14->d_scn->s_elf)) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 VAR_9 = VAR_10->e_class;
 FUNC_3(VAR_9 == VAR_1 || VAR_9 == VAR_2);

 if (VAR_9 == VAR_1)
  VAR_13 = VAR_12->s_shdr.s_shdr32.sh_type;
 else
  VAR_13 = VAR_12->s_shdr.s_shdr64.sh_type;

 if (FUNC_2(VAR_13) != VAR_3 ||
     VAR_4->d_type != VAR_3) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 VAR_11 = FUNC_1(VAR_3, VAR_9, VAR_10->e_version);

 FUNC_3(VAR_11 > 0);
 FUNC_3(VAR_6 >= 0);

 if (VAR_11 * (size_t) VAR_6 >= VAR_5->d_size) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 *(((Elf32_Word *) VAR_5->d_buf) + VAR_6) = VAR_8;

 return (1);
}
