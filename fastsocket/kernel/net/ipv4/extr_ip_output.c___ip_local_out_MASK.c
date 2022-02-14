
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct iphdr {int tot_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 int FUNC_3 (int ,int ,struct sk_buff*,int *,int ,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_3)
{
 struct iphdr *VAR_4 = FUNC_1(VAR_3);

 VAR_4->tot_len = FUNC_0(VAR_3->len);
 FUNC_2(VAR_4);
 return FUNC_3(VAR_1, VAR_0, VAR_3, ((void*)0), FUNC_4(VAR_3)->dev,
         VAR_2);
}
