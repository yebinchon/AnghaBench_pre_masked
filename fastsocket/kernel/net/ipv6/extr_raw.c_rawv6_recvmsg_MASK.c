
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; scalar_t__ sin6_flowinfo; scalar_t__ sin6_port; int sin6_family; } ;
struct sock {int sk_drops; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct TYPE_4__ {scalar_t__ all; } ;
struct ipv6_pinfo {TYPE_1__ rxopt; } ;
struct TYPE_6__ {scalar_t__ iif; } ;
struct TYPE_5__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*,struct msghdr*,struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct msghdr*,size_t,int*) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ,size_t) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*,struct sk_buff*) ;
 int FUNC_13 (struct sock*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_14 (struct sock*,int,int,int*) ;
 int FUNC_15 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct kiocb *VAR_10, struct sock *VAR_11,
    struct msghdr *VAR_12, size_t VAR_13,
    int VAR_14, int VAR_15, int *VAR_16)
{
 struct ipv6_pinfo *VAR_17 = FUNC_4(VAR_11);
 struct sockaddr_in6 *VAR_18 = (struct sockaddr_in6 *)VAR_12->msg_name;
 struct sk_buff *VAR_19;
 size_t VAR_20;
 int VAR_21;

 if (VAR_15 & VAR_8)
  return -VAR_4;

 if (VAR_15 & VAR_7)
  return FUNC_8(VAR_11, VAR_12, VAR_13, VAR_16);

 VAR_19 = FUNC_14(VAR_11, VAR_15, VAR_14, &VAR_21);
 if (!VAR_19)
  goto out;

 VAR_20 = VAR_19->len;
 if (VAR_20 > VAR_13) {
  VAR_20 = VAR_13;
  VAR_12->msg_flags |= VAR_9;
 }

 if (FUNC_11(VAR_19)) {
  VAR_21 = FUNC_10(VAR_19, 0, VAR_12->msg_iov, VAR_20);
 } else if (VAR_12->msg_flags&VAR_9) {
  if (FUNC_1(VAR_19))
   goto csum_copy_err;
  VAR_21 = FUNC_10(VAR_19, 0, VAR_12->msg_iov, VAR_20);
 } else {
  VAR_21 = FUNC_9(VAR_19, 0, VAR_12->msg_iov);
  if (VAR_21 == -VAR_3)
   goto csum_copy_err;
 }
 if (VAR_21)
  goto out_free;


 if (VAR_18) {
  VAR_18->sin6_family = VAR_0;
  VAR_18->sin6_port = 0;
  FUNC_5(&VAR_18->sin6_addr, &FUNC_7(VAR_19)->saddr);
  VAR_18->sin6_flowinfo = 0;
  VAR_18->sin6_scope_id = 0;
  if (FUNC_6(&VAR_18->sin6_addr) & VAR_5)
   VAR_18->sin6_scope_id = FUNC_0(VAR_19)->iif;
  *VAR_16 = sizeof(*VAR_18);
 }

 FUNC_15(VAR_12, VAR_11, VAR_19);

 if (VAR_17->rxopt.all)
  FUNC_3(VAR_11, VAR_12, VAR_19);

 VAR_21 = VAR_20;
 if (VAR_15 & VAR_9)
  VAR_21 = VAR_19->len;

out_free:
 FUNC_12(VAR_11, VAR_19);
out:
 return VAR_21;

csum_copy_err:
 FUNC_13(VAR_11, VAR_19, VAR_15);




 VAR_21 = (VAR_15&VAR_6) ? -VAR_1 : -VAR_2;
 FUNC_2(&VAR_11->sk_drops);
 goto out;
}
