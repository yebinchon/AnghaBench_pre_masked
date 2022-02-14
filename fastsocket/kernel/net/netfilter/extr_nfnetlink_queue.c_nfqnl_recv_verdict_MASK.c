
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfqnl_msg_verdict_hdr {int id; int verdict; } ;
struct nfqnl_instance {scalar_t__ peer_pid; } ;
struct nfgenmsg {int res_id; } ;
struct nf_queue_entry {TYPE_1__* skb; } ;
struct TYPE_4__ {scalar_t__ pid; } ;
struct TYPE_3__ {void* mark; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct nfgenmsg* FUNC_1 (struct nlmsghdr const*) ;
 struct nf_queue_entry* FUNC_2 (struct nfqnl_instance*,void*) ;
 struct nfqnl_instance* FUNC_3 (int ) ;
 int FUNC_4 (struct nf_queue_entry*,unsigned int) ;
 scalar_t__ FUNC_5 (struct nfqnl_msg_verdict_hdr*,int ,struct nf_queue_entry*) ;
 struct nfqnl_msg_verdict_hdr* FUNC_6 (struct nlattr const* const) ;
 int FUNC_7 (struct nlattr const* const) ;
 int FUNC_8 (struct nlattr const* const) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct sock *VAR_10, struct sk_buff *VAR_11,
     const struct nlmsghdr *VAR_12,
     const struct nlattr * const VAR_13[])
{
 struct nfgenmsg *VAR_14 = FUNC_1(VAR_12);
 u_int16_t VAR_15 = FUNC_10(VAR_14->res_id);

 struct nfqnl_msg_verdict_hdr *VAR_16;
 struct nfqnl_instance *VAR_17;
 unsigned int VAR_18;
 struct nf_queue_entry *VAR_19;
 int VAR_20;

 FUNC_11();
 VAR_17 = FUNC_3(VAR_15);
 if (!VAR_17) {
  VAR_20 = -VAR_1;
  goto err_out_unlock;
 }

 if (VAR_17->peer_pid != FUNC_0(VAR_11).pid) {
  VAR_20 = -VAR_3;
  goto err_out_unlock;
 }

 if (!VAR_13[VAR_6]) {
  VAR_20 = -VAR_0;
  goto err_out_unlock;
 }

 VAR_16 = FUNC_6(VAR_13[VAR_6]);
 VAR_18 = FUNC_9(VAR_16->verdict);

 if ((VAR_18 & VAR_9) > VAR_8) {
  VAR_20 = -VAR_0;
  goto err_out_unlock;
 }

 VAR_19 = FUNC_2(VAR_17, FUNC_9(VAR_16->id));
 if (VAR_19 == ((void*)0)) {
  VAR_20 = -VAR_2;
  goto err_out_unlock;
 }
 FUNC_12();

 if (VAR_13[VAR_5]) {
  if (FUNC_5(FUNC_6(VAR_13[VAR_5]),
     FUNC_8(VAR_13[VAR_5]), VAR_19) < 0)
   VAR_18 = VAR_7;
 }

 if (VAR_13[VAR_4])
  VAR_19->skb->mark = FUNC_9(FUNC_7(VAR_13[VAR_4]));

 FUNC_4(VAR_19, VAR_18);
 return 0;

err_out_unlock:
 FUNC_12();
 return VAR_20;
}
