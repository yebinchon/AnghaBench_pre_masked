
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr {int dummy; } ;
struct msghdr32 {int msg_iovlen; int msg_iov; } ;
struct msghdr {int msg_controllen; int * msg_control; struct sockaddr* msg_name; int msg_namelen; struct sockaddr* msg_iov; } ;
struct mbuf {int dummy; } ;
typedef struct sockaddr iovec ;
struct freebsd32_sendmsg_args {int flags; int s; int msg; } ;
struct cmsghdr {int dummy; } ;
typedef int m32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct msghdr32*,int) ;
 int FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (struct mbuf**,int *,int) ;
 int FUNC_4 (int ,int ,struct sockaddr**,int ) ;
 int FUNC_5 (int ,struct msghdr*) ;
 int FUNC_6 (struct sockaddr**,struct sockaddr*,int ) ;
 int FUNC_7 (struct thread*,int ,struct msghdr*,int ,struct mbuf*,int ) ;

int
FUNC_8(struct thread *VAR_5,
    struct freebsd32_sendmsg_args *VAR_6)
{
 struct msghdr VAR_7;
 struct msghdr32 VAR_8;
 struct iovec *VAR_9;
 struct mbuf *VAR_10 = ((void*)0);
 struct sockaddr *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_12 = FUNC_1(VAR_6->msg, &VAR_8, sizeof(VAR_8));
 if (VAR_12)
  return (VAR_12);
 VAR_12 = FUNC_5(VAR_6->msg, &VAR_7);
 if (VAR_12)
  return (VAR_12);
 VAR_12 = FUNC_4(FUNC_0(VAR_8), VAR_8, &VAR_9,
     VAR_1);
 if (VAR_12)
  return (VAR_12);
 VAR_7.msg_iov = VAR_9;
 if (VAR_7.msg_name != ((void*)0)) {
  VAR_12 = FUNC_6(&VAR_11, VAR_7.msg_name, VAR_7.msg_namelen);
  if (VAR_12) {
   VAR_11 = ((void*)0);
   goto out;
  }
  VAR_7.msg_name = VAR_11;
 }

 if (VAR_7.msg_control) {
  if (VAR_7.msg_controllen < sizeof(struct cmsghdr)) {
   VAR_12 = VAR_0;
   goto out;
  }

  VAR_12 = FUNC_3(&VAR_10, VAR_7.msg_control,
      VAR_7.msg_controllen);
  if (VAR_12)
   goto out;

  VAR_7.msg_control = ((void*)0);
  VAR_7.msg_controllen = 0;
 }

 VAR_12 = FUNC_7(VAR_5, VAR_6->s, &VAR_7, VAR_6->flags, VAR_10,
     VAR_4);

out:
 FUNC_2(VAR_9, VAR_2);
 if (VAR_11)
  FUNC_2(VAR_11, VAR_3);
 return (VAR_12);
}
