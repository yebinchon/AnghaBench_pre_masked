
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct lec_priv {int lec_arp_lock; } ;
struct lec_arp_table {int sizeoftlvs; int tlvs; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 struct lec_arp_table* FUNC_2 (struct lec_priv*,int const*) ;
 struct lec_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct lec_priv*,int ,int const*,int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, const u8 *VAR_3, int VAR_4,
    u8 **VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7;
 struct lec_priv *VAR_8 = FUNC_3(VAR_2);
 struct lec_arp_table *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11;

 if (VAR_4 == 0) {
  FUNC_6(&VAR_8->lec_arp_lock, VAR_7);
  VAR_9 = FUNC_2(VAR_8, VAR_3);
  FUNC_7(&VAR_8->lec_arp_lock, VAR_7);
  if (VAR_9 == ((void*)0))
   return -1;

  *VAR_5 = FUNC_1(VAR_9->tlvs, VAR_9->sizeoftlvs, VAR_0);
  if (*VAR_5 == ((void*)0))
   return -1;

  *VAR_6 = VAR_9->sizeoftlvs;

  return 0;
 }

 if (VAR_6 == ((void*)0))
  VAR_11 = FUNC_4(VAR_8, VAR_1, VAR_3, ((void*)0), ((void*)0));

 else {
  VAR_10 = FUNC_0(*VAR_6, VAR_0);
  if (VAR_10 == ((void*)0))
   return -1;
  VAR_10->len = *VAR_6;
  FUNC_5(VAR_10, *VAR_5, *VAR_6);
  VAR_11 = FUNC_4(VAR_8, VAR_1, VAR_3, ((void*)0), VAR_10);
 }
 return VAR_11;
}
