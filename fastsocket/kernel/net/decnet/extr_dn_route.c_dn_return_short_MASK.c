
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int pkt_type; } ;
struct dn_skb_cb {int rt_flags; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,int *,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6)
{
 struct dn_skb_cb *VAR_7;
 unsigned char *VAR_8;
 __le16 *VAR_9;
 __le16 *VAR_10;


 FUNC_3(VAR_6, VAR_6->data - FUNC_2(VAR_6));

 if ((VAR_6 = FUNC_4(VAR_6, VAR_2)) == ((void*)0))
  return VAR_3;

 VAR_7 = FUNC_0(VAR_6);

 VAR_8 = VAR_6->data + 2;
 *VAR_8++ = (VAR_7->rt_flags & ~VAR_0) | VAR_1;

 VAR_10 = (__le16 *)VAR_8;
 VAR_8 += 2;
 VAR_9 = (__le16 *)VAR_8;
 VAR_8 += 2;
 *VAR_8 = 0;

 FUNC_5(*VAR_9, *VAR_10);

 VAR_6->pkt_type = VAR_5;
 FUNC_1(VAR_6, ((void*)0), ((void*)0));
 return VAR_4;
}
