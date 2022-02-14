
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {unsigned int address_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct emu_sc_info*,int ,int) ;
 int FUNC_3 (struct emu_sc_info*,int ,int,int) ;

uint32_t
FUNC_4(struct emu_sc_info *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = ((VAR_5 << 16) & VAR_3->address_mask) | (VAR_4 & VAR_2);

 FUNC_0();
 FUNC_3(VAR_3, VAR_1, VAR_6, 4);
 VAR_7 = FUNC_2(VAR_3, VAR_0, 4);
 FUNC_1();






 if (VAR_5 & 0xff000000) {
  VAR_9 = (VAR_5 >> 24) & 0x3f;
  VAR_10 = (VAR_5 >> 16) & 0x1f;
  VAR_8 = ((1 << VAR_9) - 1) << VAR_10;
  VAR_7 &= VAR_8;
  VAR_7 >>= VAR_10;
 }
 return (VAR_7);
}
