
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;




 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hw*,int ,int ) ;
 int FUNC_3 (struct hw*,int ) ;
 int FUNC_4 (struct hw*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hw *VAR_4, enum ADCSRC VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 switch (VAR_5) {
 case 128:
  VAR_6 |= (0x1 << 14);
  FUNC_4(VAR_4, VAR_0, VAR_6);
  FUNC_2(VAR_4, FUNC_0(VAR_3, 0x101),
    FUNC_1(0x101));
  FUNC_2(VAR_4, FUNC_0(VAR_1, 0xE7),
    FUNC_1(0xE7));
  FUNC_2(VAR_4, FUNC_0(VAR_2, 0xE7),
    FUNC_1(0xE7));
  break;
 case 129:
  VAR_6 &= ~(0x1 << 14);
  FUNC_4(VAR_4, VAR_0, VAR_6);
  FUNC_2(VAR_4, FUNC_0(VAR_3, 0x102),
    FUNC_1(0x102));
  FUNC_2(VAR_4, FUNC_0(VAR_1, 0xCF),
    FUNC_1(0xCF));
  FUNC_2(VAR_4, FUNC_0(VAR_2, 0xCF),
    FUNC_1(0xCF));
  break;
 default:
  break;
 }

 return 0;
}
