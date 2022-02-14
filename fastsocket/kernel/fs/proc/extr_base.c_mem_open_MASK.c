
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_2__ {scalar_t__ self_exec_id; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct inode* VAR_1, struct file* VAR_2)
{
 VAR_2->private_data = (void*)((long)VAR_0->self_exec_id);
 return 0;
}
