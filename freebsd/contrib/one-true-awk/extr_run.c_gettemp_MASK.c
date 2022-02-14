
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cnext; } ;
typedef TYPE_1__ Cell ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__* VAR_1 ;

Cell *FUNC_2(void)
{ int VAR_2;
 Cell *VAR_3;

 if (!VAR_1) {
  VAR_1 = (Cell *) FUNC_1(100, sizeof(Cell));
  if (!VAR_1)
   FUNC_0("out of space for temporaries");
  for(VAR_2 = 1; VAR_2 < 100; VAR_2++)
   VAR_1[VAR_2-1].cnext = &VAR_1[VAR_2];
  VAR_1[VAR_2-1].cnext = ((void*)0);
 }
 VAR_3 = VAR_1;
 VAR_1 = VAR_3->cnext;
 *VAR_3 = VAR_0;
 return(VAR_3);
}
