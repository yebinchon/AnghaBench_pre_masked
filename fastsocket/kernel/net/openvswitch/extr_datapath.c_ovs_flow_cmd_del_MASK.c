
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct datapath*) ;
 struct datapath* FUNC_2 (int ,int ) ;
 int VAR_5 ;
 struct sk_buff* FUNC_3 (struct sw_flow*) ;
 int FUNC_4 (struct sw_flow*,struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sw_flow*) ;
 int FUNC_6 (struct sw_flow_key*,int*,struct nlattr*) ;
 struct sw_flow* FUNC_7 (struct flow_table*,struct sw_flow_key*,int) ;
 int FUNC_8 (struct flow_table*,struct sw_flow*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,struct genl_info*,int *) ;
 int FUNC_11 () ;
 struct flow_table* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct nlattr **VAR_8 = VAR_7->attrs;
 struct ovs_header *VAR_9 = VAR_7->userhdr;
 struct sw_flow_key VAR_10;
 struct sk_buff *VAR_11;
 struct sw_flow *VAR_12;
 struct datapath *VAR_13;
 struct flow_table *VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_9();
 VAR_13 = FUNC_2(FUNC_13(VAR_6->sk), VAR_9->dp_ifindex);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto unlock;
 }

 if (!VAR_8[VAR_3]) {
  VAR_15 = FUNC_1(VAR_13);
  goto unlock;
 }
 VAR_15 = FUNC_6(&VAR_10, &VAR_16, VAR_8[VAR_3]);
 if (VAR_15)
  goto unlock;

 VAR_14 = FUNC_12(VAR_13->table);
 VAR_12 = FUNC_7(VAR_14, &VAR_10, VAR_16);
 if (!VAR_12) {
  VAR_15 = -VAR_1;
  goto unlock;
 }

 VAR_11 = FUNC_3(VAR_12);
 if (!VAR_11) {
  VAR_15 = -VAR_2;
  goto unlock;
 }

 FUNC_8(VAR_14, VAR_12);

 VAR_15 = FUNC_4(VAR_12, VAR_13, VAR_11, VAR_7->snd_pid,
         VAR_7->snd_seq, 0, VAR_4);
 FUNC_0(VAR_15 < 0);

 FUNC_5(VAR_12);
 FUNC_11();

 FUNC_10(VAR_11, VAR_7, &VAR_5);
 return 0;
unlock:
 FUNC_11();
 return VAR_15;
}
