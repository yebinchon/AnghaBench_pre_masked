
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int instr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(void)
{




 uint8_t VAR_1[] = {
     0x55,
     0x8b, 0xec,
     0xe8, 0x0, 0x0, 0x0, 0x0,
     0x8b, 0xe5,
     0x5d,
     0xc3
 };
 uint8_t *VAR_2 = FUNC_2(sizeof (VAR_1));




 *((int *)&VAR_1[4]) = (uintptr_t)VAR_0 - (uintptr_t)&VAR_2[8];





 FUNC_0(VAR_1, VAR_2, sizeof (VAR_1));

 (*(int (*)(void))VAR_2)();

 FUNC_1(VAR_2);

 return (0);
}
