
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct sw_flow {int dummy; } ;
struct sk_buff {int len; int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct netlink_callback {void** args; TYPE_1__* nlh; int skb; } ;
struct flow_table {int dummy; } ;
struct datapath {int table; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ovs_header* FUNC_1 (int ) ;
 struct datapath* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct sw_flow*,struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;
 struct sw_flow* FUNC_5 (struct flow_table*,void**,void**) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct flow_table* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct netlink_callback *VAR_4)
{
 struct ovs_header *VAR_5 = FUNC_1(FUNC_3(VAR_4->nlh));
 struct datapath *VAR_6;
 struct flow_table *VAR_7;

 FUNC_6();
 VAR_6 = FUNC_2(FUNC_9(VAR_3->sk), VAR_5->dp_ifindex);
 if (!VAR_6) {
  FUNC_7();
  return -VAR_0;
 }

 VAR_7 = FUNC_8(VAR_6->table);

 for (;;) {
  struct sw_flow *VAR_8;
  u32 VAR_9, VAR_10;

  VAR_9 = VAR_4->args[0];
  VAR_10 = VAR_4->args[1];
  VAR_8 = FUNC_5(VAR_7, &VAR_9, &VAR_10);
  if (!VAR_8)
   break;

  if (FUNC_4(VAR_8, VAR_6, VAR_3,
        FUNC_0(VAR_4->skb).pid,
        VAR_4->nlh->nlmsg_seq, VAR_1,
        VAR_2) < 0)
   break;

  VAR_4->args[0] = VAR_9;
  VAR_4->args[1] = VAR_10;
 }
 FUNC_7();
 return VAR_3->len;
}
