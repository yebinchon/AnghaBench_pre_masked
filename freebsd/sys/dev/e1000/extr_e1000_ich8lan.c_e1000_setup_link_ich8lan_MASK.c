
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ requested_mode; scalar_t__ current_mode; int pause_time; int refresh_time; } ;
struct TYPE_8__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ (* setup_physical_interface ) (struct e1000_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_5__ fc; TYPE_4__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_10)
{
 s32 VAR_11;

 FUNC_0("e1000_setup_link_ich8lan");

 if (VAR_10->phy.ops.check_reset_block(VAR_10))
  return VAR_3;





 if (VAR_10->fc.requested_mode == VAR_4)
  VAR_10->fc.requested_mode = VAR_5;




 VAR_10->fc.current_mode = VAR_10->fc.requested_mode;

 FUNC_1("After fix-ups FlowControl is now = %x\n",
  VAR_10->fc.current_mode);


 VAR_11 = VAR_10->mac.ops.setup_physical_interface(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_10, VAR_2, VAR_10->fc.pause_time);
 if ((VAR_10->phy.type == VAR_7) ||
     (VAR_10->phy.type == VAR_8) ||
     (VAR_10->phy.type == VAR_9) ||
     (VAR_10->phy.type == VAR_6)) {
  FUNC_2(VAR_10, VAR_1, VAR_10->fc.refresh_time);

  VAR_11 = VAR_10->phy.ops.write_reg(VAR_10,
          FUNC_3(VAR_0, 27),
          VAR_10->fc.pause_time);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_4(VAR_10);
}
