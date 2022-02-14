
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct taskstats {int dummy; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; int snd_pid; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,struct taskstats*) ;
 int FUNC_3 (int ,int *,struct taskstats*) ;
 int FUNC_4 (int ) ;
 struct taskstats* FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct genl_info*,int ,struct sk_buff**,size_t) ;
 int FUNC_11 (struct sk_buff*,struct genl_info*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_12, struct genl_info *VAR_13)
{
 int VAR_14;
 struct sk_buff *VAR_15;
 struct taskstats *VAR_16;
 size_t VAR_17;
 cpumask_var_t VAR_18;

 if (!FUNC_1(&VAR_18, VAR_3))
  return -VAR_2;

 VAR_14 = FUNC_9(VAR_13->attrs[VAR_7], VAR_18);
 if (VAR_14 < 0)
  goto free_return_rc;
 if (VAR_14 == 0) {
  VAR_14 = FUNC_0(VAR_13->snd_pid, VAR_18, VAR_4);
  goto free_return_rc;
 }

 VAR_14 = FUNC_9(VAR_13->attrs[VAR_5], VAR_18);
 if (VAR_14 < 0)
  goto free_return_rc;
 if (VAR_14 == 0) {
  VAR_14 = FUNC_0(VAR_13->snd_pid, VAR_18, VAR_0);
free_return_rc:
  FUNC_4(VAR_18);
  return VAR_14;
 }
 FUNC_4(VAR_18);




 VAR_17 = FUNC_7(sizeof(u32)) +
  FUNC_7(sizeof(struct taskstats)) + FUNC_7(0);

 VAR_14 = FUNC_10(VAR_13, VAR_9, &VAR_15, VAR_17);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = -VAR_1;
 if (VAR_13->attrs[VAR_6]) {
  u32 VAR_19 = FUNC_6(VAR_13->attrs[VAR_6]);
  VAR_16 = FUNC_5(VAR_15, VAR_10, VAR_19);
  if (!VAR_16)
   goto err;

  VAR_14 = FUNC_2(VAR_19, ((void*)0), VAR_16);
  if (VAR_14 < 0)
   goto err;
 } else if (VAR_13->attrs[VAR_8]) {
  u32 VAR_20 = FUNC_6(VAR_13->attrs[VAR_8]);
  VAR_16 = FUNC_5(VAR_15, VAR_11, VAR_20);
  if (!VAR_16)
   goto err;

  VAR_14 = FUNC_3(VAR_20, ((void*)0), VAR_16);
  if (VAR_14 < 0)
   goto err;
 } else
  goto err;

 return FUNC_11(VAR_15, VAR_13);
err:
 FUNC_8(VAR_15);
 return VAR_14;
}
