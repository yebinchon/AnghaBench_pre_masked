
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ e_kind; int e_class; scalar_t__ e_cmd; } ;
struct TYPE_14__ {int sh_info; int sh_link; int sh_type; int sh_name; } ;
struct TYPE_12__ {int sh_info; int sh_link; int sh_type; int sh_name; } ;
struct TYPE_11__ {TYPE_4__ s_shdr32; TYPE_2__ s_shdr64; } ;
struct TYPE_13__ {TYPE_1__ s_shdr; TYPE_5__* s_elf; } ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ Elf_Scn ;
typedef TYPE_4__ Elf32_Shdr ;
typedef TYPE_5__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_3(Elf_Scn *VAR_14, GElf_Shdr *VAR_15)
{
 int VAR_16;
 Elf *VAR_17;
 Elf32_Shdr *VAR_18;


 if (VAR_15 == ((void*)0) || VAR_14 == ((void*)0) || (VAR_17 = VAR_14->s_elf) == ((void*)0) ||
     VAR_17->e_kind != VAR_6 ||
     ((VAR_16 = VAR_17->e_class) != VAR_1 && VAR_16 != VAR_2)) {
  FUNC_1(VAR_0, 0);
  return (0);
 }

 if (VAR_17->e_cmd == VAR_3) {
  FUNC_1(VAR_7, 0);
  return (0);
 }

 (void) FUNC_2(VAR_14, VAR_4, VAR_5);

 if (VAR_16 == VAR_2) {
  VAR_14->s_shdr.s_shdr64 = *VAR_15;
  return (1);
 }

 VAR_18 = &VAR_14->s_shdr.s_shdr32;

 VAR_18->sh_name = VAR_15->sh_name;
 VAR_18->sh_type = VAR_15->sh_type;
 FUNC_0(VAR_18, VAR_15, VAR_11);
 FUNC_0(VAR_18, VAR_15, VAR_8);
 FUNC_0(VAR_18, VAR_15, VAR_12);
 FUNC_0(VAR_18, VAR_15, VAR_13);
 VAR_18->sh_link = VAR_15->sh_link;
 VAR_18->sh_info = VAR_15->sh_info;
 FUNC_0(VAR_18, VAR_15, VAR_9);
 FUNC_0(VAR_18, VAR_15, VAR_10);

 return (1);
}
