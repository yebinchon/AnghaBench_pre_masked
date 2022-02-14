
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int* octet; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

char *
FUNC_1(const struct ether_addr *VAR_0, char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, "%02x:%02x:%02x:%02x:%02x:%02x", VAR_0->octet[0],
     VAR_0->octet[1], VAR_0->octet[2], VAR_0->octet[3], VAR_0->octet[4], VAR_0->octet[5]);
 if (VAR_2 < 17)
  return (((void*)0));
 return (VAR_1);
}
