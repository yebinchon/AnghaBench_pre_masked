
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* table; } ;
struct TYPE_5__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ctl_table {struct ctl_table* child; } ;
struct TYPE_6__ {struct ctl_table* ctl_table_arg; } ;


 int FUNC_0 (struct ctl_table*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_0)
{
 struct ctl_table *VAR_1;
 struct ctl_table *VAR_2;
 struct ctl_table *VAR_3;

 VAR_1 = VAR_0->ipv6.sysctl.table->ctl_table_arg;
 VAR_2 = VAR_1[0].child;
 VAR_3 = VAR_1[1].child;

 FUNC_1(VAR_0->ipv6.sysctl.table);

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
}
