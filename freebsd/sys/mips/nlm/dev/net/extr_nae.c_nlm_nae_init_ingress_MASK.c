
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5 = 384;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 &= ~(0x3 << 1);
 VAR_4 &= ~(0xff << 4);
 VAR_4 &= ~(0x3f << 24);

 VAR_4 |= 1;
 VAR_4 |= (0x0 << 1);
 VAR_4 |= (0x43 & 0x7f) << 24;
 VAR_4 |= ((VAR_3 / 64) & 0xff) << 4;
 FUNC_1(VAR_2, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_0,
     (VAR_5 & 0x3ff) |
     (((VAR_5 / VAR_3) + 1) & 0xff) << 12 |
     (((VAR_5 / 64) % VAR_3) & 0xff) << 20);


}
