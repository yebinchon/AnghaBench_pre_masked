
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; int nlmsg_type; } ;
struct inet_timewait_sock {int dummy; } ;
struct inet_hashinfo {int dummy; } ;
struct TYPE_3__ {scalar_t__* idiag_cookie; int idiag_if; int idiag_sport; int * idiag_src; int idiag_dport; int * idiag_dst; } ;
struct inet_diag_req {scalar_t__ idiag_family; int idiag_ext; TYPE_1__ id; } ;
struct inet_diag_msg {int dummy; } ;
struct inet_diag_meminfo {int dummy; } ;
struct inet_diag_handler {scalar_t__ idiag_info_size; struct inet_hashinfo* idiag_hashinfo; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct inet_diag_handler const*) ;
 int VAR_9 ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 struct inet_diag_req* FUNC_2 (struct nlmsghdr const*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct inet_diag_handler const*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int VAR_11 ;
 struct sock* FUNC_7 (int *,struct inet_hashinfo*,struct in6_addr*,int ,struct in6_addr*,int ,int ) ;
 struct inet_diag_handler* FUNC_8 (int ) ;
 int FUNC_9 (struct inet_diag_handler const*) ;
 struct sock* FUNC_10 (int *,struct inet_hashinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct inet_timewait_sock*) ;
 int VAR_12 ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_14 (struct sock*,struct sk_buff*,int ,int ,int ,int ,struct nlmsghdr const*) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_13,
          const struct nlmsghdr *VAR_14)
{
 int VAR_15;
 struct sock *VAR_16;
 struct inet_diag_req *VAR_17 = FUNC_2(VAR_14);
 struct sk_buff *VAR_18;
 struct inet_hashinfo *VAR_19;
 const struct inet_diag_handler *VAR_20;

 VAR_20 = FUNC_8(VAR_14->nlmsg_type);
 if (FUNC_0(VAR_20)) {
  VAR_15 = FUNC_4(VAR_20);
  goto unlock;
 }

 VAR_19 = VAR_20->idiag_hashinfo;
 VAR_15 = -VAR_2;

 if (VAR_17->idiag_family == VAR_0) {
  VAR_16 = FUNC_10(&VAR_12, VAR_19, VAR_17->id.idiag_dst[0],
     VAR_17->id.idiag_dport, VAR_17->id.idiag_src[0],
     VAR_17->id.idiag_sport, VAR_17->id.idiag_if);
 }
 else {
  goto unlock;
 }

 VAR_15 = -VAR_4;
 if (VAR_16 == ((void*)0))
  goto unlock;

 VAR_15 = -VAR_6;
 if ((VAR_17->id.idiag_cookie[0] != VAR_8 ||
      VAR_17->id.idiag_cookie[1] != VAR_8) &&
     ((u32)(unsigned long)VAR_16 != VAR_17->id.idiag_cookie[0] ||
      (u32)((((unsigned long)VAR_16) >> 31) >> 1) != VAR_17->id.idiag_cookie[1]))
  goto out;

 VAR_15 = -VAR_5;
 VAR_18 = FUNC_6(FUNC_3((sizeof(struct inet_diag_msg) +
         sizeof(struct inet_diag_meminfo) +
         VAR_20->idiag_info_size + 64)),
   VAR_7);
 if (!VAR_18)
  goto out;

 VAR_15 = FUNC_14(VAR_16, VAR_18, VAR_17->idiag_ext,
      FUNC_1(VAR_13).pid,
      VAR_14->nlmsg_seq, 0, VAR_14);
 if (VAR_15 < 0) {
  FUNC_5(VAR_15 == -VAR_3);
  FUNC_12(VAR_18);
  goto out;
 }
 VAR_15 = FUNC_13(VAR_11, VAR_18, FUNC_1(VAR_13).pid,
         VAR_9);
 if (VAR_15 > 0)
  VAR_15 = 0;

out:
 if (VAR_16) {
  if (VAR_16->sk_state == VAR_10)
   FUNC_11((struct inet_timewait_sock *)VAR_16);
  else
   FUNC_15(VAR_16);
 }
unlock:
 FUNC_9(VAR_20);
 return VAR_15;
}
