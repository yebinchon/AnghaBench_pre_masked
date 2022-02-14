
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int mac_pdu_q; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__ VAR_0 ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1)
{
 FUNC_2(&VAR_0.mac_pdu_q, VAR_1);
 while ((VAR_1 = FUNC_1(&VAR_0.mac_pdu_q)) != ((void*)0))
  if (FUNC_0(VAR_1))
   break;
}
