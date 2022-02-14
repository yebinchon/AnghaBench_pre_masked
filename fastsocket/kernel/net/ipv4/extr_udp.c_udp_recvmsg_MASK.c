
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct inet_sock {scalar_t__ cmsg_flags; } ;
struct TYPE_8__ {scalar_t__ partial_cov; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sock*,int,int*,int*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct msghdr*,struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct msghdr*,size_t,int*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*,int,int ) ;
 int FUNC_12 (struct sk_buff*,int,int ,unsigned int) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;
 int FUNC_15 (struct sock*,struct sk_buff*,int) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct msghdr*,struct sock*,struct sk_buff*) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;

int FUNC_20(struct kiocb *VAR_8, struct sock *VAR_9, struct msghdr *VAR_10,
  size_t VAR_11, int VAR_12, int VAR_13, int *VAR_14)
{
 struct inet_sock *VAR_15 = FUNC_4(VAR_9);
 struct sockaddr_in *VAR_16 = (struct sockaddr_in *)VAR_10->msg_name;
 struct sk_buff *VAR_17;
 unsigned int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = FUNC_0(VAR_9);

 if (VAR_13 & VAR_4)
  return FUNC_7(VAR_9, VAR_10, VAR_11, VAR_14);

try_again:
 VAR_17 = FUNC_3(VAR_9, VAR_13 | (VAR_12 ? VAR_3 : 0),
      &VAR_20, &VAR_21);
 if (!VAR_17)
  goto out;

 VAR_18 = VAR_17->len - sizeof(struct udphdr);
 VAR_19 = VAR_11;
 if (VAR_19 > VAR_18)
  VAR_19 = VAR_18;
 else if (VAR_19 < VAR_18)
  VAR_10->msg_flags |= VAR_5;







 if (VAR_19 < VAR_18 || FUNC_2(VAR_17)->partial_cov) {
  if (FUNC_19(VAR_17))
   goto csum_copy_err;
 }

 if (FUNC_13(VAR_17))
  VAR_21 = FUNC_12(VAR_17, sizeof(struct udphdr),
           VAR_10->msg_iov, VAR_19);
 else {
  VAR_21 = FUNC_11(VAR_17,
             sizeof(struct udphdr),
             VAR_10->msg_iov);

  if (VAR_21 == -VAR_2)
   goto csum_copy_err;
 }

 if (VAR_21)
  goto out_free;

 if (!VAR_20)
  FUNC_1(FUNC_16(VAR_9),
    VAR_6, VAR_22);

 FUNC_17(VAR_10, VAR_9, VAR_17);


 if (VAR_16) {
  VAR_16->sin_family = VAR_0;
  VAR_16->sin_port = FUNC_18(VAR_17)->source;
  VAR_16->sin_addr.s_addr = FUNC_6(VAR_17)->saddr;
  FUNC_9(VAR_16->sin_zero, 0, sizeof(VAR_16->sin_zero));
  *VAR_14 = sizeof(*VAR_16);
 }
 if (VAR_15->cmsg_flags)
  FUNC_5(VAR_10, VAR_17);

 VAR_21 = VAR_19;
 if (VAR_13 & VAR_5)
  VAR_21 = VAR_18;

out_free:
 FUNC_14(VAR_9, VAR_17);
out:
 return VAR_21;

csum_copy_err:
 FUNC_8(VAR_9);
 if (!FUNC_15(VAR_9, VAR_17, VAR_13))
  FUNC_1(FUNC_16(VAR_9), VAR_7, VAR_22);
 FUNC_10(VAR_9);

 if (VAR_12)
  return -VAR_1;
 goto try_again;
}
