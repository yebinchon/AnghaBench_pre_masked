
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_context {TYPE_1__* scratch; } ;
struct inet_port_params {int dummy; } ;
struct inet_port {int row_status; int tport; } ;
typedef enum RowStatus { ____Placeholder_RowStatus } RowStatus ;
struct TYPE_2__ {void* int1; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snmp_context*,struct inet_port_params*) ;
 int FUNC_2 (struct snmp_context*,struct inet_port_params*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct snmp_context *VAR_7, struct inet_port *VAR_8,
    struct inet_port_params *VAR_9, enum RowStatus VAR_10)
{
 switch (VAR_10) {

   case 132:
  if (VAR_8 != ((void*)0))
   return (VAR_4);
  VAR_7->scratch->int1 = VAR_1;
  return (FUNC_1(VAR_7, VAR_9));

   case 131:
  if (VAR_8 != ((void*)0))
   return (VAR_4);
  VAR_7->scratch->int1 = VAR_1;
  return (FUNC_2(VAR_7, VAR_9));

   case 133:
  if (VAR_8 == ((void*)0))
   return (VAR_4);

  switch (VAR_8->row_status) {

    case 128:

   FUNC_0();

    case 129:
   VAR_7->scratch->int1 = VAR_0;
   return (FUNC_3(&VAR_8->tport));

    case 133:
   return (VAR_5);

    case 132:
    case 131:
    case 130:
   FUNC_0();
  }
  break;

   case 129:
  if (VAR_8 == ((void*)0))
   return (VAR_4);

  switch (VAR_8->row_status) {

    case 128:

   FUNC_0();

    case 129:
   return (VAR_5);

    case 133:

   VAR_7->scratch->int1 = VAR_2;
   return (VAR_5);

    case 132:
    case 131:
    case 130:
   FUNC_0();
  }
  break;

   case 130:

  VAR_7->scratch->int1 = VAR_3;
  return (VAR_5);

   case 128:
  return (VAR_6);
 }
 FUNC_0();
}
