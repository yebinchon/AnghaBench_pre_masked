
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int e_scn; } ;
struct TYPE_13__ {TYPE_1__ e_elf; } ;
struct TYPE_15__ {scalar_t__ e_kind; TYPE_2__ e_u; } ;
struct TYPE_14__ {TYPE_4__* s_elf; } ;
typedef TYPE_3__ Elf_Scn ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int ,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,size_t) ;
 int VAR_2 ;

Elf_Scn *
FUNC_3(Elf *VAR_3, Elf_Scn *VAR_4)
{
 if (VAR_3 == ((void*)0) || (VAR_3->e_kind != VAR_1) ||
     (VAR_4 && VAR_4->s_elf != VAR_3)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 return (VAR_4 == ((void*)0) ? FUNC_2(VAR_3, (size_t) 1) :
     FUNC_1(VAR_2, &VAR_3->e_u.e_elf.e_scn, VAR_4));
}
