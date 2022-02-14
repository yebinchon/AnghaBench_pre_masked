
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int func; } ;
struct e1000_hw {TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_6)
{
 s32 VAR_7 = VAR_5;
 u32 VAR_8 = VAR_2;

 FUNC_0("e1000_get_cfg_done_80003es2lan");

 if (VAR_6->bus.func == 1)
  VAR_8 = VAR_3;

 while (VAR_7) {
  if (FUNC_2(VAR_6, VAR_0) & VAR_8)
   break;
  FUNC_3(1);
  VAR_7--;
 }
 if (!VAR_7) {
  FUNC_1("MNG configuration cycle has not completed.\n");
  return -VAR_1;
 }

 return VAR_4;
}
