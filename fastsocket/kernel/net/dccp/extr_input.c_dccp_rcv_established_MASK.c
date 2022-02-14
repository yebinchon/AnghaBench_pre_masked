
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int * dccps_hc_rx_ackvec; } ;
struct dccp_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ dccpd_ack_seq; int dccpd_seq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct dccp_hdr const*,unsigned int const) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,struct sock*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,int *,struct sk_buff*) ;
 struct dccp_sock* FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_2, struct sk_buff *VAR_3,
    const struct dccp_hdr *VAR_4, const unsigned VAR_5)
{
 struct dccp_sock *VAR_6 = FUNC_8(VAR_2);

 if (FUNC_4(VAR_2, VAR_3))
  goto discard;

 if (FUNC_7(VAR_2, ((void*)0), VAR_3))
  return 1;

 if (FUNC_0(VAR_3)->dccpd_ack_seq != VAR_1)
  FUNC_6(VAR_2, VAR_3);

 if (VAR_6->dccps_hc_rx_ackvec != ((void*)0) &&
     FUNC_3(VAR_6->dccps_hc_rx_ackvec, VAR_2,
       FUNC_0(VAR_3)->dccpd_seq,
       VAR_0))
  goto discard;
 FUNC_5(VAR_2, VAR_3);

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
discard:
 FUNC_2(VAR_3);
 return 0;
}
