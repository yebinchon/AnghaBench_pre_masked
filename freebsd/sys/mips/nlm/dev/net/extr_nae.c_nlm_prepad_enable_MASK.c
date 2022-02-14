
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 |= (1 << 13);
 VAR_3 |= ((VAR_2 & 0x3) << 22);
 FUNC_1(VAR_1, VAR_0, VAR_3);
}
