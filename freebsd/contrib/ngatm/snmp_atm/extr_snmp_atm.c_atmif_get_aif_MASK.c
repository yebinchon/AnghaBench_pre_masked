
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_7__ {int * subs; int len; } ;
struct snmp_value {TYPE_3__ var; } ;
struct TYPE_6__ {int ifp; TYPE_1__* mib; } ;
struct atmif_priv {TYPE_2__ pub; int index; } ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
struct TYPE_5__ {scalar_t__ pcr; } ;


 struct atmif_priv* FUNC_0 (int *,TYPE_3__*,size_t) ;
 struct atmif_priv* FUNC_1 (int *,TYPE_3__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_2 () ;
 int FUNC_3 (struct atmif_priv*) ;
 int VAR_3 ;
 int FUNC_4 (struct atmif_priv*) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct snmp_value *VAR_4, u_int VAR_5, enum snmp_op VAR_6,
    struct atmif_priv **VAR_7)
{
 switch (VAR_6) {

   case 130:
  if ((*VAR_7 = FUNC_1(&VAR_3,
      &VAR_4->var, VAR_5)) == ((void*)0))
   return (VAR_1);
  VAR_4->var.len = VAR_5 + 1;
  VAR_4->var.subs[VAR_5] = (*VAR_7)->index;
  break;

   case 131:
  if ((*VAR_7 = FUNC_0(&VAR_3,
      &VAR_4->var, VAR_5)) == ((void*)0))
   return (VAR_1);
  break;

   case 128:
  if ((*VAR_7 = FUNC_0(&VAR_3,
      &VAR_4->var, VAR_5)) == ((void*)0))
   return (VAR_2);
  break;

   case 129:
   case 132:
  if ((*VAR_7 = FUNC_0(&VAR_3,
      &VAR_4->var, VAR_5)) == ((void*)0))
   FUNC_2();
  return (VAR_0);
 }

 if ((*VAR_7)->pub.mib->pcr == 0) {
  FUNC_5((*VAR_7)->pub.ifp);
  FUNC_4(*VAR_7);
  FUNC_3(*VAR_7);
 }

 return (VAR_0);
}
