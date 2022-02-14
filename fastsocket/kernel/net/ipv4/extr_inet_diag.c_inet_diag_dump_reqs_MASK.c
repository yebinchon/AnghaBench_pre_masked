
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct sock {scalar_t__ sk_family; int sk_userlocks; } ;
struct sk_buff {int dummy; } ;
struct request_sock {struct request_sock* dl_next; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; TYPE_5__* nlh; int skb; } ;
struct listen_sock {int nr_table_entries; struct request_sock** syn_table; int qlen; } ;
struct inet_sock {int num; } ;
struct inet_request_sock {scalar_t__ rmt_port; int rmt_addr; int loc_addr; } ;
struct TYPE_12__ {scalar_t__ idiag_dport; } ;
struct inet_diag_req {TYPE_1__ id; } ;
struct inet_diag_entry {scalar_t__ family; int dport; int * daddr; int * saddr; int userlocks; int sport; } ;
struct TYPE_15__ {int syn_wait_lock; struct listen_sock* listen_opt; } ;
struct inet_connection_sock {TYPE_4__ icsk_accept_queue; } ;
struct TYPE_14__ {int * s6_addr32; } ;
struct TYPE_13__ {int * s6_addr32; } ;
struct TYPE_17__ {TYPE_3__ rmt_addr; TYPE_2__ loc_addr; } ;
struct TYPE_16__ {int nlmsg_seq; } ;
struct TYPE_11__ {int pid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_10__ FUNC_0 (int ) ;
 struct inet_diag_req* FUNC_1 (TYPE_5__*) ;
 TYPE_8__* FUNC_2 (struct request_sock*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ,struct inet_diag_entry*) ;
 int FUNC_5 (struct sk_buff*,struct sock*,struct request_sock*,int ,int ,TYPE_5__*) ;
 struct inet_request_sock* FUNC_6 (struct request_sock*) ;
 struct inet_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct nlattr const*) ;
 int FUNC_9 (struct nlattr const*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int) ;
 struct nlattr* FUNC_11 (TYPE_5__*,int,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_2, struct sock *VAR_3,
          struct netlink_callback *VAR_4)
{
 struct inet_diag_entry VAR_5;
 struct inet_diag_req *VAR_6 = FUNC_1(VAR_4->nlh);
 struct inet_connection_sock *VAR_7 = FUNC_3(VAR_3);
 struct listen_sock *VAR_8;
 const struct nlattr *VAR_9 = ((void*)0);
 struct inet_sock *VAR_10 = FUNC_7(VAR_3);
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_12 = VAR_4->args[3];
 VAR_14 = VAR_4->args[4];

 if (VAR_12 > 0)
  VAR_12--;

 VAR_5.family = VAR_3->sk_family;

 FUNC_13(&VAR_7->icsk_accept_queue.syn_wait_lock);

 VAR_8 = VAR_7->icsk_accept_queue.listen_opt;
 if (!VAR_8 || !VAR_8->qlen)
  goto out;

 if (FUNC_10(VAR_4->nlh, sizeof(*VAR_6))) {
  VAR_9 = FUNC_11(VAR_4->nlh, sizeof(*VAR_6),
         VAR_1);
  VAR_5.sport = VAR_10->num;
  VAR_5.userlocks = VAR_3->sk_userlocks;
 }

 for (VAR_11 = VAR_12; VAR_11 < VAR_8->nr_table_entries; VAR_11++) {
  struct request_sock *VAR_16, *VAR_17 = VAR_8->syn_table[VAR_11];

  VAR_13 = 0;
  for (VAR_16 = VAR_17; VAR_16; VAR_13++, VAR_16 = VAR_16->dl_next) {
   struct inet_request_sock *VAR_18 = FUNC_6(VAR_16);

   if (VAR_13 < VAR_14)
    continue;
   if (VAR_6->id.idiag_dport != VAR_18->rmt_port &&
       VAR_6->id.idiag_dport)
    continue;

   if (VAR_9) {
    VAR_5.saddr =




     &VAR_18->loc_addr;
    VAR_5.daddr =




     &VAR_18->rmt_addr;
    VAR_5.dport = FUNC_12(VAR_18->rmt_port);

    if (!FUNC_4(FUNC_8(VAR_9),
            FUNC_9(VAR_9), &VAR_5))
     continue;
   }

   VAR_15 = FUNC_5(VAR_2, VAR_3, VAR_16,
            FUNC_0(VAR_4->skb).pid,
            VAR_4->nlh->nlmsg_seq, VAR_4->nlh);
   if (VAR_15 < 0) {
    VAR_4->args[3] = VAR_11 + 1;
    VAR_4->args[4] = VAR_13;
    goto out;
   }
  }

  VAR_14 = 0;
 }

out:
 FUNC_14(&VAR_7->icsk_accept_queue.syn_wait_lock);

 return VAR_15;
}
