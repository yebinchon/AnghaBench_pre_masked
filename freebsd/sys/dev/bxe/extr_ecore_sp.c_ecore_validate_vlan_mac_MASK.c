
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ecore_qable_obj {int dummy; } ecore_qable_obj ;
struct TYPE_3__ {int cmd; } ;
struct TYPE_4__ {TYPE_1__ vlan_mac; } ;
struct ecore_exeq_elem {TYPE_2__ cmd_data; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct bxe_softc*,union ecore_qable_obj*,struct ecore_exeq_elem*) ;
 int FUNC_1 (struct bxe_softc*,union ecore_qable_obj*,struct ecore_exeq_elem*) ;
 int FUNC_2 (struct bxe_softc*,union ecore_qable_obj*,struct ecore_exeq_elem*) ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_1,
       union ecore_qable_obj *VAR_2,
       struct ecore_exeq_elem *VAR_3)
{
 switch (VAR_3->cmd_data.vlan_mac.cmd) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 default:
  return VAR_0;
 }
}
