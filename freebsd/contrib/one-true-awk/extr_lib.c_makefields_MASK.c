
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Cell {int dummy; } ;
struct TYPE_4__ {int nval; } ;
typedef TYPE_1__ Cell ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(int VAR_2, int VAR_3)
{
 char VAR_4[50];
 int VAR_5;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
  VAR_1[VAR_5] = (Cell *) FUNC_1(sizeof (struct Cell));
  if (VAR_1[VAR_5] == ((void*)0))
   FUNC_0("out of space in makefields %d", VAR_5);
  *VAR_1[VAR_5] = VAR_0;
  FUNC_2(VAR_4, "%d", VAR_5);
  VAR_1[VAR_5]->nval = FUNC_3(VAR_4);
 }
}
