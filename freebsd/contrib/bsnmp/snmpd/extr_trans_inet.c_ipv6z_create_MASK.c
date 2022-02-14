
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct inet_port_params {int addr_len; int* addr; } ;
struct inet_port {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct inet_port*,struct inet_port_params*,int) ;

__attribute__((used)) static int
FUNC_1(struct inet_port *VAR_2, struct inet_port_params *VAR_3)
{
 if (VAR_3->addr_len != 20)
  return (VAR_0);

 u_int VAR_4 = 0;
 for (u_int VAR_5 = 16; VAR_5 < 20; VAR_5++) {
  VAR_4 <<= 8;
  VAR_4 |= VAR_3->addr[VAR_5];
 }

 const int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6 != VAR_1)
  return (VAR_6);

 return (VAR_1);
}
