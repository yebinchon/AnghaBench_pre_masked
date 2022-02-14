
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;

uint16_t
FUNC_2(uint16_t VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = 2 - VAR_0;
 VAR_1 = FUNC_0(VAR_1, 2 - FUNC_0(VAR_0, VAR_1));
 VAR_1 = FUNC_0(VAR_1, 2 - FUNC_0(VAR_0, VAR_1));
 VAR_1 = FUNC_0(VAR_1, 2 - FUNC_0(VAR_0, VAR_1));
 return FUNC_1(VAR_0 & 1, -VAR_1, 0) & 0x7FFF;
}
