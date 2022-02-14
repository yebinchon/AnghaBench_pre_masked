
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u8 ;
struct sockaddr_dl {int dummy; } ;
struct ixl_mac_filter {int macaddr; } ;


 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct ixl_mac_filter *VAR_3 = VAR_0;

 if (FUNC_1(VAR_3->macaddr, (u8 *)FUNC_0(VAR_1)))
  return (1);
 else
  return (0);
}
