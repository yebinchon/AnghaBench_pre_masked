
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int* octet; } ;


 int FUNC_0 (char const*,char*,int*,int*,int*,int*,int*,int*,char*) ;

int
FUNC_1(const char *VAR_0, struct ether_addr *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4[6];

 VAR_3 = FUNC_0(VAR_0, "%x:%x:%x:%x:%x:%x %s", &VAR_4[0], &VAR_4[1], &VAR_4[2], &VAR_4[3],
     &VAR_4[4], &VAR_4[5], VAR_2);
 if (VAR_3 == 7) {
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
   VAR_1->octet[VAR_3] = VAR_4[VAR_3];
  return (0);
 } else {
  return (-1);
 }
}
