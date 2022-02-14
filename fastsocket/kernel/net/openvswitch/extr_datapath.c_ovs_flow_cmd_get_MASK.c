
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sw_flow {int dummy; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct flow_table {int dummy; } ;
struct datapath {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 struct datapath* FUNC_3 (int ,int ) ;
 struct sk_buff* FUNC_4 (struct sw_flow*,struct datapath*,int ,int ,int ) ;
 int FUNC_5 (struct sw_flow_key*,int*,struct nlattr*) ;
 struct sw_flow* FUNC_6 (struct flow_table*,struct sw_flow_key*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct flow_table* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr **VAR_7 = VAR_6->attrs;
 struct ovs_header *VAR_8 = VAR_6->userhdr;
 struct sw_flow_key VAR_9;
 struct sk_buff *VAR_10;
 struct sw_flow *VAR_11;
 struct datapath *VAR_12;
 struct flow_table *VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_7[VAR_3])
  return -VAR_0;
 VAR_14 = FUNC_5(&VAR_9, &VAR_15, VAR_7[VAR_3]);
 if (VAR_14)
  return VAR_14;

 FUNC_7();
 VAR_12 = FUNC_3(FUNC_10(VAR_5->sk), VAR_8->dp_ifindex);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto unlock;
 }

 VAR_13 = FUNC_9(VAR_12->table);
 VAR_11 = FUNC_6(VAR_13, &VAR_9, VAR_15);
 if (!VAR_11) {
  VAR_14 = -VAR_2;
  goto unlock;
 }

 VAR_10 = FUNC_4(VAR_11, VAR_12, VAR_6->snd_pid,
     VAR_6->snd_seq, VAR_4);
 if (FUNC_0(VAR_10)) {
  VAR_14 = FUNC_1(VAR_10);
  goto unlock;
 }

 FUNC_8();
 return FUNC_2(VAR_10, VAR_6);
unlock:
 FUNC_8();
 return VAR_14;
}
