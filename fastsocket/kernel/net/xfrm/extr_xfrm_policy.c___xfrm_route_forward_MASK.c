
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (int ) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct flowi*,unsigned short) ;
 scalar_t__ FUNC_5 (struct net*,struct dst_entry**,struct flowi*,int *,int ) ;

int FUNC_6(struct sk_buff *VAR_1, unsigned short VAR_2)
{
 struct net *VAR_3 = FUNC_1(VAR_1->dev);
 struct flowi VAR_4;
 struct dst_entry *VAR_5;
 int VAR_6;

 if (FUNC_4(VAR_1, &VAR_4, VAR_2) < 0) {

  FUNC_0(VAR_3, VAR_0);
  return 0;
 }

 VAR_5 = FUNC_2(VAR_1);

 VAR_6 = FUNC_5(VAR_3, &VAR_5, &VAR_4, ((void*)0), 0) == 0;
 FUNC_3(VAR_1, VAR_5);
 return VAR_6;
}
