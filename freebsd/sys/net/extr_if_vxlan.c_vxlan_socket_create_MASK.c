
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; } ;
union vxlan_sockaddr {TYPE_1__ in6; TYPE_3__ in4; } ;
struct vxlan_socket {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (union vxlan_sockaddr*) ;
 int VAR_2 ;
 struct vxlan_socket* FUNC_1 (union vxlan_sockaddr*) ;
 int FUNC_2 (struct vxlan_socket*,struct ifnet*) ;
 int FUNC_3 (struct vxlan_socket*) ;
 int FUNC_4 (struct vxlan_socket*,struct ifnet*) ;
 int FUNC_5 (struct vxlan_socket*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3, int VAR_4,
    const union vxlan_sockaddr *VAR_5, struct vxlan_socket **VAR_6)
{
 union vxlan_sockaddr VAR_7;
 struct vxlan_socket *VAR_8;
 int VAR_9;

 VAR_7 = *VAR_5;





 if (VAR_4 != 0) {
  if (FUNC_0(&VAR_7))
   VAR_7.in4.sin_addr.s_addr = VAR_1;




 }

 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_9 = FUNC_4(VAR_8, VAR_3);
 if (VAR_9)
  goto fail;

 VAR_9 = FUNC_2(VAR_8, VAR_3);
 if (VAR_9)
  goto fail;






 FUNC_5(VAR_8);
 *VAR_6 = VAR_8;

 return (0);

fail:
 FUNC_3(VAR_8);

 return (VAR_9);
}
