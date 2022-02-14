
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fops; int name; int minor; } ;
struct pm_qos_object {TYPE_1__ pm_qos_power_miscdev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pm_qos_object *VAR_2)
{
 VAR_2->pm_qos_power_miscdev.minor = VAR_0;
 VAR_2->pm_qos_power_miscdev.name = VAR_2->name;
 VAR_2->pm_qos_power_miscdev.fops = &VAR_1;

 return FUNC_0(&VAR_2->pm_qos_power_miscdev);
}
