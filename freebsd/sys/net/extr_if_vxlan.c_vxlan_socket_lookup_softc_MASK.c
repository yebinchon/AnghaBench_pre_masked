
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vxlan_softc {int dummy; } ;
struct vxlan_socket {int dummy; } ;
struct rm_priotracker {int dummy; } ;


 int FUNC_0 (struct vxlan_socket*,struct rm_priotracker*) ;
 int FUNC_1 (struct vxlan_socket*,struct rm_priotracker*) ;
 struct vxlan_softc* FUNC_2 (struct vxlan_socket*,int ) ;

__attribute__((used)) static struct vxlan_softc *
FUNC_3(struct vxlan_socket *VAR_0, uint32_t VAR_1)
{
 struct rm_priotracker VAR_2;
 struct vxlan_softc *VAR_3;

 FUNC_0(VAR_0, &VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, &VAR_2);

 return (VAR_3);
}
