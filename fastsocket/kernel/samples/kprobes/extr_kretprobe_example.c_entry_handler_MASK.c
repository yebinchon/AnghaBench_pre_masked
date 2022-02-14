
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct my_data {int entry_stamp; } ;
struct kretprobe_instance {scalar_t__ data; } ;
struct TYPE_2__ {int mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct kretprobe_instance *VAR_1, struct pt_regs *VAR_2)
{
 struct my_data *VAR_3;

 if (!VAR_0->mm)
  return 1;

 VAR_3 = (struct my_data *)VAR_1->data;
 VAR_3->entry_stamp = FUNC_0();
 return 0;
}
