
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; } ;
union vxlan_sockaddr {TYPE_3__ in6; TYPE_2__ in4; } ;
struct vxlan_socket {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (union vxlan_sockaddr*) ;
 int VAR_1 ;
 struct vxlan_socket* FUNC_1 (union vxlan_sockaddr*) ;

__attribute__((used)) static struct vxlan_socket *
FUNC_2(const union vxlan_sockaddr *VAR_2)
{
 union vxlan_sockaddr VAR_3;
 struct vxlan_socket *VAR_4;

 VAR_3 = *VAR_2;

 if (FUNC_0(&VAR_3))
  VAR_3.in4.sin_addr.s_addr = VAR_0;





 VAR_4 = FUNC_1(&VAR_3);

 return (VAR_4);
}
