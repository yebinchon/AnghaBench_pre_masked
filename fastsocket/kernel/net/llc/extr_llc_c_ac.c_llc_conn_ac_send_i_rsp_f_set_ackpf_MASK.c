
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int mac; int lsap; } ;
struct llc_sock {TYPE_3__ daddr; TYPE_1__* dev; int vR; int vS; int ack_pf; struct llc_sap* sap; } ;
struct TYPE_5__ {int lsap; } ;
struct llc_sap {TYPE_2__ laddr; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 struct llc_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_2,
           struct sk_buff *VAR_3)
{
 int VAR_4;
 struct llc_sock *VAR_5 = FUNC_6(VAR_2);
 struct llc_sap *VAR_6 = VAR_5->sap;

 FUNC_4(VAR_3, VAR_1, VAR_6->laddr.lsap,
       VAR_5->daddr.lsap, VAR_0);
 FUNC_5(VAR_3, VAR_5->ack_pf, VAR_5->vS, VAR_5->vR);
 VAR_4 = FUNC_3(VAR_3, VAR_5->dev->dev_addr, VAR_5->daddr.mac);
 if (FUNC_0(!VAR_4)) {
  FUNC_2(VAR_2, VAR_3);
  FUNC_1(VAR_2, VAR_3);
 }
 return VAR_4;
}
