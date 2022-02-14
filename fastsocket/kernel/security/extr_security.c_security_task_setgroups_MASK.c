
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group_info {int dummy; } ;
struct TYPE_2__ {int (* task_setgroups ) (struct group_info*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct group_info*) ;

int FUNC_1(struct group_info *VAR_1)
{
 return VAR_0->task_setgroups(VAR_1);
}
