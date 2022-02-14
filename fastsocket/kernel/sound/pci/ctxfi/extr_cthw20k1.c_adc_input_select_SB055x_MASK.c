
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;






 int VAR_0 ;
 int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct hw *VAR_1, enum ADCSRC VAR_2, unsigned char VAR_3)
{
 u32 VAR_4;
 VAR_4 = FUNC_0(VAR_1, VAR_0);
 VAR_4 &= 0xec73;
 switch (VAR_2) {
 case 129:
  VAR_4 |= (0x1<<7) | (0x1<<8) | (0x1<<9) ;
  VAR_4 |= VAR_3 ? (0x1<<2) : 0;
  break;
 case 130:
  VAR_4 |= (0x1<<8);
  break;
 case 131:
  VAR_4 |= (0x1<<8) | (0x1<<12);
  break;
 case 128:
  VAR_4 |= (0x1<<12);
  break;
 default:
  return -1;
 }

 FUNC_1(VAR_1, VAR_0, VAR_4);

 return 0;
}
