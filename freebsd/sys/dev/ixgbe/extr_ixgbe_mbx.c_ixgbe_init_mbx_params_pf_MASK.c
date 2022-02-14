
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rsts; scalar_t__ acks; scalar_t__ reqs; scalar_t__ msgs_rx; scalar_t__ msgs_tx; } ;
struct TYPE_5__ {int check_for_rst; int check_for_ack; int check_for_msg; int write_posted; int read_posted; int write; int read; } ;
struct ixgbe_mbx_info {TYPE_3__ stats; TYPE_2__ ops; int size; scalar_t__ usec_delay; scalar_t__ timeout; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; struct ixgbe_mbx_info mbx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_0(struct ixgbe_hw *VAR_13)
{
 struct ixgbe_mbx_info *VAR_14 = &VAR_13->mbx;

 if (VAR_13->mac.type != VAR_4 &&
     VAR_13->mac.type != VAR_6 &&
     VAR_13->mac.type != VAR_8 &&
     VAR_13->mac.type != VAR_7 &&
     VAR_13->mac.type != VAR_5)
  return;

 VAR_14->timeout = 0;
 VAR_14->usec_delay = 0;

 VAR_14->size = VAR_0;

 VAR_14->ops.read = VAR_9;
 VAR_14->ops.write = VAR_11;
 VAR_14->ops.read_posted = VAR_10;
 VAR_14->ops.write_posted = VAR_12;
 VAR_14->ops.check_for_msg = VAR_2;
 VAR_14->ops.check_for_ack = VAR_1;
 VAR_14->ops.check_for_rst = VAR_3;

 VAR_14->stats.msgs_tx = 0;
 VAR_14->stats.msgs_rx = 0;
 VAR_14->stats.reqs = 0;
 VAR_14->stats.acks = 0;
 VAR_14->stats.rsts = 0;
}
