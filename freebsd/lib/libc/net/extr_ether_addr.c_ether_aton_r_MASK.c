
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {unsigned int* octet; } ;


 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

struct ether_addr *
FUNC_1(const char *VAR_0, struct ether_addr *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_2 = FUNC_0(VAR_0, "%x:%x:%x:%x:%x:%x", &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_2 != 6)
  return (((void*)0));
 VAR_1->octet[0]=VAR_3;
 VAR_1->octet[1]=VAR_4;
 VAR_1->octet[2]=VAR_5;
 VAR_1->octet[3]=VAR_6;
 VAR_1->octet[4]=VAR_7;
 VAR_1->octet[5]=VAR_8;
 return (VAR_1);
}
