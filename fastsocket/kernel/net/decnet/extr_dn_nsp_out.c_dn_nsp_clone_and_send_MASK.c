
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct dn_skb_cb {int xmit_count; int stamp; } ;
typedef int gfp_t ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline unsigned FUNC_3(struct sk_buff *VAR_1,
          gfp_t VAR_2)
{
 struct dn_skb_cb *VAR_3 = FUNC_0(VAR_1);
 struct sk_buff *VAR_4;
 int VAR_5 = 0;

 if ((VAR_4 = FUNC_2(VAR_1, VAR_2)) != ((void*)0)) {
  VAR_5 = VAR_3->xmit_count;
  VAR_3->xmit_count++;
  VAR_3->stamp = VAR_0;
  VAR_4->sk = VAR_1->sk;
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
