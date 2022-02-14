
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_3__ {int it_interval; int it_value; } ;
struct timerfd {int tfd_lock; TYPE_2__ tfd_sel; int tfd_callout; TYPE_1__ tfd_time; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; int * f_ops; struct timerfd* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct timerfd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_4, struct thread *VAR_5)
{
 struct timerfd *VAR_6;

 VAR_6 = VAR_4->f_data;
 if (VAR_4->f_type != VAR_0 || VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_7(&VAR_6->tfd_time.it_value);
 FUNC_7(&VAR_6->tfd_time.it_interval);

 FUNC_4(&VAR_6->tfd_lock);
 FUNC_0(&VAR_6->tfd_callout);
 FUNC_5(&VAR_6->tfd_lock);

 FUNC_6(&VAR_6->tfd_sel);
 FUNC_2(&VAR_6->tfd_sel.si_note);

 VAR_4->f_ops = &VAR_3;
 FUNC_3(&VAR_6->tfd_lock);
 FUNC_1(VAR_6, VAR_2);

 return (0);
}
