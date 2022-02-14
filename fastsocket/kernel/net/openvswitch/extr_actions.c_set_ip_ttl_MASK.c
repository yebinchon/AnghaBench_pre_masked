
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct iphdr {int ttl; int check; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct iphdr *VAR_1, u8 VAR_2)
{
 FUNC_0(&VAR_1->check, FUNC_1(VAR_1->ttl << 8), FUNC_1(VAR_2 << 8));
 VAR_1->ttl = VAR_2;
}
