
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_type; } ;
struct inet_timewait_sock {scalar_t__ tw_state; long tw_ttd; scalar_t__ tw_family; int tw_substate; int tw_daddr; int tw_rcv_saddr; int tw_dport; int tw_sport; int tw_bound_dev_if; } ;
struct TYPE_2__ {int * idiag_dst; int * idiag_src; int idiag_dport; int idiag_sport; void** idiag_cookie; int idiag_if; } ;
struct inet_diag_msg {scalar_t__ idiag_family; int idiag_timer; TYPE_1__ id; scalar_t__ idiag_inode; scalar_t__ idiag_uid; scalar_t__ idiag_wqueue; scalar_t__ idiag_rqueue; int idiag_expires; int idiag_state; scalar_t__ idiag_retrans; } ;
struct inet6_timewait_sock {int tw_v6_daddr; int tw_v6_rcv_saddr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_diag_msg* FUNC_2 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,void*,void*,int ,int) ;
 scalar_t__ VAR_3 ;
 struct inet6_timewait_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct in6_addr*,int *) ;
 long VAR_4 ;
 int FUNC_6 (struct sk_buff*,unsigned char const*) ;
 unsigned char const* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct inet_timewait_sock *VAR_5,
          struct sk_buff *VAR_6, int VAR_7, u32 VAR_8,
          u32 VAR_9, u16 VAR_10,
          const struct nlmsghdr *VAR_11)
{
 long VAR_12;
 struct inet_diag_msg *VAR_13;
 const unsigned char *VAR_14 = FUNC_7(VAR_6);
 struct nlmsghdr *VAR_15 = FUNC_3(VAR_6, VAR_8, VAR_9,
      VAR_11->nlmsg_type, sizeof(*VAR_13));

 VAR_13 = FUNC_2(VAR_15);
 FUNC_0(VAR_5->tw_state != VAR_3);

 VAR_15->nlmsg_flags = VAR_10;

 VAR_12 = VAR_5->tw_ttd - VAR_4;
 if (VAR_12 < 0)
  VAR_12 = 0;

 VAR_13->idiag_family = VAR_5->tw_family;
 VAR_13->idiag_retrans = 0;
 VAR_13->id.idiag_if = VAR_5->tw_bound_dev_if;
 VAR_13->id.idiag_cookie[0] = (u32)(unsigned long)VAR_5;
 VAR_13->id.idiag_cookie[1] = (u32)(((unsigned long)VAR_5 >> 31) >> 1);
 VAR_13->id.idiag_sport = VAR_5->tw_sport;
 VAR_13->id.idiag_dport = VAR_5->tw_dport;
 VAR_13->id.idiag_src[0] = VAR_5->tw_rcv_saddr;
 VAR_13->id.idiag_dst[0] = VAR_5->tw_daddr;
 VAR_13->idiag_state = VAR_5->tw_substate;
 VAR_13->idiag_timer = 3;
 VAR_13->idiag_expires = FUNC_1(VAR_12 * 1000, VAR_2);
 VAR_13->idiag_rqueue = 0;
 VAR_13->idiag_wqueue = 0;
 VAR_13->idiag_uid = 0;
 VAR_13->idiag_inode = 0;
 VAR_15->nlmsg_len = FUNC_7(VAR_6) - VAR_14;
 return VAR_6->len;
nlmsg_failure:
 FUNC_6(VAR_6, VAR_14);
 return -VAR_1;
}
