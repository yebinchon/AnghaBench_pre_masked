
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* sval; int tval; } ;
typedef TYPE_1__ Cell ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

void FUNC_2(int VAR_4, int VAR_5)
{
 Cell *VAR_6;
 int VAR_7;

 for (VAR_7 = VAR_4; VAR_7 <= VAR_5; VAR_7++) {
  VAR_6 = VAR_3[VAR_7];
  if (FUNC_0(VAR_6))
   FUNC_1(VAR_6->sval);
  VAR_6->sval = "";
  VAR_6->tval = VAR_1 | VAR_2 | VAR_0;
 }
}
