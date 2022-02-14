
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* sin_port; } ;
struct TYPE_8__ {TYPE_3__ in4; } ;
struct TYPE_5__ {void* sin_port; } ;
struct TYPE_6__ {TYPE_1__ in4; } ;
struct vxlan_softc {int vxl_ftable_timeout; int vxl_ftable_max; int vxl_max_port; int vxl_min_port; TYPE_4__ vxl_dst_addr; TYPE_2__ vxl_src_addr; int vxl_ttl; int vxl_vni; int vxl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct vxlan_softc*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vxlan_softc *VAR_10)
{

 VAR_10->vxl_flags |= VAR_1;

 VAR_10->vxl_vni = VAR_6;
 VAR_10->vxl_ttl = VAR_0;

 if (!FUNC_1(VAR_10, "legacy_port", VAR_9)) {
  VAR_10->vxl_src_addr.in4.sin_port = FUNC_0(VAR_5);
  VAR_10->vxl_dst_addr.in4.sin_port = FUNC_0(VAR_5);
 } else {
  VAR_10->vxl_src_addr.in4.sin_port = FUNC_0(VAR_4);
  VAR_10->vxl_dst_addr.in4.sin_port = FUNC_0(VAR_4);
 }

 VAR_10->vxl_min_port = VAR_7;
 VAR_10->vxl_max_port = VAR_8;

 VAR_10->vxl_ftable_max = VAR_2;
 VAR_10->vxl_ftable_timeout = VAR_3;
}
