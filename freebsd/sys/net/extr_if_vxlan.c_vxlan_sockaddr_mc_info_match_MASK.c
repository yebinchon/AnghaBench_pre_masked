
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union vxlan_sockaddr {int sa; } ;
struct vxlan_socket_mc_info {int vxlsomc_ifidx; int vxlsomc_gaddr; int vxlsomc_saddr; } ;


 int FUNC_0 (union vxlan_sockaddr const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const struct vxlan_socket_mc_info *VAR_0,
    const union vxlan_sockaddr *VAR_1, const union vxlan_sockaddr *VAR_2,
    int VAR_3)
{

 if (!FUNC_0(VAR_2) &&
     !FUNC_1(&VAR_0->vxlsomc_saddr, &VAR_2->sa))
  return (0);
 if (!FUNC_1(&VAR_0->vxlsomc_gaddr, &VAR_1->sa))
  return (0);
 if (VAR_3 != 0 && VAR_3 != VAR_0->vxlsomc_ifidx)
  return (0);

 return (1);
}
