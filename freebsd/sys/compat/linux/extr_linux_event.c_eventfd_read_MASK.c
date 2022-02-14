
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; int f_flag; struct eventfd* f_data; } ;
struct TYPE_2__ {int si_note; } ;
struct eventfd {int efd_count; int efd_flags; int efd_lock; TYPE_1__ efd_sel; } ;
typedef int eventfd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int*,int,struct uio*) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_6, struct uio *VAR_7, struct ucred *VAR_8,
    int VAR_9, struct thread *VAR_10)
{
 struct eventfd *VAR_11;
 eventfd_t VAR_12;
 int VAR_13;

 VAR_11 = VAR_6->f_data;
 if (VAR_6->f_type != VAR_0 || VAR_11 == ((void*)0))
  return (VAR_2);

 if (VAR_7->uio_resid < sizeof(eventfd_t))
  return (VAR_2);

 VAR_13 = 0;
 FUNC_1(&VAR_11->efd_lock);
retry:
 if (VAR_11->efd_count == 0) {
  if ((VAR_6->f_flag & VAR_3) != 0) {
   FUNC_3(&VAR_11->efd_lock);
   return (VAR_1);
  }
  VAR_13 = FUNC_2(&VAR_11->efd_count, &VAR_11->efd_lock, VAR_5, "lefdrd", 0);
  if (VAR_13 == 0)
   goto retry;
 }
 if (VAR_13 == 0) {
  if ((VAR_11->efd_flags & VAR_4) != 0) {
   VAR_12 = 1;
   --VAR_11->efd_count;
  } else {
   VAR_12 = VAR_11->efd_count;
   VAR_11->efd_count = 0;
  }
  FUNC_0(&VAR_11->efd_sel.si_note, 0);
  FUNC_4(&VAR_11->efd_sel);
  FUNC_6(&VAR_11->efd_count);
  FUNC_3(&VAR_11->efd_lock);
  VAR_13 = FUNC_5(&VAR_12, sizeof(eventfd_t), VAR_7);
 } else
  FUNC_3(&VAR_11->efd_lock);

 return (VAR_13);
}
