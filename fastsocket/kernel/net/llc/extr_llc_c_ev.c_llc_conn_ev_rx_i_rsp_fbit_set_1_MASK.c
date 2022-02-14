
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_2__ {scalar_t__ vR; } ;


 scalar_t__ FUNC_0 (struct llc_pdu_sn const*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_sn const*) ;
 scalar_t__ FUNC_2 (struct llc_pdu_sn const*) ;
 scalar_t__ FUNC_3 (struct llc_pdu_sn const*) ;
 struct llc_pdu_sn* FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 const struct llc_pdu_sn *VAR_2 = FUNC_4(VAR_1);

 return FUNC_2(VAR_2) && FUNC_3(VAR_2) &&
        FUNC_1(VAR_2) &&
        FUNC_0(VAR_2) == FUNC_5(VAR_0)->vR ? 0 : 1;
}
