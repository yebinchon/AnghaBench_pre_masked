
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct TYPE_2__ {scalar_t__ lookup_aaaa; int masters; int lookup_target; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct auth_xfer* VAR_0)
{

 FUNC_0(VAR_0->task_transfer->masters);


 VAR_0->task_transfer->lookup_target = VAR_0->task_transfer->masters;
 VAR_0->task_transfer->lookup_aaaa = 0;
}
