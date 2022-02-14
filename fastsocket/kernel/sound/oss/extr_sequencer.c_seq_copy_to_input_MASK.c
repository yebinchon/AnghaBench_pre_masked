
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(unsigned char *VAR_9, int VAR_10)
{
 unsigned long VAR_11;





 if (VAR_10 != 4 && VAR_10 != 8)
  return;
 if ((VAR_8 == VAR_1) != (VAR_10 == 4))
  return;

 if (VAR_3 >= (VAR_2 - 1))
  return;

 FUNC_1(&VAR_6,VAR_11);
 FUNC_0(&VAR_5[VAR_4 * VAR_0], VAR_9, VAR_10);
 VAR_3++;
 VAR_4 = (VAR_4 + 1) % VAR_2;
 FUNC_3(&VAR_7);
 FUNC_2(&VAR_6,VAR_11);
}
