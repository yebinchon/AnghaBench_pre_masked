
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
struct file {int f_dentry; } ;
struct cgroupstats {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cgroupstats*,int ) ;
 struct file* FUNC_1 (int ,int*) ;
 int FUNC_2 (struct file*,int) ;
 int FUNC_3 (struct cgroupstats*,int ,int) ;
 struct cgroupstats* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ,int) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct genl_info*,int ,struct sk_buff**,size_t) ;
 int FUNC_10 (struct sk_buff*,struct genl_info*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 int VAR_6 = 0;
 struct sk_buff *VAR_7;
 struct cgroupstats *VAR_8;
 struct nlattr *VAR_9;
 size_t VAR_10;
 u32 VAR_11;
 struct file *VAR_12;
 int VAR_13;

 VAR_9 = VAR_5->attrs[VAR_0];
 if (!VAR_9)
  return -VAR_3;

 VAR_11 = FUNC_5(VAR_5->attrs[VAR_0]);
 VAR_12 = FUNC_1(VAR_11, &VAR_13);
 if (!VAR_12)
  return 0;

 VAR_10 = FUNC_7(sizeof(struct cgroupstats));

 VAR_6 = FUNC_9(VAR_5, VAR_1, &VAR_7,
    VAR_10);
 if (VAR_6 < 0)
  goto err;

 VAR_9 = FUNC_6(VAR_7, VAR_2,
    sizeof(struct cgroupstats));
 VAR_8 = FUNC_4(VAR_9);
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));

 VAR_6 = FUNC_0(VAR_8, VAR_12->f_dentry);
 if (VAR_6 < 0) {
  FUNC_8(VAR_7);
  goto err;
 }

 VAR_6 = FUNC_10(VAR_7, VAR_5);

err:
 FUNC_2(VAR_12, VAR_13);
 return VAR_6;
}
