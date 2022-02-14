
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sa_family; } ;
struct TYPE_7__ {scalar_t__ sin_port; } ;
union vxlan_sockaddr {TYPE_5__ sa; TYPE_2__ in4; } ;
struct TYPE_8__ {scalar_t__ sin_port; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {TYPE_3__ in4; TYPE_1__ sa; } ;
struct vxlan_softc {TYPE_4__ vxl_dst_addr; } ;
struct vxlan_ftable_entry {int dummy; } ;
struct ifvxlancmd {int vxlcmd_mac; union vxlan_sockaddr vxlcmd_sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union vxlan_sockaddr*) ;
 scalar_t__ FUNC_1 (union vxlan_sockaddr*) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int FUNC_3 (struct vxlan_softc*) ;
 struct vxlan_ftable_entry* FUNC_4 () ;
 int FUNC_5 (struct vxlan_ftable_entry*) ;
 int FUNC_6 (struct vxlan_softc*,struct vxlan_ftable_entry*,int ,TYPE_5__*,int ) ;
 int FUNC_7 (struct vxlan_softc*,struct vxlan_ftable_entry*) ;
 int FUNC_8 (union vxlan_sockaddr*) ;
 scalar_t__ FUNC_9 (union vxlan_sockaddr*) ;
 scalar_t__ FUNC_10 (union vxlan_sockaddr*) ;

__attribute__((used)) static int
FUNC_11(struct vxlan_softc *VAR_4, void *VAR_5)
{
 union vxlan_sockaddr VAR_6;
 struct ifvxlancmd *VAR_7;
 struct vxlan_ftable_entry *VAR_8;
 int VAR_9;

 VAR_7 = VAR_5;
 VAR_6 = VAR_7->vxlcmd_sa;

 if (!FUNC_0(&VAR_6))
  return (VAR_1);
 if (FUNC_9(&VAR_6) != 0)
  return (VAR_1);
 if (FUNC_10(&VAR_6) != 0)
  return (VAR_1);

 if (VAR_6.sa.sa_family != VAR_4->vxl_dst_addr.sa.sa_family)
  return (VAR_0);

 if (FUNC_1(&VAR_6)) {
  VAR_9 = FUNC_8(&VAR_6);
  if (VAR_9)
   return (VAR_9);
 }

 VAR_8 = FUNC_4();
 if (VAR_8 == ((void*)0))
  return (VAR_2);

 if (VAR_6.in4.sin_port == 0)
  VAR_6.in4.sin_port = VAR_4->vxl_dst_addr.in4.sin_port;

 FUNC_6(VAR_4, VAR_8, VAR_7->vxlcmd_mac, &VAR_6.sa,
     VAR_3);

 FUNC_2(VAR_4);
 VAR_9 = FUNC_7(VAR_4, VAR_8);
 FUNC_3(VAR_4);

 if (VAR_9)
  FUNC_5(VAR_8);

 return (VAR_9);
}
