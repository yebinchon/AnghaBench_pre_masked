
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_skb_cb {int segnum; int nsp_flags; } ;
struct dn_scp {int numdat; int numoth; } ;
typedef int __le16 ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct sock*,struct sk_buff*,int ,int,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static __le16 *FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct dn_scp *VAR_3 = FUNC_0(VAR_0);
 struct dn_skb_cb *VAR_4 = FUNC_1(VAR_1);
 __le16 *VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_4->nsp_flags, 11, VAR_2);

 if (FUNC_5(VAR_2)) {
  VAR_4->segnum = VAR_3->numoth;
  FUNC_4(&VAR_3->numoth, 1);
 } else {
  VAR_4->segnum = VAR_3->numdat;
  FUNC_4(&VAR_3->numdat, 1);
 }
 *(VAR_5++) = FUNC_2(VAR_4->segnum);

 return VAR_5;
}
