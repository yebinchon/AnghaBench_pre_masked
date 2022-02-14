
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int,int) ;

size_t
FUNC_4(uint64_t VAR_0, uint32_t VAR_1,
    uint32_t VAR_2)
{
 uint64_t VAR_3, VAR_4;

 FUNC_0(VAR_0 > 0);
 FUNC_0(VAR_1 > 0);
 FUNC_0(FUNC_2(VAR_1));
 FUNC_0(VAR_2 > 0);
 FUNC_0(FUNC_2(VAR_2));

 VAR_3 = ((VAR_0 - 1) / VAR_1) + 1;
 VAR_4 = FUNC_1(VAR_3);
 return (FUNC_3(VAR_4, VAR_2));
}
