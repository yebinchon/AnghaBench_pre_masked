
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union vxlan_sockaddr {int dummy; } vxlan_sockaddr ;
struct vxlan_softc {int vxl_flags; int vxl_ttl; int vxl_max_port; int vxl_min_port; int vxl_ftable_timeout; int vxl_ftable_max; int vxl_ftable_cnt; int vxl_mc_ifindex; int vxl_dst_addr; int vxl_src_addr; int vxl_vni; } ;
struct rm_priotracker {int dummy; } ;
struct TYPE_3__ {int in6; } ;
struct ifvxlancfg {int vxlc_learn; TYPE_1__ vxlc_remote_sa; TYPE_1__ vxlc_local_sa; int vxlc_ttl; int vxlc_port_max; int vxlc_port_min; int vxlc_ftable_timeout; int vxlc_ftable_max; int vxlc_ftable_cnt; int vxlc_mc_ifindex; int vxlc_vni; } ;


 int VAR_0 ;
 int FUNC_0 (struct vxlan_softc*,struct rm_priotracker*) ;
 int FUNC_1 (struct vxlan_softc*,struct rm_priotracker*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ifvxlancfg*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct vxlan_softc *VAR_1, void *VAR_2)
{
 struct rm_priotracker VAR_3;
 struct ifvxlancfg *VAR_4;

 VAR_4 = VAR_2;
 FUNC_3(VAR_4, sizeof(*VAR_4));

 FUNC_0(VAR_1, &VAR_3);
 VAR_4->vxlc_vni = VAR_1->vxl_vni;
 FUNC_4(&VAR_4->vxlc_local_sa, &VAR_1->vxl_src_addr,
     sizeof(union vxlan_sockaddr));
 FUNC_4(&VAR_4->vxlc_remote_sa, &VAR_1->vxl_dst_addr,
     sizeof(union vxlan_sockaddr));
 VAR_4->vxlc_mc_ifindex = VAR_1->vxl_mc_ifindex;
 VAR_4->vxlc_ftable_cnt = VAR_1->vxl_ftable_cnt;
 VAR_4->vxlc_ftable_max = VAR_1->vxl_ftable_max;
 VAR_4->vxlc_ftable_timeout = VAR_1->vxl_ftable_timeout;
 VAR_4->vxlc_port_min = VAR_1->vxl_min_port;
 VAR_4->vxlc_port_max = VAR_1->vxl_max_port;
 VAR_4->vxlc_learn = (VAR_1->vxl_flags & VAR_0) != 0;
 VAR_4->vxlc_ttl = VAR_1->vxl_ttl;
 FUNC_1(VAR_1, &VAR_3);
 return (0);
}
