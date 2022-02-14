
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct TYPE_10__ {int index; } ;
struct udp_port {TYPE_3__ tport; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_11__ {int* subs; } ;
struct snmp_value {TYPE_2__ v; TYPE_4__ var; } ;
struct snmp_context {TYPE_1__* scratch; } ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
typedef int asn_subid_t ;
struct TYPE_8__ {int int1; int int2; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int,int *) ;
 int FUNC_4 (TYPE_4__*,int,int,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,struct udp_port**) ;

int
FUNC_9(struct snmp_context *VAR_5, struct snmp_value *VAR_6,
    u_int VAR_7, u_int VAR_8, enum snmp_op VAR_9)
{
 asn_subid_t VAR_10 = VAR_6->var.subs[VAR_7-1];
 struct udp_port *VAR_11;
 u_int8_t VAR_12[4];
 u_int32_t VAR_13;

 switch (VAR_9) {

   case 130:
  if ((VAR_11 = (struct udp_port *)FUNC_6(VAR_4,
      &VAR_6->var, VAR_7)) == ((void*)0))
   return (VAR_1);
  FUNC_3(&VAR_6->var, VAR_7, &VAR_11->tport.index);
  break;

   case 131:
  if ((VAR_11 = (struct udp_port *)FUNC_5(VAR_4,
      &VAR_6->var, VAR_7)) == ((void*)0))
   return (VAR_1);
  break;

   case 128:
  VAR_11 = (struct udp_port *)FUNC_5(VAR_4,
      &VAR_6->var, VAR_7);
  VAR_5->scratch->int1 = (VAR_11 != ((void*)0));

  if (VAR_10 != 133)
   FUNC_2();
  if (!FUNC_1(VAR_6->v.integer))
   return (VAR_3);

  VAR_5->scratch->int2 = FUNC_0(VAR_6->v.integer);

  if (VAR_5->scratch->int2) {

   if (VAR_11 != ((void*)0))

    return (VAR_0);

   if (FUNC_4(&VAR_6->var, VAR_7, VAR_8, VAR_12, &VAR_13))
    return (VAR_2);
   return (FUNC_8(VAR_12, VAR_13, &VAR_11));

  } else {

  }
  return (VAR_0);

   case 129:
  VAR_11 = (struct udp_port *)FUNC_5(VAR_4,
      &VAR_6->var, VAR_7);
  if (VAR_5->scratch->int1 == 0) {

   if (VAR_5->scratch->int2 == 1) {

    if (VAR_11 != ((void*)0))
     FUNC_7(&VAR_11->tport);
   }
  }
  return (VAR_0);

   case 132:
  VAR_11 = (struct udp_port *)FUNC_5(VAR_4,
      &VAR_6->var, VAR_7);
  if (VAR_5->scratch->int1 == 1) {

   if (VAR_5->scratch->int2 == 0) {

    if (VAR_11 != ((void*)0))
     FUNC_7(&VAR_11->tport);
   }
  }
  return (VAR_0);

   default:
  FUNC_2();
 }




 switch (VAR_10) {

   case 133:
  VAR_6->v.integer = 1;
  break;

   default:
  FUNC_2();
 }

 return (VAR_0);
}
