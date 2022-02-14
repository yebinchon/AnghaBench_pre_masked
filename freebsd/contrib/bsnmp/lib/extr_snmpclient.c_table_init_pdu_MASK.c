
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct snmp_table {TYPE_1__ table; TYPE_1__ last_change; } ;
struct snmp_pdu {int error_index; size_t nbindings; scalar_t__ version; TYPE_2__* bindings; int error_status; } ;
struct TYPE_6__ {scalar_t__ version; } ;
struct TYPE_5__ {void* syntax; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (struct snmp_pdu*,int ) ;

__attribute__((used)) static void
FUNC_1(const struct snmp_table *VAR_5, struct snmp_pdu *VAR_6)
{
 if (VAR_4.version == VAR_3)
  FUNC_0(VAR_6, VAR_1);
 else {
  FUNC_0(VAR_6, VAR_0);
  VAR_6->error_index = 10;
 }
 if (VAR_5->last_change.len != 0) {
  VAR_6->bindings[VAR_6->nbindings].syntax = VAR_2;
  VAR_6->bindings[VAR_6->nbindings].var = VAR_5->last_change;
  VAR_6->nbindings++;
  if (VAR_6->version != VAR_3)
   VAR_6->error_status++;
 }
 VAR_6->bindings[VAR_6->nbindings].var = VAR_5->table;
 VAR_6->bindings[VAR_6->nbindings].syntax = VAR_2;
 VAR_6->nbindings++;
}
