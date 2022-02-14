
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct file {int * f_cdevpriv; } ;
struct TYPE_4__ {struct file* td_fpop; } ;
struct TYPE_3__ {int (* fo_close ) (struct file*,struct thread*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct thread*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_2, struct thread *VAR_3)
{
 int VAR_4;
 struct file *VAR_5;





 VAR_5 = VAR_0->td_fpop;
 VAR_0->td_fpop = VAR_2;
 VAR_4 = VAR_1.fo_close(VAR_2, VAR_3);
 VAR_0->td_fpop = VAR_5;





 if (VAR_2->f_cdevpriv != ((void*)0))
  FUNC_0(VAR_2);
 return (VAR_4);
}
