
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct snmp_value {TYPE_1__ var; } ;
struct snmp_node {scalar_t__ type; TYPE_1__ oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 struct snmp_node* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct snmp_node *
FUNC_5(const struct snmp_value *VAR_5, int *VAR_6)
{
 struct snmp_node *VAR_7;

 if (FUNC_0(VAR_0))
  FUNC_4("next: searching %s",
      FUNC_3(&VAR_5->var, VAR_2));

 *VAR_6 = 0;
 for (VAR_7 = VAR_3; VAR_7 < VAR_3 + VAR_4; VAR_7++) {
  if (FUNC_2(&VAR_7->oid, &VAR_5->var)) {

   if (VAR_7->type == VAR_1) {
    if (VAR_7->oid.len == VAR_5->var.len) {

     if (FUNC_0(VAR_0))
      FUNC_4("next: found scalar %s",
          FUNC_3(&VAR_7->oid, VAR_2));
     return (VAR_7);
    }

   } else {
    if (FUNC_0(VAR_0))
     FUNC_4("next: found column %s",
         FUNC_3(&VAR_7->oid, VAR_2));
    return (VAR_7);
   }
  } else if (FUNC_2(&VAR_5->var, &VAR_7->oid) ||
      FUNC_1(&VAR_7->oid, &VAR_5->var) >= 0) {
   if (FUNC_0(VAR_0))
    FUNC_4("next: found %s",
        FUNC_3(&VAR_7->oid, VAR_2));
   *VAR_6 = 1;
   return (VAR_7);
  }
 }

 if (FUNC_0(VAR_0))
  FUNC_4("next: failed");

 return (((void*)0));
}
