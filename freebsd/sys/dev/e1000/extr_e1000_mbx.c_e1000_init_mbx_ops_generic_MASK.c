
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_posted; int read_posted; void* check_for_rst; void* check_for_ack; void* check_for_msg; void* write; void* read; int init_params; } ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct e1000_hw *VAR_5)
{
 struct e1000_mbx_info *VAR_6 = &VAR_5->mbx;
 VAR_6->ops.init_params = VAR_2;
 VAR_6->ops.read = VAR_1;
 VAR_6->ops.write = VAR_1;
 VAR_6->ops.check_for_msg = VAR_0;
 VAR_6->ops.check_for_ack = VAR_0;
 VAR_6->ops.check_for_rst = VAR_0;
 VAR_6->ops.read_posted = VAR_3;
 VAR_6->ops.write_posted = VAR_4;
}
