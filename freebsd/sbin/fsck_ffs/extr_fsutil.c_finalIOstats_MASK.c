
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__* VAR_8 ;
 int * VAR_9 ;

void
FUNC_3(void)
{
 int VAR_10;

 if (VAR_1 == 0)
  return;
 FUNC_1("Final I/O statistics\n");
 VAR_7 += VAR_2;
 VAR_2 = VAR_7;
 VAR_5 = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  FUNC_2(&VAR_9[VAR_10], &VAR_4[VAR_10], &VAR_9[VAR_10]);
  VAR_8[VAR_10] += VAR_3[VAR_10];
  VAR_4[VAR_10] = VAR_9[VAR_10];
  VAR_3[VAR_10] = VAR_8[VAR_10];
 }
 FUNC_0();
}
