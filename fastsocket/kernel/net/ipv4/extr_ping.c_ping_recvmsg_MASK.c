
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_iov; int msg_flags; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct inet_sock {scalar_t__ cmsg_flags; int num; } ;
struct TYPE_4__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct msghdr*,struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct msghdr*,size_t,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,int,int,int*) ;
 int FUNC_9 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct kiocb *VAR_5, struct sock *VAR_6, struct msghdr *VAR_7,
   size_t VAR_8, int VAR_9, int VAR_10, int *VAR_11)
{
 struct inet_sock *VAR_12 = FUNC_0(VAR_6);
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *)VAR_7->msg_name;
 struct sk_buff *VAR_14;
 int VAR_15, VAR_16;

 FUNC_5("ping_recvmsg(sk=%p,sk->num=%u)\n", VAR_12, VAR_12->num);

 VAR_16 = -VAR_1;
 if (VAR_10 & VAR_3)
  goto out;

 if (VAR_10 & VAR_2)
  return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_11);

 VAR_14 = FUNC_8(VAR_6, VAR_10, VAR_9, &VAR_16);
 if (!VAR_14)
  goto out;

 VAR_15 = VAR_14->len;
 if (VAR_15 > VAR_8) {
  VAR_7->msg_flags |= VAR_4;
  VAR_15 = VAR_8;
 }


 VAR_16 = FUNC_6(VAR_14, 0, VAR_7->msg_iov, VAR_15);
 if (VAR_16)
  goto done;

 FUNC_9(VAR_7, VAR_6, VAR_14);


 if (VAR_13) {
  VAR_13->sin_family = VAR_0;
  VAR_13->sin_port = 0 ;
  VAR_13->sin_addr.s_addr = FUNC_2(VAR_14)->saddr;
  FUNC_4(VAR_13->sin_zero, 0, sizeof(VAR_13->sin_zero));
  *VAR_11 = sizeof(*VAR_13);
 }
 if (VAR_12->cmsg_flags)
  FUNC_1(VAR_7, VAR_14);
 VAR_16 = VAR_15;

done:
 FUNC_7(VAR_6, VAR_14);
out:
 FUNC_5("ping_recvmsg -> %d\n", VAR_16);
 return VAR_16;
}
