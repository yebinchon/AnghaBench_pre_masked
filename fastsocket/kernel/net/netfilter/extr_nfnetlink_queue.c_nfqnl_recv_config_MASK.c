
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfqnl_msg_config_params {int copy_range; int copy_mode; } ;
struct nfqnl_msg_config_cmd {int command; int pf; } ;
struct nfqnl_instance {scalar_t__ peer_pid; int flags; int lock; void* queue_maxlen; } ;
struct nfgenmsg {int res_id; } ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfqnl_instance*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;




 struct nfgenmsg* FUNC_2 (struct nlmsghdr const*) ;
 int FUNC_3 (struct nfqnl_instance*) ;
 struct nfqnl_instance* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct nfqnl_instance*) ;
 struct nfqnl_instance* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_12 ;
 int FUNC_9 (struct nfqnl_instance*,int ,void*) ;
 void* FUNC_10 (struct nlattr const* const) ;
 int FUNC_11 (struct nlattr const* const) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct sock *VAR_13, struct sk_buff *VAR_14,
    const struct nlmsghdr *VAR_15,
    const struct nlattr * const VAR_16[])
{
 struct nfgenmsg *VAR_17 = FUNC_2(VAR_15);
 u_int16_t VAR_18 = FUNC_13(VAR_17->res_id);
 struct nfqnl_instance *VAR_19;
 struct nfqnl_msg_config_cmd *VAR_20 = ((void*)0);
 int VAR_21 = 0;

 if (VAR_16[VAR_6]) {
  VAR_20 = FUNC_10(VAR_16[VAR_6]);


  switch (VAR_20->command) {
  case 130:
   return FUNC_7(FUNC_13(VAR_20->pf),
        &VAR_12);
  case 129:
   return FUNC_8(FUNC_13(VAR_20->pf),
          &VAR_12);
  }
 }

 FUNC_14();
 VAR_19 = FUNC_6(VAR_18);
 if (VAR_19 && VAR_19->peer_pid != FUNC_1(VAR_14).pid) {
  VAR_21 = -VAR_5;
  goto err_out_unlock;
 }

 if (VAR_20 != ((void*)0)) {
  switch (VAR_20->command) {
  case 131:
   if (VAR_19) {
    VAR_21 = -VAR_0;
    goto err_out_unlock;
   }
   VAR_19 = FUNC_4(VAR_18, FUNC_1(VAR_14).pid);
   if (FUNC_0(VAR_19)) {
    VAR_21 = FUNC_3(VAR_19);
    goto err_out_unlock;
   }
   break;
  case 128:
   if (!VAR_19) {
    VAR_21 = -VAR_2;
    goto err_out_unlock;
   }
   FUNC_5(VAR_19);
   break;
  case 130:
  case 129:
   break;
  default:
   VAR_21 = -VAR_3;
   break;
  }
 }

 if (VAR_16[VAR_10]) {
  struct nfqnl_msg_config_params *VAR_22;

  if (!VAR_19) {
   VAR_21 = -VAR_2;
   goto err_out_unlock;
  }
  VAR_22 = FUNC_10(VAR_16[VAR_10]);
  FUNC_9(VAR_19, VAR_22->copy_mode,
    FUNC_12(VAR_22->copy_range));
 }

 if (VAR_16[VAR_11]) {
  __be32 *VAR_23;

  if (!VAR_19) {
   VAR_21 = -VAR_2;
   goto err_out_unlock;
  }
  VAR_23 = FUNC_10(VAR_16[VAR_11]);
  FUNC_16(&VAR_19->lock);
  VAR_19->queue_maxlen = FUNC_12(*VAR_23);
  FUNC_17(&VAR_19->lock);
 }

 if (VAR_16[VAR_7]) {
  __u32 VAR_24, VAR_25;

  if (!VAR_19) {
   VAR_21 = -VAR_2;
   goto err_out_unlock;
  }

  if (!VAR_16[VAR_9]) {



   VAR_21 = -VAR_1;
   goto err_out_unlock;
  }

  VAR_24 = FUNC_12(FUNC_11(VAR_16[VAR_7]));
  VAR_25 = FUNC_12(FUNC_11(VAR_16[VAR_9]));

  if (VAR_24 >= VAR_8) {
   VAR_21 = -VAR_4;
   goto err_out_unlock;
  }

  FUNC_16(&VAR_19->lock);
  VAR_19->flags &= ~VAR_25;
  VAR_19->flags |= VAR_24 & VAR_25;
  FUNC_17(&VAR_19->lock);
 }

err_out_unlock:
 FUNC_15();
 return VAR_21;
}
