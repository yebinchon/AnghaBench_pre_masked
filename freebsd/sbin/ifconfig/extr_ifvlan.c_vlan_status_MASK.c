
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlanreq {int vlr_tag; char* vlr_parent; } ;
typedef int caddr_t ;
struct TYPE_3__ {int ifr_vlan_pcp; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*,struct vlanreq*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_2)
{
 struct vlanreq VAR_3;

 if (FUNC_0(VAR_2, &VAR_1, &VAR_3) == -1)
  return;
 FUNC_2("\tvlan: %d", VAR_3.vlr_tag);
 if (FUNC_1(VAR_2, VAR_0, (caddr_t)&VAR_1) != -1)
  FUNC_2(" vlanpcp: %u", VAR_1.ifr_vlan_pcp);
 FUNC_2(" parent interface: %s", VAR_3.vlr_parent[0] == '\0' ?
     "<none>" : VAR_3.vlr_parent);
 FUNC_2("\n");
}
