
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct timerfd {scalar_t__ tfd_count; int tfd_lock; int tfd_sel; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; struct timerfd* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_4, int VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct timerfd *VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_4->f_data;
 if (VAR_4->f_type != VAR_0 || VAR_8 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_8->tfd_lock);
 if ((VAR_5 & (VAR_2|VAR_3)) && VAR_8->tfd_count > 0)
  VAR_9 |= VAR_5 & (VAR_2|VAR_3);
 if (VAR_9 == 0)
  FUNC_2(VAR_7, &VAR_8->tfd_sel);
 FUNC_1(&VAR_8->tfd_lock);

 return (VAR_9);
}
