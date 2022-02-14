
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; } ;
struct TYPE_4__ {int len; int * subs; } ;
struct snmp_value {TYPE_1__ v; int syntax; TYPE_2__ var; } ;
struct mibif {int index; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct snmp_value*,struct snmp_value*) ;

__attribute__((used)) static void
FUNC_1(struct mibif *VAR_4, int VAR_5)
{
 struct snmp_value VAR_6;

 VAR_6.var = VAR_1;
 VAR_6.var.subs[VAR_6.var.len++] = VAR_4->index;
 VAR_6.syntax = VAR_0;
 VAR_6.v.integer = VAR_4->index;

 FUNC_0(VAR_5 ? &VAR_3 : &VAR_2, &VAR_6,
     (struct snmp_value *)((void*)0));
}
