
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int saddr; } ;


 int FUNC_0 (unsigned char*,int *,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_2(const struct sk_buff *VAR_0, unsigned char *VAR_1)
{
 struct iphdr *VAR_2 = (struct iphdr *) FUNC_1(VAR_0);
 FUNC_0(VAR_1, &VAR_2->saddr, 4);
 return 4;
}
