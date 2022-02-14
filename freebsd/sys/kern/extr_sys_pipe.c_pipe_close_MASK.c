
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct file {int * f_data; int * f_ops; int * f_vnode; } ;
struct TYPE_2__ {int (* fo_close ) (struct file*,struct thread*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,struct thread*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_2, struct thread *VAR_3)
{

 if (VAR_2->f_vnode != ((void*)0))
  return VAR_1.fo_close(VAR_2, VAR_3);
 VAR_2->f_ops = &VAR_0;
 FUNC_0(VAR_2->f_data);
 VAR_2->f_data = ((void*)0);
 return (0);
}
