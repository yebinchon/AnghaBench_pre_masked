
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* check_for_ack ) (struct e1000_hw*,int ) ;} ;
struct e1000_mbx_info {int timeout; int usec_delay; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2, u16 VAR_3)
{
 struct e1000_mbx_info *VAR_4 = &VAR_2->mbx;
 int VAR_5 = VAR_4->timeout;

 FUNC_0("e1000_poll_for_ack");

 if (!VAR_5 || !VAR_4->ops.check_for_ack)
  goto out;

 while (VAR_5 && VAR_4->ops.check_for_ack(VAR_2, VAR_3)) {
  VAR_5--;
  if (!VAR_5)
   break;
  FUNC_2(VAR_4->usec_delay);
 }


 if (!VAR_5)
  VAR_4->timeout = 0;
out:
 return VAR_5 ? VAR_1 : -VAR_0;
}
