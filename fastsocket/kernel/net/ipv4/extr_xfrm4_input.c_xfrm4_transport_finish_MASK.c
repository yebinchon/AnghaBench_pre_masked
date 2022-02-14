
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; int len; scalar_t__ data; } ;
struct iphdr {int protocol; int tot_len; } ;
struct TYPE_2__ {int protocol; } ;


 int FUNC_0 (int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct iphdr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int VAR_2 ;

int FUNC_7(struct sk_buff *VAR_3, int VAR_4)
{
 struct iphdr *VAR_5 = FUNC_4(VAR_3);

 VAR_5->protocol = FUNC_1(VAR_3)->protocol;


 if (!VAR_4)
  return -VAR_5->protocol;


 FUNC_2(VAR_3, VAR_3->data - FUNC_6(VAR_3));
 VAR_5->tot_len = FUNC_3(VAR_3->len);
 FUNC_5(VAR_5);

 FUNC_0(VAR_1, VAR_0, VAR_3, VAR_3->dev, ((void*)0),
  VAR_2);
 return 0;
}
