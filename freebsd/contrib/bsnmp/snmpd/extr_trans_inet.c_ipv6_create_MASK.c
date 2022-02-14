
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_port_params {int addr_len; } ;
struct inet_port {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct inet_port*,struct inet_port_params*,int ) ;

__attribute__((used)) static int
FUNC_1(struct inet_port *VAR_2, struct inet_port_params *VAR_3)
{
 if (VAR_3->addr_len != 16)
  return (VAR_0);

 const int VAR_4 = FUNC_0(VAR_2, VAR_3, 0);
 if (VAR_4 != VAR_1)
  return (VAR_4);

 return (VAR_1);
}
