
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;
struct thread {int* td_retval; } ;
struct msghdr {int msg_flags; } ;
struct linux_recvmmsg_args {int vlen; int flags; scalar_t__ timeout; int s; int msg; } ;
struct l_timespec {int dummy; } ;
struct l_mmsghdr {int msg_len; int msg_hdr; } ;
typedef int l_uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct l_mmsghdr* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct l_timespec*,int) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (struct thread*,int ,int *,int,struct msghdr*) ;
 int FUNC_5 (struct timespec*,struct l_timespec*) ;
 int FUNC_6 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (struct timespec*,struct timespec*,struct timespec*) ;

int
FUNC_9(struct thread *VAR_3, struct linux_recvmmsg_args *VAR_4)
{
 struct l_mmsghdr *VAR_5;
 struct msghdr VAR_6;
 struct l_timespec VAR_7;
 struct timespec VAR_8, VAR_9;
 l_uint VAR_10;
 int VAR_11, VAR_12;

 if (VAR_4->timeout) {
  VAR_11 = FUNC_1(VAR_4->timeout, &VAR_7, sizeof(struct l_timespec));
  if (VAR_11 != 0)
   return (VAR_11);
  VAR_11 = FUNC_5(&VAR_8, &VAR_7);
  if (VAR_11 != 0)
   return (VAR_11);
  FUNC_3(&VAR_9);
  FUNC_6(&VAR_9, &VAR_8, &VAR_9);
 }

 VAR_5 = FUNC_0(VAR_4->msg);
 VAR_12 = 0;
 while (VAR_12 < VAR_4->vlen) {
  VAR_11 = FUNC_4(VAR_3, VAR_4->s, &VAR_5->msg_hdr,
      VAR_4->flags & ~VAR_1, &VAR_6);
  if (VAR_11 != 0)
   break;

  VAR_10 = VAR_3->td_retval[0];
  VAR_11 = FUNC_2(&VAR_10, &VAR_5->msg_len, sizeof(VAR_5->msg_len));
  if (VAR_11 != 0)
   break;
  ++VAR_5;
  ++VAR_12;




  if (VAR_4->flags & VAR_1)
   VAR_4->flags |= VAR_0;




  if (VAR_4->timeout) {
   FUNC_3(&VAR_8);
   FUNC_8(&VAR_8, &VAR_9, &VAR_8);
   if (!FUNC_7(&VAR_8) || VAR_8.tv_sec > 0)
    break;
  }

  if (VAR_6.msg_flags & VAR_2)
   break;
 }
 if (VAR_11 == 0)
  VAR_3->td_retval[0] = VAR_12;
 return (VAR_11);
}
