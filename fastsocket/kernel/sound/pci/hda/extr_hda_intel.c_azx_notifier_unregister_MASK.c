
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ notifier_call; } ;
struct azx {TYPE_1__ reboot_notifier; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct azx *VAR_0)
{
 if (VAR_0->reboot_notifier.notifier_call)
  FUNC_0(&VAR_0->reboot_notifier);
}
