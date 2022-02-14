
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfulnl_msg_config_mode {int copy_range; int copy_mode; } ;
struct nfulnl_msg_config_cmd {int command; } ;
struct nfulnl_instance {scalar_t__ peer_pid; } ;
struct nfgenmsg {int nfgen_family; int res_id; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfulnl_instance*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;




 struct nfgenmsg* FUNC_2 (struct nlmsghdr const*) ;
 int FUNC_3 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct nfulnl_instance*) ;
 struct nfulnl_instance* FUNC_6 (int ) ;
 int FUNC_7 (struct nfulnl_instance*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int FUNC_10 (struct nfulnl_instance*,int ) ;
 int FUNC_11 (struct nfulnl_instance*,int ,int ) ;
 int FUNC_12 (struct nfulnl_instance*,int ) ;
 int FUNC_13 (struct nfulnl_instance*,int ) ;
 int FUNC_14 (struct nfulnl_instance*,int ) ;
 void* FUNC_15 (struct nlattr const* const) ;
 int FUNC_16 (struct nlattr const* const) ;
 int FUNC_17 (struct nlattr const* const) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct sock *VAR_11, struct sk_buff *VAR_12,
     const struct nlmsghdr *VAR_13,
     const struct nlattr * const VAR_14[])
{
 struct nfgenmsg *VAR_15 = FUNC_2(VAR_13);
 u_int16_t VAR_16 = FUNC_19(VAR_15->res_id);
 struct nfulnl_instance *VAR_17;
 struct nfulnl_msg_config_cmd *VAR_18 = ((void*)0);
 int VAR_19 = 0;

 if (VAR_14[VAR_4]) {
  u_int8_t VAR_20 = VAR_15->nfgen_family;
  VAR_18 = FUNC_15(VAR_14[VAR_4]);


  switch (VAR_18->command) {
  case 130:
   return FUNC_8(VAR_20, &VAR_10);
  case 129:
   FUNC_9(VAR_20);
   return 0;
  }
 }

 VAR_17 = FUNC_6(VAR_16);
 if (VAR_17 && VAR_17->peer_pid != FUNC_1(VAR_12).pid) {
  VAR_19 = -VAR_3;
  goto out_put;
 }

 if (VAR_18 != ((void*)0)) {
  switch (VAR_18->command) {
  case 131:
   if (VAR_17) {
    VAR_19 = -VAR_0;
    goto out_put;
   }

   VAR_17 = FUNC_4(VAR_16,
            FUNC_1(VAR_12).pid);
   if (FUNC_0(VAR_17)) {
    VAR_19 = FUNC_3(VAR_17);
    goto out;
   }
   break;
  case 128:
   if (!VAR_17) {
    VAR_19 = -VAR_1;
    goto out;
   }

   FUNC_5(VAR_17);
   goto out;
  default:
   VAR_19 = -VAR_2;
   break;
  }
 }

 if (VAR_14[VAR_6]) {
  struct nfulnl_msg_config_mode *VAR_21;
  VAR_21 = FUNC_15(VAR_14[VAR_6]);

  if (!VAR_17) {
   VAR_19 = -VAR_1;
   goto out;
  }
  FUNC_11(VAR_17, VAR_21->copy_mode,
    FUNC_18(VAR_21->copy_range));
 }

 if (VAR_14[VAR_9]) {
  __be32 VAR_22 = FUNC_17(VAR_14[VAR_9]);

  if (!VAR_17) {
   VAR_19 = -VAR_1;
   goto out;
  }
  FUNC_14(VAR_17, FUNC_18(VAR_22));
 }

 if (VAR_14[VAR_7]) {
  __be32 VAR_23 = FUNC_17(VAR_14[VAR_7]);

  if (!VAR_17) {
   VAR_19 = -VAR_1;
   goto out;
  }
  FUNC_12(VAR_17, FUNC_18(VAR_23));
 }

 if (VAR_14[VAR_8]) {
  __be32 VAR_24 = FUNC_17(VAR_14[VAR_8]);

  if (!VAR_17) {
   VAR_19 = -VAR_1;
   goto out;
  }
  FUNC_13(VAR_17, FUNC_18(VAR_24));
 }

 if (VAR_14[VAR_5]) {
  __be16 VAR_25 = FUNC_16(VAR_14[VAR_5]);

  if (!VAR_17) {
   VAR_19 = -VAR_1;
   goto out;
  }
  FUNC_10(VAR_17, FUNC_19(VAR_25));
 }

out_put:
 FUNC_7(VAR_17);
out:
 return VAR_19;
}
