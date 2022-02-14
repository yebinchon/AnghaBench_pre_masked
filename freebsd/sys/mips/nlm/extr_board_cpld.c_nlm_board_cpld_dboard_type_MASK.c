
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(uint64_t VAR_1, int VAR_2)
{
 uint16_t VAR_3;
 int VAR_4 = 0;

 switch (VAR_2) {
 case 0: VAR_4 = 0; break;
 case 1: VAR_4 = 4; break;
 case 2: VAR_4 = 2; break;
 case 3: VAR_4 = 6; break;
 }
 VAR_3 = FUNC_0(VAR_1, VAR_0) >> VAR_4;
 return (VAR_3 & 0x3);
}
