
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Cell {int dummy; } ;
typedef int Cell ;


 int FUNC_0 (char*,int) ;
 int ** VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int **,size_t) ;
 int FUNC_3 (int **) ;

void FUNC_4(int VAR_2)
{
 int VAR_3 = 2 * VAR_1;
 size_t VAR_4;

 if (VAR_2 > VAR_3)
  VAR_3 = VAR_2;
 VAR_4 = (VAR_3+1) * (sizeof (struct Cell *));
 if (VAR_4 / sizeof(struct Cell *) - 1 == VAR_3)
  VAR_0 = (Cell **) FUNC_2(VAR_0, VAR_4);
 else
  FUNC_3(VAR_0);
 if (VAR_0 == ((void*)0))
  FUNC_0("out of space creating %d fields", VAR_3);
 FUNC_1(VAR_1+1, VAR_3);
 VAR_1 = VAR_3;
}
