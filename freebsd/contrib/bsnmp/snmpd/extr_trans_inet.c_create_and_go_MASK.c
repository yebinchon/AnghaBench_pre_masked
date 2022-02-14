
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_context {TYPE_1__* scratch; } ;
struct inet_port_params {int dummy; } ;
struct inet_port {int tport; int row_status; } ;
struct TYPE_2__ {struct inet_port* ptr1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inet_port_params*,struct inet_port**) ;

__attribute__((used)) static int
FUNC_2(struct snmp_context *VAR_4, struct inet_port_params *VAR_5)
{
 int VAR_6;
 struct inet_port *VAR_7;

 if ((VAR_6 = FUNC_1(VAR_5, &VAR_7)) != VAR_2)
  return (VAR_6);

 VAR_7->row_status = VAR_1;
 VAR_4->scratch->ptr1 = VAR_7;

 if (VAR_3 == VAR_0)
  return (VAR_6);

 return (FUNC_0(&VAR_7->tport));
}
