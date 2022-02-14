
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_port; } ;
union vxlan_sockaddr {TYPE_1__ in4; } ;
typedef int uint8_t ;
struct TYPE_5__ {int sin_port; } ;
struct TYPE_6__ {TYPE_2__ in4; } ;
struct vxlan_softc {TYPE_3__ vxl_dst_addr; } ;
struct sockaddr {int dummy; } ;
struct rm_priotracker {int dummy; } ;


 int FUNC_0 (struct vxlan_softc*,struct rm_priotracker*) ;
 scalar_t__ FUNC_1 (union vxlan_sockaddr*) ;
 int FUNC_2 (struct vxlan_softc*,struct rm_priotracker*) ;
 int FUNC_3 (struct vxlan_softc*,union vxlan_sockaddr*,int const*,struct rm_priotracker*) ;
 int FUNC_4 (union vxlan_sockaddr*,struct sockaddr const*) ;
 int FUNC_5 (union vxlan_sockaddr*) ;

__attribute__((used)) static int
FUNC_6(struct vxlan_softc *VAR_0, const struct sockaddr *VAR_1,
    const uint8_t *VAR_2)
{
 struct rm_priotracker VAR_3;
 union vxlan_sockaddr VAR_4;
 int VAR_5;





 FUNC_4(&VAR_4, VAR_1);
 VAR_4.in4.sin_port = VAR_0->vxl_dst_addr.in4.sin_port;

 if (FUNC_1(&VAR_4)) {
  VAR_5 = FUNC_5(&VAR_4);
  if (VAR_5)
   return (VAR_5);
 }

 FUNC_0(VAR_0, &VAR_3);
 VAR_5 = FUNC_3(VAR_0, &VAR_4, VAR_2, &VAR_3);
 FUNC_2(VAR_0, &VAR_3);

 return (VAR_5);
}
