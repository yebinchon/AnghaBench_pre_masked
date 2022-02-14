
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {int head_reader; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct bxe_softc *VAR_1,
     struct ecore_vlan_mac_obj *VAR_2)
{

 VAR_2->head_reader++;
 FUNC_0(VAR_1, "vlan_mac_lock - locked reader - number %d\n",
    VAR_2->head_reader);

 return VAR_0;
}
