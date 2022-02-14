
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Libelf_Data {unsigned int d_flags; } ;
typedef int Elf_Data ;
typedef scalar_t__ Elf_Cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ) ;

unsigned int
FUNC_1(Elf_Data *VAR_5, Elf_Cmd VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 struct _Libelf_Data *VAR_9;

 if (VAR_5 == ((void*)0))
  return (0);

 if ((VAR_6 != VAR_2 && VAR_6 != VAR_1) ||
     (VAR_7 & ~VAR_3) != 0) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 VAR_9 = (struct _Libelf_Data *) VAR_5;

 if (VAR_6 == VAR_2)
  VAR_8 = VAR_9->d_flags |= VAR_7;
 else
  VAR_8 = VAR_9->d_flags &= ~VAR_7;

 return (VAR_8 & VAR_4);
}
