
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {scalar_t__ len; int * subs; } ;
struct snmp_value {TYPE_1__ var; } ;
struct snmp_node {scalar_t__ type; char* name; int (* op ) (TYPE_2__*,struct snmp_value*,scalar_t__,int ,int ) ;int index; TYPE_1__ oid; } ;
struct assign {char* node_name; struct snmp_value value; int scratch; } ;
struct asn_oid {int len; int * subs; } ;
typedef int nodename ;
struct TYPE_5__ {scalar_t__ var_index; int * scratch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct assign*,int ) ;
 int FUNC_1 (struct asn_oid*) ;
 int VAR_3 ;
 int FUNC_2 (struct assign*) ;
 int VAR_4 ;
 struct assign* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (TYPE_2__*,struct snmp_value*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_7(const struct snmp_node *VAR_6, struct asn_oid *VAR_7,
    const struct snmp_value *VAR_8)
{
 u_int VAR_9;
 int VAR_10;
 struct assign *VAR_11;
 char VAR_12[100];

 if (VAR_6->type == VAR_1) {

  if (VAR_7->len > 1 || (VAR_7->len == 1 &&
      VAR_7->subs[0] != 0))
   FUNC_4("bad index on leaf node");
  VAR_7->len = 1;
  VAR_7->subs[0] = 0;
 } else {

  if (VAR_6->oid.len + VAR_7->len > VAR_0)
   FUNC_4("resulting OID too long");
 }




 if ((VAR_11 = FUNC_3(sizeof(*VAR_11))) == ((void*)0))
  FUNC_4("%m");

 VAR_11->value = *VAR_8;
 VAR_11->node_name = VAR_6->name;




 VAR_11->value.var = VAR_6->oid;
 for (VAR_9 = 0; VAR_9 < VAR_7->len; VAR_9++)
  VAR_11->value.var.subs[VAR_11->value.var.len++] = VAR_7->subs[VAR_9];







 FUNC_5(VAR_12, sizeof(VAR_12), "%s", VAR_6->name);
 VAR_5->scratch = &VAR_11->scratch;
 VAR_5->var_index = 0;
 VAR_10 = (*VAR_6->op)(VAR_5, &VAR_11->value, VAR_6->oid.len, VAR_6->index,
     VAR_2);
 if (VAR_10 != 0) {
  FUNC_2(VAR_11);
  FUNC_4("assignment to %s.%s returns %d", VAR_12,
      FUNC_1(VAR_7), VAR_10);
 }

 FUNC_0(&VAR_3, VAR_11, VAR_4);
}
