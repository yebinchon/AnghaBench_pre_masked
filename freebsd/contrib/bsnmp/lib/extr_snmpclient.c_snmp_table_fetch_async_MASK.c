
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct tabwork {int first; int pdu; scalar_t__ last_change; void* arg; int callback; struct table worklist; struct table* table; scalar_t__ iter; struct snmp_table const* descr; } ;
struct snmp_table {int dummy; } ;
typedef int snmp_table_cb_f ;


 int FUNC_0 (struct table*) ;
 int VAR_0 ;
 int FUNC_1 (struct tabwork*) ;
 struct tabwork* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,struct tabwork*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct snmp_table const*,int *) ;

int
FUNC_7(const struct snmp_table *VAR_3, void *VAR_4,
    snmp_table_cb_f VAR_5, void *VAR_6)
{
 struct tabwork *VAR_7;

 if ((VAR_7 = FUNC_2(sizeof(*VAR_7))) == ((void*)0)) {
  FUNC_3(&VAR_1, "%s", FUNC_5(VAR_0));
  return (-1);
 }

 VAR_7->descr = VAR_3;
 VAR_7->table = (struct table *)VAR_4;
 VAR_7->iter = 0;
 FUNC_0(VAR_7->table);
 FUNC_0(&VAR_7->worklist);

 VAR_7->callback = VAR_5;
 VAR_7->arg = VAR_6;




 VAR_7->first = 1;
 VAR_7->last_change = 0;
 FUNC_6(VAR_3, &VAR_7->pdu);

 if (FUNC_4(&VAR_7->pdu, VAR_2, VAR_7) == -1) {
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  return (-1);
 }
 return (0);
}
