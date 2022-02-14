
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int e_scn; } ;
struct TYPE_6__ {TYPE_1__ e_elf; } ;
struct TYPE_7__ {scalar_t__ e_kind; TYPE_2__ e_u; } ;
typedef int Elf_Kind ;
typedef TYPE_3__ Elf ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

void
FUNC_2(Elf *VAR_1, Elf_Kind VAR_2)
{
 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_1->e_kind == VAR_0);

 VAR_1->e_kind = VAR_2;

 switch (VAR_2) {
 case 128:
  FUNC_0(&VAR_1->e_u.e_elf.e_scn);
  break;
 default:
  break;
 }
}
