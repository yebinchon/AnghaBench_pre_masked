
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_iwarp_cm_info {int ird; int ord; int private_data_len; int vlan; int local_port; int remote_port; int * local_ip; int * remote_ip; int ip_version; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_1,
     struct ecore_iwarp_cm_info *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "ip_version = %d\n",
     VAR_2->ip_version);
 FUNC_0(VAR_1, VAR_0, "remote_ip %x.%x.%x.%x\n",
     VAR_2->remote_ip[0],
     VAR_2->remote_ip[1],
     VAR_2->remote_ip[2],
     VAR_2->remote_ip[3]);
 FUNC_0(VAR_1, VAR_0, "local_ip %x.%x.%x.%x\n",
     VAR_2->local_ip[0],
     VAR_2->local_ip[1],
     VAR_2->local_ip[2],
     VAR_2->local_ip[3]);
 FUNC_0(VAR_1, VAR_0, "remote_port = %x\n",
     VAR_2->remote_port);
 FUNC_0(VAR_1, VAR_0, "local_port = %x\n",
     VAR_2->local_port);
 FUNC_0(VAR_1, VAR_0, "vlan = %x\n",
     VAR_2->vlan);
 FUNC_0(VAR_1, VAR_0, "private_data_len = %x\n",
     VAR_2->private_data_len);
 FUNC_0(VAR_1, VAR_0, "ord = %d\n",
     VAR_2->ord);
 FUNC_0(VAR_1, VAR_0, "ird = %d\n",
     VAR_2->ird);
}
