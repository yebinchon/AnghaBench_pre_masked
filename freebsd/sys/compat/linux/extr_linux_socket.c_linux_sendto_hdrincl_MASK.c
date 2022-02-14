
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_flags; int * msg_control; struct iovec* msg_iov; int msg_namelen; int msg_name; } ;
struct linux_sendto_args {int flags; int s; int len; int tolen; int to; int msg; } ;
struct ip {int ip_off; int ip_len; } ;
struct iovec {char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ip*,int ) ;
 int FUNC_2 (struct ip*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct thread*,int ,struct msghdr*,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_6, struct linux_sendto_args *VAR_7)
{







 struct ip *VAR_8;
 struct msghdr VAR_9;
 struct iovec VAR_10[1];
 int VAR_11;


 if (VAR_7->len < 8 ||
     VAR_7->len > VAR_1)
  return (VAR_0);

 VAR_8 = (struct ip *)FUNC_4(VAR_7->len, VAR_2, VAR_3);


 if ((VAR_11 = FUNC_1(FUNC_0(VAR_7->msg), VAR_8,
     VAR_7->len)))
  goto goout;


 VAR_8->ip_len = VAR_7->len;
 VAR_8->ip_off = FUNC_5(VAR_8->ip_off);


 VAR_9.msg_name = FUNC_0(VAR_7->to);
 VAR_9.msg_namelen = VAR_7->tolen;
 VAR_9.msg_iov = VAR_10;
 VAR_9.msg_iovlen = 1;
 VAR_9.msg_control = ((void*)0);
 VAR_9.msg_flags = 0;
 VAR_10[0].iov_base = (char *)VAR_8;
 VAR_10[0].iov_len = VAR_7->len;
 VAR_11 = FUNC_3(VAR_6, VAR_7->s, &VAR_9, VAR_7->flags,
     ((void*)0), VAR_4);
goout:
 FUNC_2(VAR_8, VAR_2);
 return (VAR_11);
}
