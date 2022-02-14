
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_sockaddr {int dummy; } vxlan_sockaddr ;
struct vxlan_softc {int vxl_vso_mc_index; int vxl_vni; struct vxlan_socket* vxl_sock; int vxl_mc_ifindex; union vxlan_sockaddr vxl_dst_addr; union vxlan_sockaddr vxl_src_addr; struct ifnet* vxl_ifp; } ;
struct vxlan_socket {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ifnet*,char*,int) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int FUNC_3 (struct vxlan_softc*) ;
 int FUNC_4 (union vxlan_sockaddr*) ;
 int FUNC_5 (struct ifnet*,int,union vxlan_sockaddr*,struct vxlan_socket**) ;
 int FUNC_6 (struct vxlan_socket*,struct vxlan_softc*) ;
 struct vxlan_socket* FUNC_7 (union vxlan_sockaddr*) ;
 int FUNC_8 (struct vxlan_socket*,union vxlan_sockaddr*,union vxlan_sockaddr*,int ,int*) ;
 struct vxlan_socket* FUNC_9 (union vxlan_sockaddr*) ;
 int FUNC_10 (struct vxlan_socket*,int) ;
 int FUNC_11 (struct vxlan_socket*) ;

__attribute__((used)) static int
FUNC_12(struct vxlan_softc *VAR_0)
{
 struct vxlan_socket *VAR_1;
 struct ifnet *VAR_2;
 union vxlan_sockaddr *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 VAR_1 = ((void*)0);
 VAR_2 = VAR_0->vxl_ifp;
 VAR_3 = &VAR_0->vxl_src_addr;
 VAR_4 = &VAR_0->vxl_dst_addr;

 VAR_5 = FUNC_4(VAR_4);
 FUNC_0(VAR_5 != -1);
 VAR_0->vxl_vso_mc_index = -1;





 VAR_6 = FUNC_5(VAR_2, VAR_5, VAR_3, &VAR_1);
 if (VAR_6) {
  if (VAR_5 != 0)
   VAR_1 = FUNC_9(VAR_3);
  else
   VAR_1 = FUNC_7(VAR_3);

  if (VAR_1 == ((void*)0)) {
   FUNC_1(VAR_2, "cannot create socket (error: %d), "
       "and no existing socket found\n", VAR_6);
   goto out;
  }
 }

 if (VAR_5 != 0) {
  VAR_6 = FUNC_3(VAR_0);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_8(VAR_1, VAR_4, VAR_3,
      VAR_0->vxl_mc_ifindex, &VAR_0->vxl_vso_mc_index);
  if (VAR_6)
   goto out;
 }

 VAR_0->vxl_sock = VAR_1;
 VAR_6 = FUNC_6(VAR_1, VAR_0);
 if (VAR_6) {
  VAR_0->vxl_sock = ((void*)0);
  FUNC_1(VAR_2, "network identifier %d already exists in "
      "this socket\n", VAR_0->vxl_vni);
  goto out;
 }

 return (0);

out:
 if (VAR_1 != ((void*)0)) {
  if (VAR_0->vxl_vso_mc_index != -1) {
   FUNC_10(VAR_1,
       VAR_0->vxl_vso_mc_index);
   VAR_0->vxl_vso_mc_index = -1;
  }
  if (VAR_5 != 0)
   FUNC_2(VAR_0);
  FUNC_11(VAR_1);
 }

 return (VAR_6);
}
