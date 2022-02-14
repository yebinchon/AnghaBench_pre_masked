
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int notifiers; } ;


 int FUNC_0 (int ,struct notifier_block*) ;
 TYPE_1__** VAR_0 ;

int FUNC_1(int VAR_1, struct notifier_block *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(
   VAR_0[VAR_1]->notifiers, VAR_2);

 return VAR_3;
}
