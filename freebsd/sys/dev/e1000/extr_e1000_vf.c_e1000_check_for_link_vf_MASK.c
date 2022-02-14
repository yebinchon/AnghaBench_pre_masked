
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct e1000_hw*,int*,int,int ) ;int (* check_for_rst ) (struct e1000_hw*,int ) ;} ;
struct e1000_mbx_info {int timeout; TYPE_1__ ops; } ;
struct e1000_mac_info {scalar_t__ get_link_status; } ;
struct e1000_hw {struct e1000_mac_info mac; struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int*,int,int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_8)
{
 struct e1000_mbx_info *VAR_9 = &VAR_8->mbx;
 struct e1000_mac_info *VAR_10 = &VAR_8->mac;
 s32 VAR_11 = VAR_3;
 u32 VAR_12 = 0;

 FUNC_0("e1000_check_for_link_vf");
 if (!VAR_9->ops.check_for_rst(VAR_8, 0) || !VAR_9->timeout)
  VAR_10->get_link_status = VAR_7;

 if (!VAR_10->get_link_status)
  goto out;


 if (!(FUNC_1(VAR_8, VAR_1) & VAR_2))
  goto out;



 if (VAR_9->ops.read(VAR_8, &VAR_12, 1, 0))
  goto out;


 if (!(VAR_12 & VAR_4)) {

  if (VAR_12 & VAR_5)
   VAR_11 = -VAR_0;
  goto out;
 }




 if (!VAR_9->timeout) {
  VAR_11 = -VAR_0;
  goto out;
 }



 VAR_10->get_link_status = VAR_6;

out:
 return VAR_11;
}
