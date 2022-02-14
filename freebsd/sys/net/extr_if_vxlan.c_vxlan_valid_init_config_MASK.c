
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sin_port; } ;
struct TYPE_7__ {TYPE_1__ in4; } ;
struct vxlan_softc {char* vxl_mc_ifname; int vxl_ifp; TYPE_2__ vxl_dst_addr; TYPE_2__ vxl_src_addr; int vxl_vni; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_6(struct vxlan_softc *VAR_1)
{
 const char *VAR_2;

 if (FUNC_2(VAR_1->vxl_vni) != 0) {
  VAR_2 = "invalid virtual network identifier specified";
  goto fail;
 }

 if (FUNC_5(&VAR_1->vxl_src_addr, 1) == 0) {
  VAR_2 = "source address type is not supported";
  goto fail;
 }

 if (FUNC_5(&VAR_1->vxl_dst_addr, 0) == 0) {
  VAR_2 = "destination address type is not supported";
  goto fail;
 }

 if (FUNC_3(&VAR_1->vxl_dst_addr) != 0) {
  VAR_2 = "no valid destination address specified";
  goto fail;
 }

 if (FUNC_4(&VAR_1->vxl_dst_addr) == 0 &&
     VAR_1->vxl_mc_ifname[0] != '\0') {
  VAR_2 = "can only specify interface with a group address";
  goto fail;
 }

 if (FUNC_3(&VAR_1->vxl_src_addr) == 0) {
  if (FUNC_0(&VAR_1->vxl_src_addr) ^
      FUNC_0(&VAR_1->vxl_dst_addr)) {
   VAR_2 = "source and destination address must both "
       "be either IPv4 or IPv6";
   goto fail;
  }
 }

 if (VAR_1->vxl_src_addr.in4.sin_port == 0) {
  VAR_2 = "local port not specified";
  goto fail;
 }

 if (VAR_1->vxl_dst_addr.in4.sin_port == 0) {
  VAR_2 = "remote port not specified";
  goto fail;
 }

 return (0);

fail:
 FUNC_1(VAR_1->vxl_ifp, "cannot initialize interface: %s\n", VAR_2);
 return (VAR_0);
}
