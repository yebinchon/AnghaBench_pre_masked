
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int instr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(void)
{




 uint32_t VAR_1[] = {
     0x9de3bfa0,
     0x40000000,
     0x01000000,
     0x81c7e008,
     0x81e80000
 };
 uint32_t *VAR_2 = FUNC_2(sizeof (VAR_1));




 VAR_1[1] |= ((uintptr_t)VAR_0 - (uintptr_t)&VAR_2[1]) >> 2;





 FUNC_0(VAR_1, VAR_2, sizeof (VAR_1));

 (*(int (*)(void))VAR_2)();

 FUNC_1(VAR_2);

 return (0);
}
