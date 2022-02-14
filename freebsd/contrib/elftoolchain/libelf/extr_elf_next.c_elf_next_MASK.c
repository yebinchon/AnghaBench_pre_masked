
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_5__ {int e_next; } ;
struct TYPE_6__ {TYPE_1__ e_ar; } ;
struct TYPE_7__ {scalar_t__ e_kind; scalar_t__ e_cmd; scalar_t__ e_rawfile; scalar_t__ e_rawsize; TYPE_2__ e_u; struct TYPE_7__* e_parent; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

Elf_Cmd
FUNC_2(Elf *VAR_4)
{
 off_t VAR_5;
 Elf *VAR_6;

 if (VAR_4 == ((void*)0))
  return (VAR_1);

  if ((VAR_6 = VAR_4->e_parent) == ((void*)0)) {
   FUNC_0(VAR_0, 0);
   return (VAR_1);
  }

 FUNC_1(VAR_6->e_kind == VAR_3);
 FUNC_1(VAR_6->e_cmd == VAR_2);
 FUNC_1(VAR_4->e_rawfile > VAR_6->e_rawfile);

 VAR_5 = VAR_4->e_rawfile - VAR_6->e_rawfile + (off_t) VAR_4->e_rawsize;
 VAR_5 = (VAR_5 + 1) & ~1;





 VAR_6->e_u.e_ar.e_next = (VAR_5 >= (off_t) VAR_6->e_rawsize) ?
     (off_t) 0 : VAR_5;

 return (VAR_2);
}
