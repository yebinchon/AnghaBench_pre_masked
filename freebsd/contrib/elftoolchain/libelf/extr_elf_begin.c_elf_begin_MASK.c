
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int e_fd; int e_cmd; scalar_t__ e_kind; int e_activations; } ;
typedef int Elf_Cmd ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int,int) ;
 int VAR_4 ;

Elf *
FUNC_4(int VAR_5, Elf_Cmd VAR_6, Elf *VAR_7)
{
 Elf *VAR_8;

 VAR_8 = ((void*)0);

 if (FUNC_0(VAR_4) == VAR_2) {
  FUNC_1(VAR_3, 0);
  return (((void*)0));
 }

 switch (VAR_6) {
 case 131:
  return (((void*)0));

 case 128:




  VAR_7 = ((void*)0);
  break;

 case 130:
  if (VAR_7 != ((void*)0)) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }

 case 129:






  if (VAR_7 &&
      ((VAR_7->e_fd != -1 && VAR_7->e_fd != VAR_5) || VAR_6 != VAR_7->e_cmd)) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }
  break;

 default:
  FUNC_1(VAR_0, 0);
  return (((void*)0));

 }

 if (VAR_7 == ((void*)0))
  VAR_8 = FUNC_3(VAR_5, VAR_6, 1);
 else if (VAR_7->e_kind == VAR_1)
  VAR_8 = FUNC_2(VAR_7->e_fd, VAR_6, VAR_7);
 else
  (VAR_8 = VAR_7)->e_activations++;

 return (VAR_8);
}
