
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct llc_xid_info {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *,TYPE_1__*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3)
{
 int VAR_4 = 1;
 struct sk_buff *VAR_5 = FUNC_1(((void*)0), VAR_3->dev, VAR_1,
            sizeof(struct llc_xid_info));

 if (!VAR_5)
  goto out;
 FUNC_3(VAR_5, VAR_1, 0, 0, VAR_0);
 FUNC_4(VAR_5, VAR_2, 127);
 VAR_4 = FUNC_2(VAR_5, VAR_3->dev->dev_addr, VAR_3->dev->dev_addr);
 if (FUNC_6(VAR_4))
  goto free;
 FUNC_5(VAR_5);
out:
 return VAR_4;
free:
 FUNC_0(VAR_3);
 goto out;
}
