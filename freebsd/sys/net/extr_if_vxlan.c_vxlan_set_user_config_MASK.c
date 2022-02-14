
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int sin_len; void* sin_port; int sin_addr; void* sin_family; } ;
struct TYPE_12__ {int sin6_len; int sin6_addr; void* sin6_family; } ;
struct TYPE_17__ {TYPE_7__ in4; TYPE_3__ in6; } ;
struct TYPE_14__ {int sin_len; void* sin_port; int sin_addr; void* sin_family; } ;
struct TYPE_10__ {int sin6_len; int sin6_addr; void* sin6_family; } ;
struct TYPE_15__ {TYPE_5__ in4; TYPE_1__ in6; } ;
struct vxlan_softc {scalar_t__ vxl_min_port; scalar_t__ vxl_max_port; int vxl_flags; int vxl_ttl; int vxl_ftable_max; int vxl_ftable_timeout; int vxl_mc_ifname; TYPE_8__ vxl_dst_addr; TYPE_6__ vxl_src_addr; int vxl_vni; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct TYPE_13__ {int sin6_addr; } ;
struct TYPE_11__ {int sin_addr; } ;
struct TYPE_18__ {TYPE_4__ in6; TYPE_2__ in4; } ;
struct ifvxlanparam {int vxlp_with; scalar_t__ vxlp_min_port; scalar_t__ vxlp_max_port; scalar_t__ vxlp_learn; int vxlp_ttl; int vxlp_ftable_max; int vxlp_ftable_timeout; int vxlp_mc_ifname; int vxlp_remote_port; int vxlp_local_port; TYPE_9__ vxlp_remote_sa; TYPE_9__ vxlp_local_sa; int vxlp_vni; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*) ;

__attribute__((used)) static int
FUNC_7(struct vxlan_softc *VAR_18, struct ifvxlanparam *VAR_19)
{


 if (VAR_19->vxlp_with & (VAR_8 |
     VAR_13))
  return (VAR_2);



 if (VAR_19->vxlp_with & (VAR_9 |
     VAR_14))
  return (VAR_2);
 if (VAR_19->vxlp_with & VAR_17) {
  if (FUNC_5(VAR_19->vxlp_vni) == 0)
   VAR_18->vxl_vni = VAR_19->vxlp_vni;
 }

 if (VAR_19->vxlp_with & VAR_8) {
  VAR_18->vxl_src_addr.in4.sin_len = sizeof(struct sockaddr_in);
  VAR_18->vxl_src_addr.in4.sin_family = VAR_0;
  VAR_18->vxl_src_addr.in4.sin_addr =
      VAR_19->vxlp_local_sa.in4.sin_addr;
 } else if (VAR_19->vxlp_with & VAR_9) {
  VAR_18->vxl_src_addr.in6.sin6_len = sizeof(struct sockaddr_in6);
  VAR_18->vxl_src_addr.in6.sin6_family = VAR_1;
  VAR_18->vxl_src_addr.in6.sin6_addr =
      VAR_19->vxlp_local_sa.in6.sin6_addr;
 }

 if (VAR_19->vxlp_with & VAR_13) {
  VAR_18->vxl_dst_addr.in4.sin_len = sizeof(struct sockaddr_in);
  VAR_18->vxl_dst_addr.in4.sin_family = VAR_0;
  VAR_18->vxl_dst_addr.in4.sin_addr =
      VAR_19->vxlp_remote_sa.in4.sin_addr;
 } else if (VAR_19->vxlp_with & VAR_14) {
  VAR_18->vxl_dst_addr.in6.sin6_len = sizeof(struct sockaddr_in6);
  VAR_18->vxl_dst_addr.in6.sin6_family = VAR_1;
  VAR_18->vxl_dst_addr.in6.sin6_addr =
      VAR_19->vxlp_remote_sa.in6.sin6_addr;
 }

 if (VAR_19->vxlp_with & VAR_10)
  VAR_18->vxl_src_addr.in4.sin_port = FUNC_0(VAR_19->vxlp_local_port);
 if (VAR_19->vxlp_with & VAR_15)
  VAR_18->vxl_dst_addr.in4.sin_port = FUNC_0(VAR_19->vxlp_remote_port);

 if (VAR_19->vxlp_with & VAR_12) {
  if (VAR_19->vxlp_min_port <= VAR_19->vxlp_max_port) {
   VAR_18->vxl_min_port = VAR_19->vxlp_min_port;
   VAR_18->vxl_max_port = VAR_19->vxlp_max_port;
  }
 }

 if (VAR_19->vxlp_with & VAR_11)
  FUNC_1(VAR_18->vxl_mc_ifname, VAR_19->vxlp_mc_ifname, VAR_3);

 if (VAR_19->vxlp_with & VAR_6) {
  if (FUNC_3(VAR_19->vxlp_ftable_timeout) == 0)
   VAR_18->vxl_ftable_timeout = VAR_19->vxlp_ftable_timeout;
 }

 if (VAR_19->vxlp_with & VAR_5) {
  if (FUNC_2(VAR_19->vxlp_ftable_max) == 0)
   VAR_18->vxl_ftable_max = VAR_19->vxlp_ftable_max;
 }

 if (VAR_19->vxlp_with & VAR_16) {
  if (FUNC_4(VAR_19->vxlp_ttl) == 0)
   VAR_18->vxl_ttl = VAR_19->vxlp_ttl;
 }

 if (VAR_19->vxlp_with & VAR_7) {
  if (VAR_19->vxlp_learn == 0)
   VAR_18->vxl_flags &= ~VAR_4;
 }

 return (0);
}
