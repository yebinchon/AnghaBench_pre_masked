
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {size_t d_size; scalar_t__ d_buf; } ;
struct _Libelf_Data {TYPE_4__ d_data; TYPE_6__* d_scn; } ;
struct TYPE_19__ {int e_class; int e_version; } ;
struct TYPE_18__ {int m_stride; int m_repeat; scalar_t__ m_poffset; scalar_t__ m_info; int m_value; } ;
struct TYPE_13__ {int sh_type; } ;
struct TYPE_12__ {int sh_type; } ;
struct TYPE_14__ {TYPE_2__ s_shdr64; TYPE_1__ s_shdr32; } ;
struct TYPE_17__ {TYPE_3__ s_shdr; TYPE_9__* s_elf; } ;
struct TYPE_16__ {int m_stride; int m_repeat; void* m_poffset; void* m_info; int m_value; } ;
typedef TYPE_5__ GElf_Move ;
typedef TYPE_6__ Elf_Scn ;
typedef int Elf_Data ;
typedef void* Elf64_Xword ;
typedef TYPE_5__ Elf64_Move ;
typedef TYPE_8__ Elf32_Move ;
typedef TYPE_9__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

GElf_Move *
FUNC_4(Elf_Data *VAR_4, int VAR_5, GElf_Move *VAR_6)
{
 int VAR_7;
 Elf *VAR_8;
 size_t VAR_9;
 Elf_Scn *VAR_10;
 uint32_t VAR_11;
 Elf32_Move *VAR_12;
 Elf64_Move *VAR_13;
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
  VAR_11 = VAR_10->s_shdr.s_shdr32.sh_type;
 else
  VAR_11 = VAR_10->s_shdr.s_shdr64.sh_type;

 if (FUNC_2(VAR_11) != VAR_3) {
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

  VAR_12 = (Elf32_Move *) VAR_14->d_data.d_buf + VAR_5;

  VAR_6->m_value = VAR_12->m_value;
  VAR_6->m_info = (Elf64_Xword) VAR_12->m_info;
  VAR_6->m_poffset = (Elf64_Xword) VAR_12->m_poffset;
  VAR_6->m_repeat = VAR_12->m_repeat;
  VAR_6->m_stride = VAR_12->m_stride;
 } else {

  VAR_13 = (Elf64_Move *) VAR_14->d_data.d_buf + VAR_5;

  *VAR_6 = *VAR_13;
 }

 return (VAR_6);
}
