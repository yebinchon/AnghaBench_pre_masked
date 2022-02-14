
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2 + sizeof(struct iphdr));
 if (FUNC_4(VAR_4))
  return VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_4(VAR_3 < sizeof(struct iphdr) ||
       VAR_1->len < VAR_2 + VAR_3))
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2 + VAR_3);
 return 0;
}
