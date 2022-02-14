
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; scalar_t__ sin6_flowinfo; int sin6_port; int sin6_family; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ protocol; } ;
struct msghdr {int msg_flags; scalar_t__ msg_name; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct TYPE_7__ {scalar_t__ all; } ;
struct ipv6_pinfo {TYPE_1__ rxopt; } ;
struct inet_sock {scalar_t__ cmsg_flags; } ;
struct TYPE_12__ {scalar_t__ iif; } ;
struct TYPE_11__ {scalar_t__ partial_cov; } ;
struct TYPE_10__ {int saddr; } ;
struct TYPE_9__ {int saddr; } ;
struct TYPE_8__ {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int*,int*) ;
 int FUNC_6 (struct sock*,struct msghdr*,struct sk_buff*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 struct ipv6_pinfo* FUNC_9 (struct sock*) ;
 struct inet_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct msghdr*,struct sk_buff*) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*,struct msghdr*,size_t,int*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sk_buff*,int,int ) ;
 int FUNC_21 (struct sk_buff*,int,int ,unsigned int) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sock*,struct sk_buff*) ;
 int FUNC_24 (struct sock*,struct sk_buff*,int) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct msghdr*,struct sock*,struct sk_buff*) ;
 TYPE_2__* FUNC_27 (struct sk_buff*) ;
 scalar_t__ FUNC_28 (struct sk_buff*) ;

int FUNC_29(struct kiocb *VAR_10, struct sock *VAR_11,
    struct msghdr *VAR_12, size_t VAR_13,
    int VAR_14, int VAR_15, int *VAR_16)
{
 struct ipv6_pinfo *VAR_17 = FUNC_9(VAR_11);
 struct inet_sock *VAR_18 = FUNC_10(VAR_11);
 struct sk_buff *VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = FUNC_1(VAR_11);
 int VAR_25;

 if (VAR_15 & VAR_6)
  return FUNC_17(VAR_11, VAR_12, VAR_13, VAR_16);

try_again:
 VAR_19 = FUNC_5(VAR_11, VAR_15 | (VAR_14 ? VAR_5 : 0),
      &VAR_22, &VAR_23);
 if (!VAR_19)
  goto out;

 VAR_20 = VAR_19->len - sizeof(struct udphdr);
 VAR_21 = VAR_13;
 if (VAR_21 > VAR_20)
  VAR_21 = VAR_20;
 else if (VAR_21 < VAR_20)
  VAR_12->msg_flags |= VAR_7;

 VAR_25 = (VAR_19->protocol == FUNC_8(VAR_3));







 if (VAR_21 < VAR_20 || FUNC_4(VAR_19)->partial_cov) {
  if (FUNC_28(VAR_19))
   goto csum_copy_err;
 }

 if (FUNC_22(VAR_19))
  VAR_23 = FUNC_21(VAR_19, sizeof(struct udphdr),
           VAR_12->msg_iov, VAR_21 );
 else {
  VAR_23 = FUNC_20(VAR_19, sizeof(struct udphdr), VAR_12->msg_iov);
  if (VAR_23 == -VAR_2)
   goto csum_copy_err;
 }
 if (VAR_23)
  goto out_free;

 if (!VAR_22) {
  if (VAR_25)
   FUNC_3(FUNC_25(VAR_11),
     VAR_8, VAR_24);
  else
   FUNC_2(FUNC_25(VAR_11),
     VAR_8, VAR_24);
 }

 FUNC_26(VAR_12, VAR_11, VAR_19);


 if (VAR_12->msg_name) {
  struct sockaddr_in6 *VAR_26;

  VAR_26 = (struct sockaddr_in6 *) VAR_12->msg_name;
  VAR_26->sin6_family = VAR_0;
  VAR_26->sin6_port = FUNC_27(VAR_19)->source;
  VAR_26->sin6_flowinfo = 0;
  VAR_26->sin6_scope_id = 0;

  if (VAR_25)
   FUNC_14(&VAR_26->sin6_addr, 0, 0,
          FUNC_7(0xffff), FUNC_12(VAR_19)->saddr);
  else {
   FUNC_13(&VAR_26->sin6_addr,
           &FUNC_16(VAR_19)->saddr);
   if (FUNC_15(&VAR_26->sin6_addr) & VAR_4)
    VAR_26->sin6_scope_id = FUNC_0(VAR_19)->iif;
  }
  *VAR_16 = sizeof(*VAR_26);
 }
 if (VAR_25) {
  if (VAR_18->cmsg_flags)
   FUNC_11(VAR_12, VAR_19);
 } else {
  if (VAR_17->rxopt.all)
   FUNC_6(VAR_11, VAR_12, VAR_19);
 }

 VAR_23 = VAR_21;
 if (VAR_15 & VAR_7)
  VAR_23 = VAR_20;

out_free:
 FUNC_23(VAR_11, VAR_19);
out:
 return VAR_23;

csum_copy_err:
 FUNC_18(VAR_11);
 if (!FUNC_24(VAR_11, VAR_19, VAR_15)) {
  if (VAR_25)
   FUNC_3(FUNC_25(VAR_11),
     VAR_9, VAR_24);
  else
   FUNC_2(FUNC_25(VAR_11),
     VAR_9, VAR_24);
 }
 FUNC_19(VAR_11);

 if (VAR_15 & VAR_5)
  return -VAR_1;
 goto try_again;
}
