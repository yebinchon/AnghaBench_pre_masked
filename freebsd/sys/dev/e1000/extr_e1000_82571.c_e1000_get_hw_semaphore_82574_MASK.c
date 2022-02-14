
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32
FUNC_7(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 s32 VAR_7 = 0;

 FUNC_1("e1000_get_hw_semaphore_82573");

 FUNC_0(VAR_5);
 VAR_6 = FUNC_3(VAR_5, VAR_1);
 do {
  VAR_6 |= VAR_2;
  FUNC_4(VAR_5, VAR_1, VAR_6);
  VAR_6 = FUNC_3(VAR_5, VAR_1);

  if (VAR_6 & VAR_2)
   break;

  FUNC_6(2);
  VAR_7++;
 } while (VAR_7 < VAR_4);

 if (VAR_7 == VAR_4) {

  FUNC_5(VAR_5);
  FUNC_2("Driver can't access the PHY\n");
  return -VAR_0;
 }

 return VAR_3;
}
