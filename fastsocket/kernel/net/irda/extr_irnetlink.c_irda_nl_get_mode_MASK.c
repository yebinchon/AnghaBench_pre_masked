
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int name; scalar_t__ atalk_ptr; } ;
struct irlap_cb {int mode; } ;
struct genl_info {int snd_seq; int snd_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 struct net_device* FUNC_4 (int *,struct genl_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 struct net_device * VAR_13;
 struct irlap_cb * VAR_14;
 struct sk_buff *VAR_15;
 void *VAR_16;
 int VAR_17 = -VAR_1;

 VAR_13 = FUNC_4(&VAR_9, VAR_12);
 if (!VAR_13)
  return -VAR_2;

 VAR_15 = FUNC_8(VAR_8, VAR_4);
 if (!VAR_15) {
  FUNC_0(VAR_13);
  return -VAR_3;
 }

 VAR_14 = (struct irlap_cb *)VAR_13->atalk_ptr;
 if (!VAR_14) {
  VAR_17 = -VAR_2;
  goto err_out;
 }

 VAR_16 = FUNC_2(VAR_15, VAR_12->snd_pid, VAR_12->snd_seq,
     &VAR_10, 0, VAR_7);
 if (VAR_16 == ((void*)0)) {
  VAR_17 = -VAR_0;
  goto err_out;
 }

 if(FUNC_5(VAR_15, VAR_5,
     VAR_13->name))
  goto err_out;

 if(FUNC_6(VAR_15, VAR_6, VAR_14->mode))
  goto err_out;

 FUNC_1(VAR_15, VAR_16);

 return FUNC_3(VAR_15, VAR_12);

 err_out:
 FUNC_7(VAR_15);
 FUNC_0(VAR_13);

 return VAR_17;
}
