
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct file {scalar_t__ f_type; int * f_ops; struct eventfd* f_data; } ;
struct TYPE_2__ {int si_note; } ;
struct eventfd {int efd_lock; TYPE_1__ efd_sel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eventfd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, struct thread *VAR_5)
{
 struct eventfd *VAR_6;

 VAR_6 = VAR_4->f_data;
 if (VAR_4->f_type != VAR_0 || VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_3(&VAR_6->efd_sel);
 FUNC_1(&VAR_6->efd_sel.si_note);

 VAR_4->f_ops = &VAR_3;
 FUNC_2(&VAR_6->efd_lock);
 FUNC_0(VAR_6, VAR_2);

 return (0);
}
