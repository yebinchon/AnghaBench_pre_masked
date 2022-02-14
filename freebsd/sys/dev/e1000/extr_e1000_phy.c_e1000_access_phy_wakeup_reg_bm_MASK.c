
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_5, u32 VAR_6,
       u16 *VAR_7, bool VAR_8, bool VAR_9)
{
 s32 VAR_10;
 u16 VAR_11 = FUNC_0(VAR_6);
 u16 VAR_12 = FUNC_1(VAR_6);
 u16 VAR_13 = 0;

 FUNC_2("e1000_access_phy_wakeup_reg_bm");


 if ((VAR_5->mac.type == VAR_4) &&
    (!(FUNC_6(VAR_5, VAR_2) & VAR_3)))
  FUNC_4("Attempting to access page %d while gig enabled.\n",
     VAR_12);

 if (!VAR_9) {

  VAR_10 = FUNC_8(VAR_5, &VAR_13);
  if (VAR_10) {
   FUNC_3("Could not enable PHY wakeup reg access\n");
   return VAR_10;
  }
 }

 FUNC_5("Accessing PHY page %d reg 0x%x\n", VAR_12, VAR_11);


 VAR_10 = FUNC_10(VAR_5, VAR_0, VAR_11);
 if (VAR_10) {
  FUNC_4("Could not write address opcode to page %d\n", VAR_12);
  return VAR_10;
 }

 if (VAR_8) {

  VAR_10 = FUNC_9(VAR_5, VAR_1,
        VAR_7);
 } else {

  VAR_10 = FUNC_10(VAR_5, VAR_1,
         *VAR_7);
 }

 if (VAR_10) {
  FUNC_5("Could not access PHY reg %d.%d\n", VAR_12, VAR_11);
  return VAR_10;
 }

 if (!VAR_9)
  VAR_10 = FUNC_7(VAR_5, &VAR_13);

 return VAR_10;
}
