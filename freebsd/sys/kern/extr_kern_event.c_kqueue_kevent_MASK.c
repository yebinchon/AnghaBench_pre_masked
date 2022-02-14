
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int* td_retval; } ;
struct kqueue {int dummy; } ;
struct kevent_copyops {int (* k_copyin ) (int ,struct kevent*,int) ;int arg; int (* k_copyout ) (int ,struct kevent*,int) ;} ;
struct kevent {int flags; int data; int filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kqueue*,struct kevent*,struct thread*,int ) ;
 int FUNC_1 (struct kqueue*,int,struct kevent_copyops*,struct timespec const*,struct kevent*,struct thread*) ;
 int FUNC_2 (int ,struct kevent*,int) ;
 int FUNC_3 (int ,struct kevent*,int) ;

__attribute__((used)) static int
FUNC_4(struct kqueue *VAR_5, struct thread *VAR_6, int VAR_7, int VAR_8,
    struct kevent_copyops *VAR_9, const struct timespec *VAR_10)
{
 struct kevent VAR_11[VAR_3];
 struct kevent *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_16 = 0;
 while (VAR_7 > 0) {
  VAR_15 = VAR_7 > VAR_3 ? VAR_3 : VAR_7;
  VAR_17 = VAR_9->k_copyin(VAR_9->arg, VAR_11, VAR_15);
  if (VAR_17)
   return (VAR_17);
  VAR_13 = VAR_11;
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   VAR_12 = &VAR_13[VAR_14];
   if (!VAR_12->filter)
    continue;
   VAR_12->flags &= ~VAR_2;
   VAR_17 = FUNC_0(VAR_5, VAR_12, VAR_6, VAR_4);
   if (VAR_17 || (VAR_12->flags & VAR_1)) {
    if (VAR_8 == 0)
     return (VAR_17);
    VAR_12->flags = VAR_0;
    VAR_12->data = VAR_17;
    (void)VAR_9->k_copyout(VAR_9->arg, VAR_12, 1);
    VAR_8--;
    VAR_16++;
   }
  }
  VAR_7 -= VAR_15;
 }
 if (VAR_16) {
  VAR_6->td_retval[0] = VAR_16;
  return (0);
 }

 return (FUNC_1(VAR_5, VAR_8, VAR_9, VAR_10, VAR_11, VAR_6));
}
