
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct TYPE_2__ {int scan_target; int scan_specific; } ;



__attribute__((used)) static int
FUNC_0(struct auth_xfer* VAR_0)
{
 return !VAR_0->task_transfer->scan_specific &&
  !VAR_0->task_transfer->scan_target;
}
