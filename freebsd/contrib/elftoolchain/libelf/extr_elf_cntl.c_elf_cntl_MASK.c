
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_cmd; int e_fd; scalar_t__ e_parent; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;

int
FUNC_1(Elf *VAR_6, Elf_Cmd VAR_7)
{
 if (VAR_6 == ((void*)0) ||
     (VAR_7 != VAR_2 && VAR_7 != VAR_3)) {
  FUNC_0(VAR_1, 0);
  return (-1);
 }

 if (VAR_6->e_parent) {
  FUNC_0(VAR_0, 0);
  return (-1);
 }

 if (VAR_7 == VAR_3) {
  if (VAR_6->e_cmd == VAR_4) {
   FUNC_0(VAR_5, 0);
   return (-1);
  }
  else
   return (0);
 }

 VAR_6->e_fd = -1;
 return 0;
}
