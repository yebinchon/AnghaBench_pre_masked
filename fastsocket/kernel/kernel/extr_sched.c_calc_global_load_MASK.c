
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_0 (int *) ;
 int * VAR_5 ;
 int FUNC_1 (int ,int ,long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;

void FUNC_3(void)
{
 unsigned long VAR_9 = VAR_7 + 10;
 long VAR_10;

 if (FUNC_2(VAR_8, VAR_9))
  return;

 VAR_10 = FUNC_0(&VAR_6);
 VAR_10 = VAR_10 > 0 ? VAR_10 * VAR_3 : 0;

 VAR_5[0] = FUNC_1(VAR_5[0], VAR_0, VAR_10);
 VAR_5[1] = FUNC_1(VAR_5[1], VAR_2, VAR_10);
 VAR_5[2] = FUNC_1(VAR_5[2], VAR_1, VAR_10);

 VAR_7 += VAR_4;
}
