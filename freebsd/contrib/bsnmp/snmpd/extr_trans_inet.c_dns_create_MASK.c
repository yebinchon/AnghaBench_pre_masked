
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_port_params {int addr_len; int port; int * addr; } ;
struct inet_port {char* dns_addr; int dns_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct inet_port *VAR_3, struct inet_port_params *VAR_4)
{
 if (VAR_4->addr_len > 64)
  return (VAR_1);

 if (FUNC_2(VAR_4->addr, VAR_4->addr_len) !=
     VAR_4->addr_len)
  return (VAR_1);

 if ((VAR_3->dns_addr = FUNC_1(VAR_4->addr,
     VAR_4->addr_len + 1)) == ((void*)0))
  return (VAR_0);

 VAR_3->dns_addr[VAR_4->addr_len] = '\0';
 VAR_4->addr = ((void*)0);

 VAR_3->dns_port = FUNC_0(VAR_4->port);

 return (VAR_2);
}
