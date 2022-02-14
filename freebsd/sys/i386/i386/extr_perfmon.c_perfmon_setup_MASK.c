
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

int
FUNC_4(int VAR_7, unsigned int VAR_8)
{
 register_t VAR_9;

 if (VAR_7 < 0 || VAR_7 >= VAR_1)
  return VAR_0;

 VAR_5 |= (1 << VAR_7);
 VAR_8 &= ~(VAR_2 << 16);
 VAR_9 = FUNC_0();
 VAR_3[VAR_7] = VAR_8;
 FUNC_2(VAR_7);
 FUNC_3(VAR_4[VAR_7], VAR_6[VAR_7] = 0);
 FUNC_1(VAR_9);
 return 0;
}
