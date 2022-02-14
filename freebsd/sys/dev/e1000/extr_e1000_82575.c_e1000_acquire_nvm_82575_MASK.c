
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct e1000_hw*,int ) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_9)
{
 s32 VAR_10 = VAR_5;

 FUNC_0("e1000_acquire_nvm_82575");

 VAR_10 = FUNC_5(VAR_9, VAR_6);
 if (VAR_10)
  goto out;





 if (VAR_9->mac.type == VAR_8) {
  u32 VAR_11 = FUNC_2(VAR_9, VAR_0);
  if (VAR_11 & (VAR_2 | VAR_1 |
      VAR_4)) {

   FUNC_3(VAR_9, VAR_0, VAR_11 |
     VAR_3);
   FUNC_1("Nvm bit banging access error detected and cleared.\n");
  }
 }

 if (VAR_9->mac.type == VAR_7) {
  u32 VAR_12 = FUNC_2(VAR_9, VAR_0);
  if (VAR_12 & VAR_2) {

   FUNC_3(VAR_9, VAR_0, VAR_12 |
     VAR_2);
   FUNC_1("Nvm bit banging access error detected and cleared.\n");
  }
 }

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  FUNC_6(VAR_9, VAR_6);

out:
 return VAR_10;
}
