
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct thread {int dummy; } ;
struct linux_utimensat_args {int dfd; int flags; int * pathname; int * times; } ;
struct l_timespec {int tv_nsec; int tv_sec; } ;
typedef int l_times ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int *,char**,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,struct l_timespec*,int) ;
 int FUNC_3 (struct thread*,int,struct timespec*,int ) ;
 int FUNC_4 (struct thread*,int,char*,int ,struct timespec*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct thread *VAR_8, struct linux_utimensat_args *VAR_9)
{
 struct l_timespec VAR_10[2];
 struct timespec VAR_11[2], *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_15 = (VAR_9->dfd == VAR_3) ? VAR_0 : VAR_9->dfd;

 if (VAR_9->flags & ~VAR_4)
  return (VAR_2);

 if (VAR_9->times != ((void*)0)) {
  VAR_14 = FUNC_2(VAR_9->times, VAR_10, sizeof(VAR_10));
  if (VAR_14 != 0)
   return (VAR_14);

  if (FUNC_5(VAR_10[0].tv_nsec) != 0 ||
      FUNC_5(VAR_10[1].tv_nsec) != 0)
   return (VAR_2);

  VAR_11[0].tv_sec = VAR_10[0].tv_sec;
  switch (VAR_10[0].tv_nsec)
  {
  case 128:
   VAR_11[0].tv_nsec = VAR_7;
   break;
  case 129:
   VAR_11[0].tv_nsec = VAR_6;
   break;
  default:
   VAR_11[0].tv_nsec = VAR_10[0].tv_nsec;
  }

  VAR_11[1].tv_sec = VAR_10[1].tv_sec;
  switch (VAR_10[1].tv_nsec)
  {
  case 128:
   VAR_11[1].tv_nsec = VAR_7;
   break;
  case 129:
   VAR_11[1].tv_nsec = VAR_6;
   break;
  default:
   VAR_11[1].tv_nsec = VAR_10[1].tv_nsec;
   break;
  }
  VAR_12 = VAR_11;




  if (VAR_11[0].tv_nsec == VAR_7 &&
      VAR_11[1].tv_nsec == VAR_7)
   return (0);
 }

 if (VAR_9->pathname != ((void*)0))
  FUNC_0(VAR_8, VAR_9->pathname, &VAR_13, VAR_15);
 else if (VAR_9->flags != 0)
  return (VAR_2);

 if (VAR_9->flags & VAR_4)
  VAR_16 |= VAR_1;

 if (VAR_13 == ((void*)0))
  VAR_14 = FUNC_3(VAR_8, VAR_15, VAR_12, VAR_5);
 else {
  VAR_14 = FUNC_4(VAR_8, VAR_15, VAR_13, VAR_5, VAR_12,
   VAR_5, VAR_16);
  FUNC_1(VAR_13);
 }

 return (VAR_14);
}
