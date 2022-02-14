
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_1__ phy; TYPE_2__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_13)
{
 s32 VAR_14 = VAR_11;
 u32 VAR_15 = VAR_6;

 FUNC_0("e1000_get_cfg_done_82575");

 if (VAR_13->bus.func == VAR_3)
  VAR_15 = VAR_7;
 else if (VAR_13->bus.func == VAR_4)
  VAR_15 = VAR_8;
 else if (VAR_13->bus.func == VAR_5)
  VAR_15 = VAR_9;
 while (VAR_14) {
  if (FUNC_2(VAR_13, VAR_2) & VAR_15)
   break;
  FUNC_4(1);
  VAR_14--;
 }
 if (!VAR_14)
  FUNC_1("MNG configuration cycle has not completed.\n");


 if (!(FUNC_2(VAR_13, VAR_0) & VAR_1) &&
     (VAR_13->phy.type == VAR_12))
  FUNC_3(VAR_13);

 return VAR_10;
}
