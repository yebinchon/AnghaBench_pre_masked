
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_dom_map {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 void* FUNC_1 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct netlbl_dom_map* FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,struct netlbl_dom_map*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 int VAR_8 = -VAR_1;
 struct sk_buff *VAR_9 = ((void*)0);
 void *VAR_10;
 struct netlbl_dom_map *VAR_11;

 VAR_9 = FUNC_6(VAR_4, VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_10 = FUNC_1(VAR_9, VAR_7, &VAR_5,
     0, VAR_3);
 if (VAR_10 == ((void*)0))
  goto listdef_failure;

 FUNC_7();
 VAR_11 = FUNC_4(((void*)0));
 if (VAR_11 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto listdef_failure_lock;
 }
 VAR_8 = FUNC_5(VAR_9, VAR_11);
 FUNC_8();
 if (VAR_8 != 0)
  goto listdef_failure;

 FUNC_0(VAR_9, VAR_10);
 return FUNC_2(VAR_9, VAR_7);

listdef_failure_lock:
 FUNC_8();
listdef_failure:
 FUNC_3(VAR_9);
 return VAR_8;
}
