
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlanudphdr {int dummy; } ;
struct vxlan_softc {int vxl_dst_addr; struct ifnet* vxl_ifp; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct ifnet {scalar_t__ if_hdrlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->vxl_ifp;
 VAR_2->if_hdrlen = VAR_0 + sizeof(struct vxlanudphdr);

 if (FUNC_0(&VAR_1->vxl_dst_addr) != 0)
  VAR_2->if_hdrlen += sizeof(struct ip);
 else if (FUNC_1(&VAR_1->vxl_dst_addr) != 0)
  VAR_2->if_hdrlen += sizeof(struct ip6_hdr);
}
