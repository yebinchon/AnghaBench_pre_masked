
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sw_flow_key {int dummy; } ;
struct sw_flow_actions {int sk; int lock; int sf_acts; } ;
struct sw_flow {int sk; int lock; int sf_acts; } ;
struct sk_buff {int sk; int lock; int sf_acts; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; TYPE_2__* nlhdr; TYPE_1__* genlhdr; struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct flow_table {int sk; int lock; int sf_acts; } ;
struct datapath {int table; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int genl_sock; } ;
struct TYPE_8__ {int nlmsg_flags; } ;
struct TYPE_7__ {scalar_t__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sw_flow_actions*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sw_flow_actions*) ;
 int FUNC_2 (struct sw_flow_actions*) ;
 struct datapath* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct sw_flow_actions*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct nlattr*) ;
 TYPE_4__ VAR_11 ;
 struct sw_flow_actions* FUNC_7 (int ) ;
 struct sw_flow_actions* FUNC_8 () ;
 struct sw_flow_actions* FUNC_9 (struct sw_flow_actions*,struct datapath*,int ,int ,scalar_t__) ;
 int FUNC_10 (struct sw_flow_actions*) ;
 int FUNC_11 (struct sw_flow_key*,int*,struct nlattr*) ;
 int FUNC_12 (struct sw_flow_actions*) ;
 struct sw_flow_actions* FUNC_13 (struct sw_flow_actions*) ;
 int FUNC_14 (struct sw_flow_actions*,struct sw_flow_actions*,struct sw_flow_key*,int) ;
 struct sw_flow_actions* FUNC_15 (struct sw_flow_actions*,struct sw_flow_key*,int) ;
 scalar_t__ FUNC_16 (struct sw_flow_actions*) ;
 int FUNC_17 () ;
 int FUNC_18 (struct sw_flow_actions*,struct genl_info*,TYPE_4__*) ;
 int FUNC_19 () ;
 struct sw_flow_actions* FUNC_20 (int ) ;
 int FUNC_21 (int ,struct sw_flow_actions*) ;
 TYPE_3__* FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct nlattr*,struct sw_flow_key*,int ,struct sw_flow_actions**) ;

__attribute__((used)) static int FUNC_26(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 struct nlattr **VAR_14 = VAR_13->attrs;
 struct ovs_header *VAR_15 = VAR_13->userhdr;
 struct sw_flow_key VAR_16;
 struct sw_flow *VAR_17;
 struct sk_buff *VAR_18;
 struct datapath *VAR_19;
 struct flow_table *VAR_20;
 struct sw_flow_actions *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23;


 VAR_22 = -VAR_1;
 if (!VAR_14[VAR_8])
  goto error;
 VAR_22 = FUNC_11(&VAR_16, &VAR_23, VAR_14[VAR_8]);
 if (VAR_22)
  goto error;


 if (VAR_14[VAR_6]) {
  VAR_21 = FUNC_7(FUNC_6(VAR_14[VAR_6]));
  VAR_22 = FUNC_1(VAR_21);
  if (FUNC_0(VAR_21))
   goto error;

  VAR_22 = FUNC_25(VAR_14[VAR_6], &VAR_16, 0, &VAR_21);
  if (VAR_22)
   goto err_kfree;
 } else if (VAR_13->genlhdr->cmd == VAR_9) {
  VAR_22 = -VAR_1;
  goto error;
 }

 FUNC_17();
 VAR_19 = FUNC_3(FUNC_22(VAR_12->sk), VAR_15->dp_ifindex);
 VAR_22 = -VAR_2;
 if (!VAR_19)
  goto err_unlock_ovs;

 VAR_20 = FUNC_20(VAR_19->table);
 VAR_17 = FUNC_15(VAR_20, &VAR_16, VAR_23);
 if (!VAR_17) {

  VAR_22 = -VAR_3;
  if (VAR_13->genlhdr->cmd == VAR_10)
   goto err_unlock_ovs;


  if (FUNC_16(VAR_20)) {
   struct flow_table *VAR_24;

   VAR_24 = FUNC_13(VAR_20);
   if (!FUNC_0(VAR_24)) {
    FUNC_21(VAR_19->table, VAR_24);
    FUNC_12(VAR_20);
    VAR_20 = FUNC_20(VAR_19->table);
   }
  }


  VAR_17 = FUNC_8();
  if (FUNC_0(VAR_17)) {
   VAR_22 = FUNC_1(VAR_17);
   goto err_unlock_ovs;
  }
  FUNC_2(VAR_17);

  FUNC_21(VAR_17->sf_acts, VAR_21);


  FUNC_14(VAR_20, VAR_17, &VAR_16, VAR_23);

  VAR_18 = FUNC_9(VAR_17, VAR_19, VAR_13->snd_pid,
      VAR_13->snd_seq,
      VAR_9);
 } else {

  struct sw_flow_actions *VAR_25;







  VAR_22 = -VAR_0;
  if (VAR_13->genlhdr->cmd == VAR_9 &&
      VAR_13->nlhdr->nlmsg_flags & (VAR_4 | VAR_5))
   goto err_unlock_ovs;


  VAR_25 = FUNC_20(VAR_17->sf_acts);
  FUNC_21(VAR_17->sf_acts, VAR_21);
  FUNC_10(VAR_25);

  VAR_18 = FUNC_9(VAR_17, VAR_19, VAR_13->snd_pid,
            VAR_13->snd_seq, VAR_9);


  if (VAR_14[VAR_7]) {
   FUNC_23(&VAR_17->lock);
   FUNC_2(VAR_17);
   FUNC_24(&VAR_17->lock);
  }
 }
 FUNC_19();

 if (!FUNC_0(VAR_18))
  FUNC_18(VAR_18, VAR_13, &VAR_11);
 else
  FUNC_5(FUNC_22(VAR_12->sk)->genl_sock, 0,
    VAR_11.id, FUNC_1(VAR_18));
 return 0;

err_unlock_ovs:
 FUNC_19();
err_kfree:
 FUNC_4(VAR_21);
error:
 return VAR_22;
}
