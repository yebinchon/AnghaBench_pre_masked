
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipip_net {int dummy; } ;
struct ip_tunnel {struct ip_tunnel* next; } ;


 struct ip_tunnel** FUNC_0 (struct ipip_net*,struct ip_tunnel*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ipip_net *VAR_1, struct ip_tunnel *VAR_2)
{
 struct ip_tunnel **VAR_3 = FUNC_0(VAR_1, VAR_2);

 VAR_2->next = *VAR_3;
 FUNC_1(&VAR_0);
 *VAR_3 = VAR_2;
 FUNC_2(&VAR_0);
}
