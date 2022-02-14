
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
struct TYPE_19__ {int r_info; scalar_t__ r_offset; } ;
struct TYPE_14__ {int sh_type; } ;
struct TYPE_13__ {int sh_type; } ;
struct TYPE_15__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_18__ {TYPE_3__ s_shdr; TYPE_9__* s_elf; } ;
struct TYPE_17__ {int r_info; scalar_t__ r_offset; } ;
typedef TYPE_5__ GElf_Rel ;
typedef TYPE_6__ Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf64_Xword ;
typedef TYPE_5__ Elf64_Rel ;
typedef scalar_t__ Elf64_Addr ;
typedef TYPE_8__ Elf32_Rel ;
typedef TYPE_9__ Elf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;

GElf_Rel *
FUNC_9(Elf_Data *VAR_4, int VAR_5, GElf_Rel *VAR_6)
{
 int VAR_7;
 Elf *VAR_8;
 size_t VAR_9;
 Elf_Scn *VAR_10;
 uint32_t VAR_11;
 Elf32_Rel *VAR_12;
 Elf64_Rel *VAR_13;
 struct _Libelf_Data *VAR_14;

 VAR_14 = (struct _Libelf_Data *) VAR_4;

 if (VAR_14 == ((void*)0) || VAR_5 < 0 || VAR_6 == ((void*)0) ||
     (VAR_10 = VAR_14->d_scn) == ((void*)0) ||
     (VAR_8 = VAR_10->s_elf) == ((void*)0)) {
  FUNC_3(VAR_0, 0);
  return (((void*)0));
 }

 VAR_7 = VAR_8->e_class;
 FUNC_8(VAR_7 == VAR_1 || VAR_7 == VAR_2);

 if (VAR_7 == VAR_1)
  VAR_11 = VAR_10->s_shdr.s_shdr32.sh_type;
 else
  VAR_11 = VAR_10->s_shdr.s_shdr64.sh_type;

 if (FUNC_7(VAR_11) != VAR_3) {
  FUNC_3(VAR_0, 0);
  return (((void*)0));
 }

 VAR_9 = FUNC_6(VAR_3, VAR_7, VAR_8->e_version);

 FUNC_8(VAR_9 > 0);
 FUNC_8(VAR_5 >= 0);

 if (VAR_9 * (size_t) VAR_5 >= VAR_14->d_data.d_size) {
  FUNC_3(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_7 == VAR_1) {
  VAR_12 = (Elf32_Rel *) VAR_14->d_data.d_buf + VAR_5;

  VAR_6->r_offset = (Elf64_Addr) VAR_12->r_offset;
  VAR_6->r_info = FUNC_2(
      (Elf64_Xword) FUNC_0(VAR_12->r_info),
      FUNC_1(VAR_12->r_info));

 } else {

  VAR_13 = (Elf64_Rel *) VAR_14->d_data.d_buf + VAR_5;

  *VAR_6 = *VAR_13;

  if (FUNC_4(VAR_8))
   VAR_6->r_info = FUNC_5(VAR_13->r_info);
 }

 return (VAR_6);
}
