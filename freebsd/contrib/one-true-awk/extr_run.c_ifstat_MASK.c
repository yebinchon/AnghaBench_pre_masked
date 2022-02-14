
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

Cell *FUNC_3(Node **VAR_0, int VAR_1)
{
 Cell *VAR_2;

 VAR_2 = FUNC_0(VAR_0[0]);
 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_2);
  VAR_2 = FUNC_0(VAR_0[1]);
 } else if (VAR_0[2] != ((void*)0)) {
  FUNC_2(VAR_2);
  VAR_2 = FUNC_0(VAR_0[2]);
 }
 return(VAR_2);
}
