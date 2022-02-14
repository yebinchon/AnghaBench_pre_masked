
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 void* FUNC_1 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 int VAR_9 = -VAR_0;
 struct sk_buff *VAR_10 = ((void*)0);
 void *VAR_11;

 VAR_10 = FUNC_5(VAR_5, VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;
 VAR_11 = FUNC_1(VAR_10, VAR_8, &VAR_6,
     0, VAR_4);
 if (VAR_11 == ((void*)0))
  goto version_failure;

 VAR_9 = FUNC_4(VAR_10,
         VAR_3,
         VAR_2);
 if (VAR_9 != 0)
  goto version_failure;

 FUNC_0(VAR_10, VAR_11);
 return FUNC_2(VAR_10, VAR_8);

version_failure:
 FUNC_3(VAR_10);
 return VAR_9;
}
