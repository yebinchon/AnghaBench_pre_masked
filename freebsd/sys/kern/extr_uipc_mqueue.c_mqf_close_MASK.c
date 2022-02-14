
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct mqfs_node {int dummy; } ;
struct file {struct mqfs_node* f_data; int * f_ops; } ;
struct TYPE_2__ {int mi_lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct mqfs_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_2, struct thread *VAR_3)
{
 struct mqfs_node *VAR_4;

 VAR_2->f_ops = &VAR_0;
 VAR_4 = VAR_2->f_data;
 VAR_2->f_data = ((void*)0);
 FUNC_1(&VAR_1.mi_lock);
 FUNC_0(VAR_4);
 FUNC_2(&VAR_1.mi_lock);
 return (0);
}
