
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
typedef void* s32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct genl_info*,void*,void*) ;
 int FUNC_1 (struct genl_info*,void*,void*,void*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct nlattr *VAR_11[VAR_2 + 1];
 struct nlattr *VAR_12;
 int VAR_13;

 VAR_12 = VAR_10->attrs[VAR_1];
 if (!VAR_12) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = FUNC_3(VAR_11, VAR_2, VAR_12,
          VAR_8);
 if (VAR_13)
  goto out;

 if (VAR_11[VAR_4] &&
     VAR_11[VAR_3]) {
  s32 VAR_14;
  u32 VAR_15;
  VAR_14 = FUNC_2(VAR_11[VAR_4]);
  VAR_15 = FUNC_2(VAR_11[VAR_3]);
  VAR_13 = FUNC_0(VAR_10, VAR_14, VAR_15);
 } else if (VAR_11[VAR_7] &&
     VAR_11[VAR_6] &&
     VAR_11[VAR_5]) {
  u32 VAR_16, VAR_17, VAR_18;
  VAR_16 = FUNC_2(VAR_11[VAR_7]);
  VAR_17 = FUNC_2(VAR_11[VAR_6]);
  VAR_18 = FUNC_2(VAR_11[VAR_5]);
  VAR_13 = FUNC_1(VAR_10, VAR_16, VAR_17, VAR_18);
 } else
  VAR_13 = -VAR_0;

out:
 return VAR_13;
}
