
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* check_for_ack ) (struct ixgbe_hw*,int ) ;} ;
struct ixgbe_mbx_info {int timeout; int usec_delay; TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_3, u16 VAR_4)
{
 struct ixgbe_mbx_info *VAR_5 = &VAR_3->mbx;
 int VAR_6 = VAR_5->timeout;

 FUNC_0("ixgbe_poll_for_ack");

 if (!VAR_6 || !VAR_5->ops.check_for_ack)
  goto out;

 while (VAR_6 && VAR_5->ops.check_for_ack(VAR_3, VAR_4)) {
  VAR_6--;
  if (!VAR_6)
   break;
  FUNC_3(VAR_5->usec_delay);
 }

 if (VAR_6 == 0)
  FUNC_1(VAR_0,
        "Polling for VF%d mailbox ack timedout", VAR_4);

out:
 return VAR_6 ? VAR_2 : VAR_1;
}
