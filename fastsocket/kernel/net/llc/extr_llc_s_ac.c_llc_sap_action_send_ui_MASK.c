
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int mac; int lsap; } ;
struct TYPE_3__ {int mac; int lsap; } ;
struct llc_sap_state_ev {TYPE_2__ daddr; TYPE_1__ saddr; } ;
struct llc_sap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct llc_sap_state_ev* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct llc_sap *VAR_2, struct sk_buff *VAR_3)
{
 struct llc_sap_state_ev *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 FUNC_3(VAR_3, VAR_1, VAR_4->saddr.lsap,
       VAR_4->daddr.lsap, VAR_0);
 FUNC_4(VAR_3);
 VAR_5 = FUNC_2(VAR_3, VAR_4->saddr.mac, VAR_4->daddr.mac);
 if (FUNC_1(!VAR_5))
  VAR_5 = FUNC_0(VAR_3);
 return VAR_5;
}
