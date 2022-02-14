
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int state_initialized; scalar_t__ state_remove_uevent_sent; scalar_t__ state_add_uevent_sent; scalar_t__ state_in_sysfs; int entry; int kref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kobject *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(&VAR_0->kref);
 FUNC_0(&VAR_0->entry);
 VAR_0->state_in_sysfs = 0;
 VAR_0->state_add_uevent_sent = 0;
 VAR_0->state_remove_uevent_sent = 0;
 VAR_0->state_initialized = 1;
}
