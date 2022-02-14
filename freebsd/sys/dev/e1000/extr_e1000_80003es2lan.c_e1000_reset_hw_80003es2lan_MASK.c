
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int *) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_9)
{
 u32 VAR_10;
 s32 VAR_11;
 u16 VAR_12;

 FUNC_0("e1000_reset_hw_80003es2lan");




 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11)
  FUNC_1("PCI-E Master disable polling has failed.\n");

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_9, VAR_3, 0xffffffff);

 FUNC_4(VAR_9, VAR_6, 0);
 FUNC_4(VAR_9, VAR_7, VAR_8);
 FUNC_3(VAR_9);

 FUNC_12(10);

 VAR_10 = FUNC_2(VAR_9, VAR_0);

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_1("Issuing a global reset to MAC\n");
 FUNC_4(VAR_9, VAR_0, VAR_10 | VAR_1);
 FUNC_10(VAR_9);


 VAR_11 = FUNC_9(VAR_9,
    VAR_5, &VAR_12);
 if (!VAR_11) {
  VAR_12 |= VAR_4;
  VAR_11 = FUNC_11(VAR_9,
       VAR_5,
       VAR_12);
  if (VAR_11)
   FUNC_1("Error disabling far-end loopback\n");
 } else
  FUNC_1("Error disabling far-end loopback\n");

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)

  return VAR_11;


 FUNC_4(VAR_9, VAR_3, 0xffffffff);
 FUNC_2(VAR_9, VAR_2);

 return FUNC_6(VAR_9);
}
