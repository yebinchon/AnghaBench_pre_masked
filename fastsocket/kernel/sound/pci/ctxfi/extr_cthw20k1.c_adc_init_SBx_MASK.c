
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hw*,int ) ;
 unsigned int FUNC_1 (struct hw*,int) ;
 int FUNC_2 (struct hw*,int ,int) ;
 int FUNC_3 (struct hw*,int,int) ;
 int FUNC_4 (struct hw*) ;
 scalar_t__ FUNC_5 (struct hw*) ;
 int FUNC_6 (struct hw*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct hw *VAR_2, int VAR_3, int VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;

 VAR_6 = 0x100;
 switch (VAR_3) {
 case 130:
  VAR_7 = 0x1;
  VAR_6 = 0x180;
  break;
 case 131:
  VAR_7 = 0x2;
  break;
 case 128:
  VAR_7 = 0x4;
  break;
 case 132:
  VAR_7 = 0x8;
  break;
 case 129:
  VAR_7 = 0x0;
  VAR_6 = 0x0;
  break;
 default:
  VAR_7 = 0x0;
  break;
 }

 if (FUNC_5(VAR_2))
  return -1;

 do {
  VAR_8 = FUNC_1(VAR_2, 0xEC);
 } while (!(VAR_8 & 0x800000));
 FUNC_3(VAR_2, 0xEC, 0x05);

 FUNC_6(VAR_2, 0x001a0080, 0x0e, 0x08);
 FUNC_6(VAR_2, 0x001a0080, 0x18, 0x0a);
 FUNC_6(VAR_2, 0x001a0080, 0x28, 0x86);
 FUNC_6(VAR_2, 0x001a0080, 0x2a, VAR_7);

 if (VAR_4) {
  FUNC_6(VAR_2, 0x001a0080, 0x1c, 0xf7);
  FUNC_6(VAR_2, 0x001a0080, 0x1e, 0xf7);
 } else {
  FUNC_6(VAR_2, 0x001a0080, 0x1c, 0xcf);
  FUNC_6(VAR_2, 0x001a0080, 0x1e, 0xcf);
 }

 if (!(FUNC_0(VAR_2, VAR_1) & 0x100))
  FUNC_6(VAR_2, 0x001a0080, 0x16, 0x26);

 FUNC_4(VAR_2);

 VAR_5 = (u16)FUNC_0(VAR_2, VAR_0);
 VAR_5 &= 0xfe7f;
 VAR_5 |= VAR_6;
 FUNC_2(VAR_2, VAR_0, VAR_5);

 return 0;
}
