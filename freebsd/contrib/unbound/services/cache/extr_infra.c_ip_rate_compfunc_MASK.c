
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_rate_key {int addrlen; int addr; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

int FUNC_1(void* VAR_0, void* VAR_1)
{
 struct ip_rate_key* VAR_2 = (struct ip_rate_key*)VAR_0;
 struct ip_rate_key* VAR_3 = (struct ip_rate_key*)VAR_1;
 return FUNC_0(&VAR_2->addr, VAR_2->addrlen,
  &VAR_3->addr, VAR_3->addrlen);
}
