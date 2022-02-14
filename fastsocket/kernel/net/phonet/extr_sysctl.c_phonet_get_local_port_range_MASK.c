
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

void FUNC_2(int *VAR_2, int *VAR_3)
{
 unsigned VAR_4;
 do {
  VAR_4 = FUNC_0(&VAR_1);
  if (VAR_2)
   *VAR_2 = VAR_0[0];
  if (VAR_3)
   *VAR_3 = VAR_0[1];
 } while (FUNC_1(&VAR_1, VAR_4));
}
