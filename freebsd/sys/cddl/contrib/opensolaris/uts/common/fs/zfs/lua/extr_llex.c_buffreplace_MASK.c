
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buff; } ;
typedef TYPE_1__ LexState ;


 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_0, char VAR_1, char VAR_2) {
  size_t VAR_3 = FUNC_1(VAR_0->buff);
  char *VAR_4 = FUNC_0(VAR_0->buff);
  while (VAR_3--)
    if (VAR_4[VAR_3] == VAR_1) VAR_4[VAR_3] = VAR_2;
}
