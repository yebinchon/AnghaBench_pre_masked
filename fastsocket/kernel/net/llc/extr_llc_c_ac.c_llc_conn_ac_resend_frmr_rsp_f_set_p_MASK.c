
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
struct llc_sock {TYPE_2__ daddr; TYPE_3__* dev; int vR; int vS; struct llc_sap* sap; } ;
struct TYPE_4__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct llc_pdu_sn {int dummy; } ;
struct llc_frmr_info {int dummy; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,TYPE_3__*,int ,int) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct llc_pdu_sn*,int ,int ,int ,int ) ;
 struct llc_pdu_sn* FUNC_7 (struct sk_buff*) ;
 struct llc_sock* FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 u8 VAR_6;
 int VAR_7 = -VAR_0;
 struct sk_buff *VAR_8;
 struct llc_sock *VAR_9 = FUNC_8(VAR_4);

 FUNC_4(VAR_5, &VAR_6);
 VAR_8 = FUNC_1(VAR_4, VAR_9->dev, VAR_3,
          sizeof(struct llc_frmr_info));
 if (VAR_8) {
  struct llc_sap *VAR_10 = VAR_9->sap;
  struct llc_pdu_sn *VAR_11 = FUNC_7(VAR_5);

  FUNC_5(VAR_8, VAR_3, VAR_10->laddr.lsap,
        VAR_9->daddr.lsap, VAR_2);
  FUNC_6(VAR_8, VAR_11, VAR_6, VAR_9->vS,
      VAR_9->vR, VAR_1);
  VAR_7 = FUNC_3(VAR_8, VAR_9->dev->dev_addr, VAR_9->daddr.mac);
  if (FUNC_9(VAR_7))
   goto free;
  FUNC_2(VAR_4, VAR_8);
 }
out:
 return VAR_7;
free:
 FUNC_0(VAR_8);
 goto out;
}
