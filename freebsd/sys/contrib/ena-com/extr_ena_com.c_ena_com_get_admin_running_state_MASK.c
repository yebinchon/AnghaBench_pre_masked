
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running_state; } ;
struct ena_com_dev {TYPE_1__ admin_queue; } ;



bool FUNC_0(struct ena_com_dev *VAR_0)
{
 return VAR_0->admin_queue.running_state;
}
