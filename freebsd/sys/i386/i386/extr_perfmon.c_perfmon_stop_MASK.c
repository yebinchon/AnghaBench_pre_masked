
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(int VAR_8)
{
 register_t VAR_9;

 if (VAR_8 < 0 || VAR_8 >= VAR_2)
  return VAR_1;

 if (VAR_6 & (1 << VAR_8)) {
  VAR_9 = FUNC_0();
  VAR_7[VAR_8] = FUNC_2(VAR_5[VAR_8]) & 0xffffffffffULL;
  VAR_4[VAR_8] &= ~(VAR_3 << 16);
  FUNC_3(VAR_8);
  FUNC_1(VAR_9);
  return 0;
 }
 return VAR_0;
}
