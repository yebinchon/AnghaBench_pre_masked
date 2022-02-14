
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vxlan_softc {size_t vxl_vni; } ;
struct vxlan_socket {int * vxlso_vni_hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vxlan_softc*,int ) ;
 int FUNC_1 (struct vxlan_softc*) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct vxlan_socket*) ;
 int FUNC_4 (struct vxlan_socket*) ;
 int VAR_1 ;
 int FUNC_5 (struct vxlan_softc*) ;
 struct vxlan_softc* FUNC_6 (struct vxlan_socket*,size_t) ;

__attribute__((used)) static int
FUNC_7(struct vxlan_socket *VAR_2, struct vxlan_softc *VAR_3)
{
 struct vxlan_softc *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_3->vxl_vni;
 VAR_6 = FUNC_2(VAR_5);

 FUNC_3(VAR_2);
 VAR_4 = FUNC_6(VAR_2, VAR_5);
 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_4);
  return (VAR_0);
 }

 FUNC_1(VAR_3);
 FUNC_0(&VAR_2->vxlso_vni_hash[VAR_6], VAR_3, VAR_1);
 FUNC_4(VAR_2);

 return (0);
}
