
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;
typedef int FuncState ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (FuncState *VAR_3, int VAR_4, int VAR_5) {
  Instruction *VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (FUNC_3(*VAR_6) != VAR_2)
    return 0;
  if (VAR_5 != VAR_0 && VAR_5 != FUNC_1(*VAR_6))
    FUNC_4(*VAR_6, VAR_5);
  else {


    *VAR_6 = FUNC_0(VAR_1, FUNC_1(*VAR_6), 0, FUNC_2(*VAR_6));
  }
  return 1;
}
