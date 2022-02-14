
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct recvfrom_args {int fromlenaddr; int s; int flags; int len; int buf; int from; } ;
struct msghdr {int msg_iovlen; int msg_flags; scalar_t__ msg_control; struct iovec* msg_iov; int msg_name; scalar_t__ msg_namelen; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct thread*,int ,struct msghdr*,int ) ;

int
FUNC_2(struct thread *VAR_0, struct recvfrom_args *VAR_1)
{
 struct msghdr VAR_2;
 struct iovec VAR_3;
 int VAR_4;

 if (VAR_1->fromlenaddr) {
  VAR_4 = FUNC_0(VAR_1->fromlenaddr,
      &VAR_2.msg_namelen, sizeof (VAR_2.msg_namelen));
  if (VAR_4 != 0)
   goto done2;
 } else {
  VAR_2.msg_namelen = 0;
 }
 VAR_2.msg_name = VAR_1->from;
 VAR_2.msg_iov = &VAR_3;
 VAR_2.msg_iovlen = 1;
 VAR_3.iov_base = VAR_1->buf;
 VAR_3.iov_len = VAR_1->len;
 VAR_2.msg_control = 0;
 VAR_2.msg_flags = VAR_1->flags;
 VAR_4 = FUNC_1(VAR_0, VAR_1->s, &VAR_2, VAR_1->fromlenaddr);
done2:
 return (VAR_4);
}
