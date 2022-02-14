
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dn_skb_cb {int rt_flags; int nsp_flags; } ;


 int VAR_0 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_1 (struct sk_buff*,int ,unsigned short) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_6, unsigned short VAR_7)
{
 struct dn_skb_cb *VAR_8 = FUNC_0(VAR_6);
 int VAR_9 = VAR_1;


 if (VAR_8->rt_flags & VAR_0)
  goto out;

 if ((VAR_7 != VAR_5) && ((VAR_8->nsp_flags & 0x0c) == 0x08)) {
  switch(VAR_8->nsp_flags & 0x70) {
   case 0x10:
   case 0x60:
    FUNC_1(VAR_6, VAR_4, VAR_7);
    VAR_9 = VAR_2;
    break;
   case 0x20:
    FUNC_1(VAR_6, VAR_3, VAR_7);
    VAR_9 = VAR_2;
    break;
  }
 }

out:
 FUNC_2(VAR_6);
 return VAR_9;
}
