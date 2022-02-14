
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int pkt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2)
{
 FUNC_5(VAR_2);
 FUNC_1(VAR_2, FUNC_4(VAR_2));
 VAR_2->pkt_type = VAR_1;
 VAR_2->ip_summed = VAR_0;
 FUNC_0(!FUNC_3(VAR_2));

 FUNC_2(VAR_2);
 return 0;
}
