
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxlan_softc {TYPE_2__* vxl_im6o; TYPE_1__* vxl_im4o; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {struct ifnet* im6o_multicast_ifp; } ;
struct TYPE_3__ {struct ifnet* imo_multicast_ifp; } ;


 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct ifnet*) ;

__attribute__((used)) static struct ifnet *
FUNC_2(struct vxlan_softc *VAR_0, int VAR_1)
{
 struct ifnet *VAR_2;

 FUNC_0(VAR_0);

 if (VAR_1 && VAR_0->vxl_im4o != ((void*)0))
  VAR_2 = VAR_0->vxl_im4o->imo_multicast_ifp;
 else if (!VAR_1 && VAR_0->vxl_im6o != ((void*)0))
  VAR_2 = VAR_0->vxl_im6o->im6o_multicast_ifp;
 else
  VAR_2 = ((void*)0);

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);

 return (VAR_2);
}
