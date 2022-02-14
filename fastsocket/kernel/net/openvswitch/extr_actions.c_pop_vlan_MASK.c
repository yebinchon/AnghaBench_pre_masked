
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ len; scalar_t__ vlan_tci; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2)
{
 __be16 VAR_3;
 int VAR_4;

 if (FUNC_3(FUNC_6(VAR_2))) {
  VAR_2->vlan_tci = 0;
 } else {
  if (FUNC_5(VAR_2->protocol != FUNC_2(VAR_0) ||
        VAR_2->len < VAR_1))
   return 0;

  VAR_4 = FUNC_0(VAR_2, &VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 if (FUNC_3(VAR_2->protocol != FUNC_2(VAR_0) ||
     VAR_2->len < VAR_1))
  return 0;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (FUNC_5(VAR_4))
  return VAR_4;

 FUNC_1(VAR_2, FUNC_4(VAR_3));
 return 0;
}
