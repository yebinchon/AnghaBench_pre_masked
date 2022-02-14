
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t
FUNC_0(void)
{
 uint64_t VAR_4 = 0;

 VAR_4 |= 0x8086 << 16;
 VAR_4 |= (VAR_3 - 1) << 8;
 VAR_4 |= 1;
 VAR_4 &= ~VAR_1;

 VAR_4 &= 0xffffffff;
 VAR_4 |= (VAR_0 / VAR_2) << 32;

 return (VAR_4);
}
