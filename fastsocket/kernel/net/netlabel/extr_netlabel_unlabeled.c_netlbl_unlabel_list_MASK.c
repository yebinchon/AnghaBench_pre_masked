
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
 int VAR_7 ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 int VAR_10 = -VAR_0;
 struct sk_buff *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_5(VAR_5, VAR_2);
 if (VAR_11 == ((void*)0))
  goto list_failure;
 VAR_12 = FUNC_1(VAR_11, VAR_9, &VAR_7,
     0, VAR_4);
 if (VAR_12 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto list_failure;
 }

 VAR_10 = FUNC_4(VAR_11,
        VAR_3,
        VAR_6);
 if (VAR_10 != 0)
  goto list_failure;

 FUNC_0(VAR_11, VAR_12);
 return FUNC_2(VAR_11, VAR_9);

list_failure:
 FUNC_3(VAR_11);
 return VAR_10;
}
