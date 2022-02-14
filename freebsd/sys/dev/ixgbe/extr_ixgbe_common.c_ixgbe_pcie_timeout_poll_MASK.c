
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s16 ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct ixgbe_hw *VAR_2)
{
 s16 VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 &= VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_4 = 1300;
  break;
 case 131:
  VAR_4 = 5200;
  break;
 case 132:
  VAR_4 = 20000;
  break;
 case 130:
  VAR_4 = 80000;
  break;
 case 134:
  VAR_4 = 34000;
  break;
 case 129:
 case 133:
 case 136:
 case 135:
 default:
  VAR_4 = 800;
  break;
 }


 return (VAR_4 * 11) / 10;
}
