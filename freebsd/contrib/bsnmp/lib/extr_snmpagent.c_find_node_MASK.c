
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; scalar_t__* subs; } ;
struct snmp_value {TYPE_1__ var; } ;
struct TYPE_7__ {int len; } ;
struct snmp_node {scalar_t__ type; TYPE_2__ oid; } ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 struct snmp_node* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct snmp_node *
FUNC_5(const struct snmp_value *VAR_7, enum snmp_syntax *VAR_8)
{
 struct snmp_node *VAR_9;

 if (FUNC_0(VAR_0))
  FUNC_4("find: searching %s",
      FUNC_3(&VAR_7->var, VAR_4));






 for (VAR_9 = VAR_5; VAR_9 < VAR_5 + VAR_6; VAR_9++) {
  if (FUNC_2(&VAR_9->oid, &VAR_7->var))
   goto found;
  if (FUNC_1(&VAR_9->oid, &VAR_7->var) >= 0)
   break;
 }

 if (FUNC_0(VAR_0))
  FUNC_4("find: no match");
 *VAR_8 = VAR_3;
 return (((void*)0));

  found:

 if (VAR_9->type == VAR_1 &&
     (VAR_7->var.len != VAR_9->oid.len + 1 ||
      VAR_7->var.subs[VAR_9->oid.len] != 0)) {
  if (FUNC_0(VAR_0))
   FUNC_4("find: bad leaf index");
  *VAR_8 = VAR_2;
  return (((void*)0));
 }
 if (FUNC_0(VAR_0))
  FUNC_4("find: found %s",
      FUNC_3(&VAR_7->var, VAR_4));
 return (VAR_9);
}
