
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct timespec {int dummy; } ;
struct thread {int * td_retval; } ;
struct kevent_copyops {int kevent_size; } ;
struct kevent {int dummy; } ;
struct g_kevent_args {int nevents; int nchanges; int fd; struct kevent* changelist; int * timeout; struct kevent* eventlist; } ;


 scalar_t__ FUNC_0 (struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct timespec*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int ,struct kevent_copyops*,struct timespec*) ;
 int FUNC_3 (char const*,int ,struct kevent*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, struct g_kevent_args *VAR_3,
    struct kevent_copyops *VAR_4, const char *VAR_5)
{
 struct timespec VAR_6, *VAR_7;



 int VAR_8;

 if (VAR_3->timeout != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_3->timeout, &VAR_6, sizeof(VAR_6));
  if (VAR_8)
   return (VAR_8);
  VAR_7 = &VAR_6;
 } else
  VAR_7 = ((void*)0);







 VAR_8 = FUNC_2(VAR_2, VAR_3->fd, VAR_3->nchanges, VAR_3->nevents,
     VAR_4, VAR_7);







 return (VAR_8);
}
