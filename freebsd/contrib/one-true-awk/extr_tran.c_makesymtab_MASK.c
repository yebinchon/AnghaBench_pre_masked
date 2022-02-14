
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int ** tab; scalar_t__ nelem; } ;
typedef int Cell ;
typedef TYPE_1__ Array ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

Array *FUNC_3(int VAR_0)
{
 Array *VAR_1;
 Cell **VAR_2;

 VAR_1 = (Array *) FUNC_2(sizeof(Array));
 VAR_2 = (Cell **) FUNC_1(VAR_0, sizeof(Cell *));
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  FUNC_0("out of space in makesymtab");
 VAR_1->nelem = 0;
 VAR_1->size = VAR_0;
 VAR_1->tab = VAR_2;
 return(VAR_1);
}
