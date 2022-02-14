
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ethhdr {int h_source; } ;


 int VAR_0 ;
 struct ethhdr* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (unsigned char*,int ,int) ;

int FUNC_2(const struct sk_buff *VAR_1, unsigned char *VAR_2)
{
 const struct ethhdr *VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_3->h_source, VAR_0);
 return VAR_0;
}
