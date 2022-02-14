
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_21__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_6__ d_data; TYPE_8__* d_scn; } ;
struct TYPE_17__ {int sh_type; } ;
struct TYPE_16__ {int sh_type; } ;
struct TYPE_18__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_23__ {TYPE_3__ s_shdr; TYPE_11__* s_elf; } ;
struct TYPE_19__ {scalar_t__ d_val; } ;
struct TYPE_22__ {TYPE_4__ d_un; int d_tag; } ;
struct TYPE_20__ {scalar_t__ d_val; } ;
struct TYPE_15__ {int e_class; int e_version; } ;
struct TYPE_14__ {TYPE_5__ d_un; int d_tag; } ;
typedef TYPE_7__ GElf_Dyn ;
typedef TYPE_8__ Elf_Scn ;
typedef int Elf_Data ;
typedef scalar_t__ Elf64_Xword ;
typedef TYPE_7__ Elf64_Dyn ;
typedef TYPE_10__ Elf32_Dyn ;
typedef TYPE_11__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

GElf_Dyn *
FUNC_4(Elf_Data *VAR_4, int VAR_5, GElf_Dyn *VAR_6)
{
 int VAR_7;
 Elf *VAR_8;
 size_t VAR_9;
 Elf_Scn *VAR_10;
 Elf32_Dyn *VAR_11;
 Elf64_Dyn *VAR_12;
 uint32_t VAR_13;
 struct _Libelf_Data *VAR_14;

 VAR_14 = (struct _Libelf_Data *) VAR_4;

 if (VAR_14 == ((void*)0) || VAR_5 < 0 || VAR_6 == ((void*)0) ||
     (VAR_10 = VAR_14->d_scn) == ((void*)0) ||
     (VAR_8 = VAR_10->s_elf) == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 VAR_7 = VAR_8->e_class;
 FUNC_3(VAR_7 == VAR_1 || VAR_7 == VAR_2);

 if (VAR_7 == VAR_1)
  VAR_13 = VAR_10->s_shdr.s_shdr32.sh_type;
 else
  VAR_13 = VAR_10->s_shdr.s_shdr64.sh_type;

 if (FUNC_2(VAR_13) != VAR_3) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 VAR_9 = FUNC_1(VAR_3, VAR_7, VAR_8->e_version);

 FUNC_3(VAR_9 > 0);
 FUNC_3(VAR_5 >= 0);

 if (VAR_9 * (size_t) VAR_5 >= VAR_14->d_data.d_size) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_7 == VAR_1) {
  VAR_11 = (Elf32_Dyn *) VAR_14->d_data.d_buf + VAR_5;

  VAR_6->d_tag = VAR_11->d_tag;
  VAR_6->d_un.d_val = (Elf64_Xword) VAR_11->d_un.d_val;

 } else {

  VAR_12 = (Elf64_Dyn *) VAR_14->d_data.d_buf + VAR_5;

  *VAR_6 = *VAR_12;
 }

 return (VAR_6);
}
