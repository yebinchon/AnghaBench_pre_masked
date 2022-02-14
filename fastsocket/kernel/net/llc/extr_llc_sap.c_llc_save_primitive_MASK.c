
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sockaddr_llc {int sllc_test; int sllc_xid; int sllc_ua; int sllc_sap; int sllc_mac; int sllc_arphrd; int sllc_family; } ;
struct sock {int sk_family; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 struct sockaddr_llc* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sockaddr_llc*,int ,int) ;

void FUNC_4(struct sock *VAR_3, struct sk_buff* VAR_4, u8 VAR_5)
{
 struct sockaddr_llc *VAR_6;


 VAR_6 = FUNC_2(VAR_4);

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->sllc_family = VAR_3->sk_family;
 VAR_6->sllc_arphrd = VAR_4->dev->type;
 VAR_6->sllc_test = VAR_5 == VAR_1;
 VAR_6->sllc_xid = VAR_5 == VAR_2;
 VAR_6->sllc_ua = VAR_5 == VAR_0;
 FUNC_0(VAR_4, VAR_6->sllc_mac);
 FUNC_1(VAR_4, &VAR_6->sllc_sap);
}
