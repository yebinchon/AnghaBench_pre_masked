
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxlan_softc {int vxl_ttl; TYPE_1__* vxl_im6o; TYPE_2__* vxl_im4o; } ;
struct ifvxlancmd {int vxlcmd_ttl; } ;
struct TYPE_4__ {int imo_multicast_ttl; } ;
struct TYPE_3__ {int im6o_multicast_hlim; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*) ;
 int FUNC_1 (struct vxlan_softc*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vxlan_softc *VAR_1, void *VAR_2)
{
 struct ifvxlancmd *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;

 FUNC_0(VAR_1);
 if (FUNC_2(VAR_3->vxlcmd_ttl) == 0) {
  VAR_1->vxl_ttl = VAR_3->vxlcmd_ttl;
  if (VAR_1->vxl_im4o != ((void*)0))
   VAR_1->vxl_im4o->imo_multicast_ttl = VAR_1->vxl_ttl;
  if (VAR_1->vxl_im6o != ((void*)0))
   VAR_1->vxl_im6o->im6o_multicast_hlim = VAR_1->vxl_ttl;
  VAR_4 = 0;
 } else
  VAR_4 = VAR_0;
 FUNC_1(VAR_1);

 return (VAR_4);
}
