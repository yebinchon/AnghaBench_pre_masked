
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_probe; } ;
struct auth_master {int dummy; } ;
struct TYPE_2__ {struct auth_master* scan_target; struct auth_master* scan_specific; } ;



__attribute__((used)) static struct auth_master*
FUNC_0(struct auth_xfer* VAR_0)
{
 if(VAR_0->task_probe->scan_specific)
  return VAR_0->task_probe->scan_specific;
 return VAR_0->task_probe->scan_target;
}
