
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_kind; scalar_t__ e_cmd; unsigned int e_flags; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;

unsigned int
FUNC_1(Elf *VAR_11, Elf_Cmd VAR_12, unsigned int VAR_13)
{
 unsigned int VAR_14;

 if (VAR_11 == ((void*)0))
  return (0);

 if ((VAR_12 != VAR_2 && VAR_12 != VAR_1) ||
     (VAR_11->e_kind != VAR_8) ||
     (VAR_13 & ~(VAR_4 | VAR_5 |
     VAR_6 | VAR_7)) != 0) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 if ((VAR_13 & VAR_5) && (VAR_13 & VAR_4) == 0) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 if ((VAR_13 & VAR_4) && VAR_11->e_cmd != VAR_3) {
  FUNC_0(VAR_10, 0);
  return (0);
 }

 if (VAR_12 == VAR_2)
  VAR_14 = VAR_11->e_flags |= VAR_13;
 else
  VAR_14 = VAR_11->e_flags &= ~VAR_13;
 return (VAR_14 & VAR_9);
}
