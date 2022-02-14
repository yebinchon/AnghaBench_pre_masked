
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timerfd_t ;
struct uio {int uio_resid; } ;
struct ucred {int dummy; } ;
struct timerfd {scalar_t__ tfd_count; int tfd_lock; scalar_t__ tfd_canceled; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; int f_flag; struct timerfd* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_6, struct uio *VAR_7, struct ucred *VAR_8,
    int VAR_9, struct thread *VAR_10)
{
 struct timerfd *VAR_11;
 timerfd_t VAR_12;
 int VAR_13;

 VAR_11 = VAR_6->f_data;
 if (VAR_6->f_type != VAR_0 || VAR_11 == ((void*)0))
  return (VAR_3);

 if (VAR_7->uio_resid < sizeof(timerfd_t))
  return (VAR_3);

 VAR_13 = 0;
 FUNC_0(&VAR_11->tfd_lock);
retry:
 if (VAR_11->tfd_canceled) {
  VAR_11->tfd_count = 0;
  FUNC_2(&VAR_11->tfd_lock);
  return (VAR_2);
 }
 if (VAR_11->tfd_count == 0) {
  if ((VAR_6->f_flag & VAR_4) != 0) {
   FUNC_2(&VAR_11->tfd_lock);
   return (VAR_1);
  }
  VAR_13 = FUNC_1(&VAR_11->tfd_count, &VAR_11->tfd_lock, VAR_5, "ltfdrd", 0);
  if (VAR_13 == 0)
   goto retry;
 }
 if (VAR_13 == 0) {
  VAR_12 = VAR_11->tfd_count;
  VAR_11->tfd_count = 0;
  FUNC_2(&VAR_11->tfd_lock);
  VAR_13 = FUNC_3(&VAR_12, sizeof(timerfd_t), VAR_7);
 } else
  FUNC_2(&VAR_11->tfd_lock);

 return (VAR_13);
}
