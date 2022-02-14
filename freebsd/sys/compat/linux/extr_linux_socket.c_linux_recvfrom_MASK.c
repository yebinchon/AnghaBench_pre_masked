
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int sockaddr ;
struct msghdr {int* msg_name; int msg_namelen; int msg_iovlen; int msg_flags; scalar_t__ msg_control; struct iovec* msg_iov; } ;
struct linux_recvfrom_args {int fromlen; int from; int s; int flags; int len; int buf; } ;
typedef int l_sockaddr ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int fromlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int*,int**,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (struct thread*,int ,struct msghdr*,int ,int *) ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int,int ,int ) ;

int
FUNC_8(struct thread *VAR_4, struct linux_recvfrom_args *VAR_5)
{
 struct l_sockaddr *VAR_6;
 struct sockaddr *VAR_7;
 struct msghdr VAR_8;
 struct iovec VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_0(VAR_5->fromlen) != ((void*)0)) {
  VAR_10 = FUNC_2(FUNC_0(VAR_5->fromlen), &VAR_11,
      sizeof(VAR_11));
  if (VAR_10 != 0)
   return (VAR_10);
  if (VAR_11 < 0)
   return (VAR_0);
  VAR_7 = FUNC_7(VAR_11, VAR_1, VAR_2);
 } else {
  VAR_11 = 0;
  VAR_7 = ((void*)0);
 }

 VAR_8.msg_name = VAR_7;
 VAR_8.msg_namelen = VAR_11;
 VAR_8.msg_iov = &VAR_9;
 VAR_8.msg_iovlen = 1;
 VAR_9.iov_base = FUNC_0(VAR_5->buf);
 VAR_9.iov_len = VAR_5->len;
 VAR_8.msg_control = 0;
 VAR_8.msg_flags = FUNC_6(VAR_5->flags);

 VAR_10 = FUNC_5(VAR_4, VAR_5->s, &VAR_8, VAR_3, ((void*)0));
 if (VAR_10 != 0)
  goto out;

 if (FUNC_0(VAR_5->from) != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_7, &VAR_6, VAR_8.msg_namelen);
  if (VAR_10 == 0)
   VAR_10 = FUNC_3(VAR_6, FUNC_0(VAR_5->from),
       VAR_8.msg_namelen);
  FUNC_4(VAR_6, VAR_1);
 }

 if (VAR_10 == 0 && FUNC_0(VAR_5->fromlen) != ((void*)0))
  VAR_10 = FUNC_3(&VAR_8.msg_namelen, FUNC_0(VAR_5->fromlen),
      sizeof(VAR_8.msg_namelen));
out:
 FUNC_4(VAR_7, VAR_1);
 return (VAR_10);
}
