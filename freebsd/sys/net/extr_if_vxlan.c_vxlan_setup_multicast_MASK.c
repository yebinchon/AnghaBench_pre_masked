
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union vxlan_sockaddr {int dummy; } vxlan_sockaddr ;
struct vxlan_softc {char* vxl_mc_ifname; int vxl_ttl; TYPE_2__* vxl_im6o; int vxl_mc_ifp; TYPE_1__* vxl_im4o; union vxlan_sockaddr vxl_dst_addr; } ;
struct ip_moptions {int dummy; } ;
struct ip6_moptions {int dummy; } ;
struct TYPE_4__ {int im6o_multicast_hlim; int im6o_multicast_ifp; } ;
struct TYPE_3__ {int imo_multicast_vif; int imo_multicast_ttl; int imo_multicast_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (union vxlan_sockaddr const*) ;
 scalar_t__ FUNC_1 (union vxlan_sockaddr const*) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_softc *VAR_3)
{
 const union vxlan_sockaddr *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->vxl_dst_addr;
 VAR_5 = 0;

 if (VAR_3->vxl_mc_ifname[0] != '\0') {
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5)
   return (VAR_5);
 }







 if (FUNC_0(VAR_4)) {
  VAR_3->vxl_im4o = FUNC_2(sizeof(struct ip_moptions), VAR_0,
      VAR_2 | VAR_1);
  VAR_3->vxl_im4o->imo_multicast_ifp = VAR_3->vxl_mc_ifp;
  VAR_3->vxl_im4o->imo_multicast_ttl = VAR_3->vxl_ttl;
  VAR_3->vxl_im4o->imo_multicast_vif = -1;
 } else if (FUNC_1(VAR_4)) {
  VAR_3->vxl_im6o = FUNC_2(sizeof(struct ip6_moptions), VAR_0,
      VAR_2 | VAR_1);
  VAR_3->vxl_im6o->im6o_multicast_ifp = VAR_3->vxl_mc_ifp;
  VAR_3->vxl_im6o->im6o_multicast_hlim = VAR_3->vxl_ttl;
 }

 return (VAR_5);
}
