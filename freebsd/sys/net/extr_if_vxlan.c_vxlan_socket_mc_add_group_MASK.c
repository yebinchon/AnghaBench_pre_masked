
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union vxlan_sockaddr {int sa; } ;
struct TYPE_3__ {scalar_t__ sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct vxlan_socket_mc_info {int vxlsomc_ifidx; int vxlsomc_users; TYPE_2__ vxlsomc_saddr; TYPE_2__ vxlsomc_gaddr; } ;
struct vxlan_socket {struct vxlan_socket_mc_info* vxlso_mc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct vxlan_socket*) ;
 int FUNC_2 (struct vxlan_socket*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (struct vxlan_socket_mc_info*,union vxlan_sockaddr const*,union vxlan_sockaddr const*,int) ;
 int FUNC_5 (struct vxlan_socket*,union vxlan_sockaddr const*,union vxlan_sockaddr const*,int*,union vxlan_sockaddr*) ;
 int FUNC_6 (struct vxlan_socket*,union vxlan_sockaddr const*,union vxlan_sockaddr*,int) ;

__attribute__((used)) static int
FUNC_7(struct vxlan_socket *VAR_3,
    const union vxlan_sockaddr *VAR_4, const union vxlan_sockaddr *VAR_5,
    int VAR_6, int *VAR_7)
{
 union vxlan_sockaddr VAR_8;
 struct vxlan_socket_mc_info *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 FUNC_1(VAR_3);
 for (VAR_11 = 0, VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = &VAR_3->vxlso_mc[VAR_10];

  if (VAR_9->vxlsomc_gaddr.sa.sa_family == VAR_0) {
   VAR_11++;
   continue;
  }

  if (FUNC_4(VAR_9, VAR_4, VAR_5, VAR_6))
   goto out;
 }
 FUNC_2(VAR_3);

 if (VAR_11 == 0)
  return (VAR_1);

 VAR_12 = FUNC_5(VAR_3, VAR_4, VAR_5, &VAR_6, &VAR_8);
 if (VAR_12)
  return (VAR_12);

 FUNC_1(VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = &VAR_3->vxlso_mc[VAR_10];

  if (VAR_9->vxlsomc_gaddr.sa.sa_family == VAR_0) {
   FUNC_3(&VAR_9->vxlsomc_gaddr, &VAR_4->sa);
   FUNC_3(&VAR_9->vxlsomc_saddr, &VAR_8.sa);
   VAR_9->vxlsomc_ifidx = VAR_6;
   goto out;
  }
 }
 FUNC_2(VAR_3);

 VAR_12 = FUNC_6(VAR_3, VAR_4, &VAR_8, VAR_6);
 FUNC_0(VAR_12 == 0);

 return (VAR_1);

out:
 VAR_9->vxlsomc_users++;
 FUNC_2(VAR_3);

 *VAR_7 = VAR_10;

 return (0);
}
