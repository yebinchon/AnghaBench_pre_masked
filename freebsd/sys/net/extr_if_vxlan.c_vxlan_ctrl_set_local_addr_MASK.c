
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union vxlan_sockaddr {int sa; } ;
struct vxlan_softc {int vxl_src_addr; } ;
struct ifvxlancmd {union vxlan_sockaddr vxlcmd_sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union vxlan_sockaddr*) ;
 scalar_t__ FUNC_1 (union vxlan_sockaddr*) ;
 int FUNC_2 (struct vxlan_softc*) ;
 int FUNC_3 (struct vxlan_softc*) ;
 scalar_t__ FUNC_4 (struct vxlan_softc*) ;
 int FUNC_5 (union vxlan_sockaddr*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (union vxlan_sockaddr*) ;

__attribute__((used)) static int
FUNC_8(struct vxlan_softc *VAR_2, void *VAR_3)
{
 struct ifvxlancmd *VAR_4;
 union vxlan_sockaddr *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3;
 VAR_5 = &VAR_4->vxlcmd_sa;

 if (!FUNC_0(VAR_5))
  return (VAR_1);
 if (FUNC_7(VAR_5) != 0)
  return (VAR_1);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6)
   return (VAR_6);
 }

 FUNC_2(VAR_2);
 if (FUNC_4(VAR_2)) {
  FUNC_6(&VAR_2->vxl_src_addr, &VAR_5->sa);
  VAR_6 = 0;
 } else
  VAR_6 = VAR_0;
 FUNC_3(VAR_2);

 return (VAR_6);
}
