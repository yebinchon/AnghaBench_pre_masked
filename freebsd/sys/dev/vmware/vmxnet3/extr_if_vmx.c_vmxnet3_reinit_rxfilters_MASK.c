
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {TYPE_1__* vmx_ds; int vmx_vlan_filter; struct ifnet* vmx_ifp; } ;
struct ifnet {int if_capenable; } ;
struct TYPE_2__ {int vlan_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct vmxnet3_softc*,int ) ;
 int FUNC_4 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct vmxnet3_softc *VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->vmx_ifp;

 FUNC_3(VAR_2, FUNC_2(VAR_3));

 if (VAR_3->if_capenable & VAR_0)
  FUNC_0(VAR_2->vmx_vlan_filter, VAR_2->vmx_ds->vlan_filter,
      sizeof(VAR_2->vmx_ds->vlan_filter));
 else
  FUNC_1(VAR_2->vmx_ds->vlan_filter,
      sizeof(VAR_2->vmx_ds->vlan_filter));
 FUNC_4(VAR_2, VAR_1);
}
