
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

void
FUNC_1(uint64_t VAR_1, int VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = ((VAR_3 & 0x3f) << 21) |
     ((VAR_4 & 0xf) << 17) |
     ((VAR_5 & 0x3f) << 11) |
     (VAR_6 & 0xf);
 FUNC_0(VAR_1, (VAR_0 + ((VAR_2 * 2) + 1)), VAR_7);
}
