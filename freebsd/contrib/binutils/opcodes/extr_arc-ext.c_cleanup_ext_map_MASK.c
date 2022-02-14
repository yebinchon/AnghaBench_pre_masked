
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct arcExtMap {int dummy; } ;
struct ExtInstruction {struct ExtAuxRegister* name; } ;
struct ExtAuxRegister {int dummy; } ;
struct TYPE_3__ {struct ExtAuxRegister** condCodes; struct ExtAuxRegister** coreRegisters; struct ExtInstruction** instructions; struct ExtAuxRegister* auxRegisters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct ExtAuxRegister*) ;
 int FUNC_1 (struct ExtAuxRegister*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
  struct ExtAuxRegister *VAR_4;
  struct ExtInstruction *VAR_5;
  int VAR_6;


  VAR_4 = VAR_3.auxRegisters;
  if (VAR_4)
    {
      (FUNC_0(VAR_4));
      FUNC_1(VAR_4);
    }


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_5 = VAR_3.instructions[VAR_6];
      if (VAR_5)
 FUNC_1(VAR_5->name);
    }


  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
      if (VAR_3.coreRegisters[VAR_6])
 FUNC_1(VAR_3.coreRegisters[VAR_6]);
    }

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    if (VAR_3.condCodes[VAR_6])
      FUNC_1(VAR_3.condCodes[VAR_6]);
  }

  FUNC_2(&VAR_3, 0, sizeof(struct arcExtMap));
}
