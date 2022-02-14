
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct file {TYPE_1__* f_ops; } ;
typedef int off_t ;
struct TYPE_2__ {int fo_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**) ;
 int FUNC_3 (struct file*,int ,int,struct thread*) ;

int
FUNC_4(struct thread *VAR_3, int VAR_4, off_t VAR_5, int VAR_6)
{
 struct file *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4);
 VAR_8 = FUNC_2(VAR_3, VAR_4, &VAR_2, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_8 = (VAR_7->f_ops->fo_flags & VAR_0) != 0 ?
     FUNC_3(VAR_7, VAR_5, VAR_6, VAR_3) : VAR_1;
 FUNC_1(VAR_7, VAR_3);
 return (VAR_8);
}
