
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ e_kind; int e_class; } ;
struct TYPE_4__ {int s_shdr; TYPE_2__* s_elf; } ;
typedef TYPE_1__ Elf_Scn ;
typedef TYPE_2__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;

void *
FUNC_1(Elf_Scn *VAR_4, int VAR_5)
{
 Elf *VAR_6;

 if (VAR_4 == ((void*)0) || (VAR_6 = VAR_4->s_elf) == ((void*)0) ||
     VAR_6->e_kind != VAR_3) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if (VAR_5 == VAR_2)
  VAR_5 = VAR_6->e_class;

 if (VAR_5 != VAR_6->e_class) {
  FUNC_0(VAR_1, 0);
  return (((void*)0));
 }

 return ((void *) &VAR_4->s_shdr);
}
