
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct file {int * f_vnode; struct tty* f_data; } ;
struct TYPE_2__ {int (* fo_close ) (struct file*,struct thread*) ;} ;


 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, struct thread *VAR_2)
{
 struct tty *VAR_3 = VAR_1->f_data;


 FUNC_1(VAR_3);
 FUNC_2(VAR_3);







 if (VAR_1->f_vnode != ((void*)0))
  return (VAR_0.fo_close(VAR_1, VAR_2));

 return (0);
}
