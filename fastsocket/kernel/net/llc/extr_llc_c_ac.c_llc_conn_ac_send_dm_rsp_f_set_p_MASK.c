
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int mac; int lsap; } ;
struct llc_sock {TYPE_2__ daddr; TYPE_3__* dev; struct llc_sap* sap; } ;
struct TYPE_4__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 struct llc_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct llc_sock *VAR_6 = FUNC_7(VAR_3);
 struct sk_buff *VAR_7 = FUNC_1(VAR_3, VAR_6->dev, VAR_2, 0);

 if (VAR_7) {
  struct llc_sap *VAR_8 = VAR_6->sap;
  u8 VAR_9;

  FUNC_4(VAR_4, &VAR_9);
  FUNC_5(VAR_7, VAR_2, VAR_8->laddr.lsap,
        VAR_6->daddr.lsap, VAR_1);
  FUNC_6(VAR_7, VAR_9);
  VAR_5 = FUNC_3(VAR_7, VAR_6->dev->dev_addr, VAR_6->daddr.mac);
  if (FUNC_8(VAR_5))
   goto free;
  FUNC_2(VAR_3, VAR_7);
 }
out:
 return VAR_5;
free:
 FUNC_0(VAR_7);
 goto out;
}
