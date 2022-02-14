
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_1 ()
{
 int VAR_12;

 VAR_6 = VAR_7 + 1;

 ++VAR_11;

 while (VAR_11 + VAR_8 >= VAR_2)
  FUNC_0 ();


 VAR_10[VAR_11] = VAR_4;
 VAR_1[VAR_11] = VAR_6;

 for (VAR_12 = 1; VAR_12 <= VAR_8; ++VAR_12) {
  VAR_10[VAR_11 + VAR_12] = 0;
  VAR_1[VAR_11 + VAR_12] = VAR_6;
 }

 VAR_5 = VAR_11;

 VAR_0[VAR_6] = VAR_5;
 VAR_3[VAR_6] = 0;

 VAR_11 += VAR_8;
 ++VAR_9;
}
