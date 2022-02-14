
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* e_phdr32; TYPE_4__* e_phdr64; } ;
struct TYPE_16__ {TYPE_1__ e_phdr; } ;
struct TYPE_17__ {TYPE_2__ e_elf; } ;
struct TYPE_20__ {scalar_t__ e_kind; int e_class; scalar_t__ e_cmd; TYPE_3__ e_u; } ;
struct TYPE_19__ {int p_flags; int p_type; } ;
struct TYPE_18__ {int p_flags; int p_type; } ;
typedef TYPE_4__ GElf_Phdr ;
typedef TYPE_4__ Elf64_Phdr ;
typedef TYPE_6__ Elf32_Phdr ;
typedef TYPE_7__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*,TYPE_4__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 void* FUNC_2 (TYPE_7__*,int,int ) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,size_t*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_5(Elf *VAR_14, int VAR_15, GElf_Phdr *VAR_16)
{
 int VAR_17;
 size_t VAR_18;
 void *VAR_19;
 Elf32_Phdr *VAR_20;
 Elf64_Phdr *VAR_21;

 if (VAR_16 == ((void*)0) || VAR_14 == ((void*)0) || VAR_14->e_kind != VAR_6 ||
     ((VAR_17 = VAR_14->e_class) != VAR_1 && VAR_17 != VAR_2) ||
     FUNC_4(VAR_14, &VAR_18) < 0) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 if (VAR_14->e_cmd == VAR_3) {
  FUNC_1(VAR_7, 0);
  return (0);
 }

 if ((VAR_19 = FUNC_2(VAR_14, VAR_17, 0)) == ((void*)0))
  return (0);

 if (VAR_15 < 0 || (size_t)VAR_15 > VAR_18) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 (void) FUNC_3(VAR_14, VAR_4, VAR_5);

 if (VAR_17 == VAR_2) {
  VAR_21 = VAR_14->e_u.e_elf.e_phdr.e_phdr64 + VAR_15;
  *VAR_21 = *VAR_16;
  return (1);
 }

 VAR_20 = VAR_14->e_u.e_elf.e_phdr.e_phdr32 + VAR_15;

 VAR_20->p_type = VAR_16->p_type;
 VAR_20->p_flags = VAR_16->p_flags;
 FUNC_0(VAR_20, VAR_16, VAR_11);
 FUNC_0(VAR_20, VAR_16, VAR_13);
 FUNC_0(VAR_20, VAR_16, VAR_12);
 FUNC_0(VAR_20, VAR_16, VAR_9);
 FUNC_0(VAR_20, VAR_16, VAR_10);
 FUNC_0(VAR_20, VAR_16, VAR_8);

 return (1);
}
