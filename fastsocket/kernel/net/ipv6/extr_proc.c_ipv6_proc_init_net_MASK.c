
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proc_net_devsnmp6; } ;
struct net {TYPE_1__ mib; int proc_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net*,char*,int ,int *) ;
 int FUNC_2 (struct net*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_4)
{
 if (!FUNC_1(VAR_4, "sockstat6", VAR_1,
   &VAR_3))
  return -VAR_0;

 if (!FUNC_1(VAR_4, "snmp6", VAR_1, &VAR_2))
  goto proc_snmp6_fail;

 VAR_4->mib.proc_net_devsnmp6 = FUNC_0("dev_snmp6", VAR_4->proc_net);
 if (!VAR_4->mib.proc_net_devsnmp6)
  goto proc_dev_snmp6_fail;
 return 0;

proc_snmp6_fail:
 FUNC_2(VAR_4, "sockstat6");
proc_dev_snmp6_fail:
 FUNC_2(VAR_4, "dev_snmp6");
 return -VAR_0;
}
