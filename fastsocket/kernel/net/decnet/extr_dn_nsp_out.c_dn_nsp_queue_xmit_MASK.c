
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_skb_cb {scalar_t__ xmit_count; } ;
struct dn_scp {int nsp_srtt; int nsp_rttvar; unsigned long stamp; scalar_t__ flowrem_sw; int data_xmit_queue; int other_xmit_queue; int snd_window; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int) ;
 unsigned long VAR_2 ;
 int FUNC_4 (int *,struct sk_buff*) ;

void FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4,
   gfp_t VAR_5, int VAR_6)
{
 struct dn_scp *VAR_7 = FUNC_0(VAR_3);
 struct dn_skb_cb *VAR_8 = FUNC_1(VAR_4);
 unsigned long VAR_9 = ((VAR_7->nsp_srtt >> 2) + VAR_7->nsp_rttvar) >> 1;

 VAR_8->xmit_count = 0;
 FUNC_3(VAR_3, VAR_4, VAR_6);





 if ((VAR_2 - VAR_7->stamp) > VAR_9)
  VAR_7->snd_window = VAR_1;

 if (VAR_6)
  FUNC_4(&VAR_7->other_xmit_queue, VAR_4);
 else
  FUNC_4(&VAR_7->data_xmit_queue, VAR_4);

 if (VAR_7->flowrem_sw != VAR_0)
  return;

 FUNC_2(VAR_4, VAR_5);
}
