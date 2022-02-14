
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int register_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int* VAR_3 ;

uint64_t
FUNC_3(void)
{
 uint64_t VAR_4;
 uint32_t VAR_5, VAR_6;
 register_t VAR_7;







 VAR_7 = FUNC_0();
 VAR_4 = FUNC_2() - VAR_3[VAR_1];
 FUNC_1(VAR_7);

 VAR_5 = VAR_4;
 VAR_6 = VAR_4 >> 32;
 return (((VAR_5 * VAR_2) >> VAR_0) +
     ((VAR_6 * VAR_2) << (32 - VAR_0)));
}
