
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {TYPE_3__* dev; } ;
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
 u8 VAR_5;
 int VAR_6 = -VAR_0;
 struct llc_sock *VAR_7 = FUNC_7(VAR_3);
 struct sk_buff *VAR_8 = FUNC_1(VAR_3, VAR_7->dev, VAR_2, 0);

 FUNC_4(VAR_4, &VAR_5);
 if (VAR_8) {
  struct llc_sap *VAR_9 = VAR_7->sap;

  VAR_8->dev = VAR_7->dev;
  FUNC_5(VAR_8, VAR_2, VAR_9->laddr.lsap,
        VAR_7->daddr.lsap, VAR_1);
  FUNC_6(VAR_8, VAR_5);
  VAR_6 = FUNC_3(VAR_8, VAR_7->dev->dev_addr, VAR_7->daddr.mac);
  if (FUNC_8(VAR_6))
   goto free;
  FUNC_2(VAR_3, VAR_8);
 }
out:
 return VAR_6;
free:
 FUNC_0(VAR_8);
 goto out;
}
