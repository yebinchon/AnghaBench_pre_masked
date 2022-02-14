
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; struct eventfd* f_data; } ;
struct eventfd {scalar_t__ efd_count; int efd_lock; int efd_sel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_7, int VAR_8, struct ucred *VAR_9,
    struct thread *VAR_10)
{
 struct eventfd *VAR_11;
 int VAR_12 = 0;

 VAR_11 = VAR_7->f_data;
 if (VAR_7->f_type != VAR_0 || VAR_11 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_11->efd_lock);
 if ((VAR_8 & (VAR_2|VAR_4)) && VAR_11->efd_count > 0)
  VAR_12 |= VAR_8 & (VAR_2|VAR_4);
 if ((VAR_8 & (VAR_3|VAR_5)) && VAR_6 - 1 > VAR_11->efd_count)
  VAR_12 |= VAR_8 & (VAR_3|VAR_5);
 if (VAR_12 == 0)
  FUNC_2(VAR_10, &VAR_11->efd_sel);
 FUNC_1(&VAR_11->efd_lock);

 return (VAR_12);
}
