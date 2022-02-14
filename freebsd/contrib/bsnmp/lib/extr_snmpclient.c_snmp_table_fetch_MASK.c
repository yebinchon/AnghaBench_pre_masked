
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nbindings; TYPE_1__* bindings; } ;
struct table {int dummy; } ;
struct tabwork {int first; TYPE_3__ pdu; scalar_t__ last_change; int * arg; int * callback; struct table worklist; struct table* table; scalar_t__ iter; struct snmp_table const* descr; } ;
struct snmp_table {int dummy; } ;
struct snmp_pdu {int nbindings; TYPE_2__* bindings; } ;
struct TYPE_6__ {int var; } ;
struct TYPE_5__ {int var; } ;


 int FUNC_0 (struct table*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct snmp_pdu*) ;
 int FUNC_2 (struct snmp_pdu*) ;
 int FUNC_3 (struct tabwork*) ;
 int FUNC_4 (struct tabwork*,struct snmp_pdu*) ;
 int FUNC_5 (struct tabwork*,int) ;
 int FUNC_6 (struct snmp_table const*,TYPE_3__*) ;

int
FUNC_7(const struct snmp_table *VAR_0, void *VAR_1)
{
 struct snmp_pdu VAR_2;
 struct tabwork VAR_3;
 int VAR_4;

 VAR_3.descr = VAR_0;
 VAR_3.table = (struct table *)VAR_1;
 VAR_3.iter = 0;
 FUNC_0(VAR_3.table);
 FUNC_0(&VAR_3.worklist);
 VAR_3.callback = ((void*)0);
 VAR_3.arg = ((void*)0);

  again:




 VAR_3.first = 1;
 VAR_3.last_change = 0;
 FUNC_6(VAR_0, &VAR_3.pdu);

 for (;;) {
  if (FUNC_1(&VAR_3.pdu, &VAR_2)) {
   FUNC_5(&VAR_3, 1);
   return (-1);
  }
  if ((VAR_4 = FUNC_4(&VAR_3, &VAR_2)) == 0) {
   FUNC_2(&VAR_2);
   break;
  }
  if (VAR_4 == -1) {
   FUNC_2(&VAR_2);
   FUNC_5(&VAR_3, 1);
   return (-1);
  }
  if (VAR_4 == -2) {
   FUNC_2(&VAR_2);
   goto again;
  }

  VAR_3.pdu.bindings[VAR_3.pdu.nbindings - 1].var =
      VAR_2.bindings[VAR_2.nbindings - 1].var;

  FUNC_2(&VAR_2);
 }

 if ((VAR_4 = FUNC_3(&VAR_3)) == -1) {
  FUNC_5(&VAR_3, 1);
  return (-1);
 }
 if (VAR_4 == -2) {
  FUNC_5(&VAR_3, 1);
  goto again;
 }



 FUNC_5(&VAR_3, 0);
 return (0);
}
