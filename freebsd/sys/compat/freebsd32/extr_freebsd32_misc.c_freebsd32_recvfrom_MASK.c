
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_namelen; int msg_flags; int * msg_control; struct iovec* msg_iov; void* msg_name; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct freebsd32_recvfrom_args {scalar_t__ fromlenaddr; int s; int flags; int len; scalar_t__ buf; scalar_t__ from; } ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (void*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,void*,int) ;
 int FUNC_3 (struct thread*,int ,struct msghdr*,int ,int *) ;

int
FUNC_4(struct thread *VAR_1,
     struct freebsd32_recvfrom_args *VAR_2)
{
 struct msghdr VAR_3;
 struct iovec VAR_4;
 int VAR_5;

 if (VAR_2->fromlenaddr) {
  VAR_5 = FUNC_1(FUNC_0(VAR_2->fromlenaddr), &VAR_3.msg_namelen,
      sizeof(VAR_3.msg_namelen));
  if (VAR_5)
   return (VAR_5);
 } else {
  VAR_3.msg_namelen = 0;
 }

 VAR_3.msg_name = FUNC_0(VAR_2->from);
 VAR_3.msg_iov = &VAR_4;
 VAR_3.msg_iovlen = 1;
 VAR_4.iov_base = FUNC_0(VAR_2->buf);
 VAR_4.iov_len = VAR_2->len;
 VAR_3.msg_control = ((void*)0);
 VAR_3.msg_flags = VAR_2->flags;
 VAR_5 = FUNC_3(VAR_1, VAR_2->s, &VAR_3, VAR_0, ((void*)0));
 if (VAR_5 == 0 && VAR_2->fromlenaddr)
  VAR_5 = FUNC_2(&VAR_3.msg_namelen, FUNC_0(VAR_2->fromlenaddr),
      sizeof (VAR_3.msg_namelen));
 return (VAR_5);
}
