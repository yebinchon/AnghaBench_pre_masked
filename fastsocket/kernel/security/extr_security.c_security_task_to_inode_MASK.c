
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* task_to_inode ) (struct task_struct*,struct inode*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct task_struct*,struct inode*) ;

void FUNC_1(struct task_struct *VAR_1, struct inode *VAR_2)
{
 VAR_0->task_to_inode(VAR_1, VAR_2);
}
