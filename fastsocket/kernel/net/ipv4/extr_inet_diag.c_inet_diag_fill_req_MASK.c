
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct sock {scalar_t__ sk_family; int sk_bound_dev_if; } ;
struct sk_buff {int len; } ;
struct request_sock {long expires; int retrans; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_flags; int nlmsg_type; } ;
struct inet_sock {int sport; } ;
struct inet_request_sock {int rmt_addr; int loc_addr; int rmt_port; } ;
struct TYPE_3__ {int * idiag_dst; int * idiag_src; int idiag_dport; int idiag_sport; void** idiag_cookie; int idiag_if; } ;
struct inet_diag_msg {scalar_t__ idiag_family; int idiag_timer; TYPE_1__ id; scalar_t__ idiag_inode; int idiag_uid; scalar_t__ idiag_wqueue; scalar_t__ idiag_rqueue; int idiag_expires; int idiag_retrans; int idiag_state; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int rmt_addr; int loc_addr; } ;


 scalar_t__ VAR_0 ;
 struct inet_diag_msg* FUNC_0 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,void*,void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct request_sock*) ;
 struct inet_request_sock* FUNC_3 (struct request_sock*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct in6_addr*,int *) ;
 long VAR_3 ;
 int FUNC_6 (long) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, struct sock *VAR_5,
         struct request_sock *VAR_6, u32 VAR_7, u32 VAR_8,
         const struct nlmsghdr *VAR_9)
{
 const struct inet_request_sock *VAR_10 = FUNC_3(VAR_6);
 struct inet_sock *VAR_11 = FUNC_4(VAR_5);
 unsigned char *VAR_12 = FUNC_8(VAR_4);
 struct inet_diag_msg *VAR_13;
 struct nlmsghdr *VAR_14;
 long VAR_15;

 VAR_14 = FUNC_1(VAR_4, VAR_7, VAR_8, VAR_9->nlmsg_type, sizeof(*VAR_13));
 VAR_14->nlmsg_flags = VAR_1;
 VAR_13 = FUNC_0(VAR_14);

 VAR_13->idiag_family = VAR_5->sk_family;
 VAR_13->idiag_state = VAR_2;
 VAR_13->idiag_timer = 1;
 VAR_13->idiag_retrans = VAR_6->retrans;

 VAR_13->id.idiag_if = VAR_5->sk_bound_dev_if;
 VAR_13->id.idiag_cookie[0] = (u32)(unsigned long)VAR_6;
 VAR_13->id.idiag_cookie[1] = (u32)(((unsigned long)VAR_6 >> 31) >> 1);

 VAR_15 = VAR_6->expires - VAR_3;
 if (VAR_15 < 0)
  VAR_15 = 0;

 VAR_13->id.idiag_sport = VAR_11->sport;
 VAR_13->id.idiag_dport = VAR_10->rmt_port;
 VAR_13->id.idiag_src[0] = VAR_10->loc_addr;
 VAR_13->id.idiag_dst[0] = VAR_10->rmt_addr;
 VAR_13->idiag_expires = FUNC_6(VAR_15);
 VAR_13->idiag_rqueue = 0;
 VAR_13->idiag_wqueue = 0;
 VAR_13->idiag_uid = FUNC_9(VAR_5);
 VAR_13->idiag_inode = 0;
 VAR_14->nlmsg_len = FUNC_8(VAR_4) - VAR_12;

 return VAR_4->len;

nlmsg_failure:
 FUNC_7(VAR_4, VAR_12);
 return -1;
}
