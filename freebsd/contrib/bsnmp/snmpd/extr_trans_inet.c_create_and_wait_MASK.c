
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_context {TYPE_1__* scratch; } ;
struct inet_port_params {int dummy; } ;
struct inet_port {int row_status; } ;
struct TYPE_2__ {struct inet_port* ptr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inet_port_params*,struct inet_port**) ;

__attribute__((used)) static int
FUNC_1(struct snmp_context *VAR_2, struct inet_port_params *VAR_3)
{
 int VAR_4;
 struct inet_port *VAR_5;

 if ((VAR_4 = FUNC_0(VAR_3, &VAR_5)) != VAR_1)
  return (VAR_4);

 VAR_5->row_status = VAR_0;
 VAR_2->scratch->ptr1 = VAR_5;

 return (VAR_4);
}
