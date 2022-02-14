
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* if_ctx_t ;
struct TYPE_3__ {int * ifc_vlan_detach_event; int * ifc_vlan_attach_event; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(if_ctx_t VAR_2)
{

 if (VAR_2->ifc_vlan_attach_event != ((void*)0)) {
  FUNC_0(VAR_0, VAR_2->ifc_vlan_attach_event);
  VAR_2->ifc_vlan_attach_event = ((void*)0);
 }
 if (VAR_2->ifc_vlan_detach_event != ((void*)0)) {
  FUNC_0(VAR_1, VAR_2->ifc_vlan_detach_event);
  VAR_2->ifc_vlan_detach_event = ((void*)0);
 }

}
