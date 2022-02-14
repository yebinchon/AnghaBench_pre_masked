
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_3__ {int sin_addr; } ;
union vxlan_sockaddr {TYPE_2__ in6; TYPE_1__ in4; } ;
struct vxlan_socket {int vxlso_sock; } ;
struct sockopt {int sopt_valsize; struct ipv6_mreq* sopt_val; int sopt_name; int sopt_level; int sopt_dir; } ;
struct ipv6_mreq {int ipv6mr_interface; int ipv6mr_multiaddr; int imr_interface; int imr_multiaddr; } ;
struct ip_mreq {int ipv6mr_interface; int ipv6mr_multiaddr; int imr_interface; int imr_multiaddr; } ;
typedef int sopt ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (union vxlan_sockaddr const*) ;
 scalar_t__ FUNC_1 (union vxlan_sockaddr const*) ;
 int FUNC_2 (struct sockopt*,int) ;
 int FUNC_3 (int ,struct sockopt*) ;

__attribute__((used)) static int
FUNC_4(struct vxlan_socket *VAR_6,
    const union vxlan_sockaddr *VAR_7, const union vxlan_sockaddr *VAR_8,
    int VAR_9)
{
 struct sockopt VAR_10;
 int VAR_11;

 FUNC_2(&VAR_10, sizeof(VAR_10));
 VAR_10.sopt_dir = VAR_5;

 if (FUNC_0(VAR_7)) {
  struct ip_mreq VAR_12;

  VAR_12.imr_multiaddr = VAR_7->in4.sin_addr;
  VAR_12.imr_interface = VAR_8->in4.sin_addr;

  VAR_10.sopt_level = VAR_1;
  VAR_10.sopt_name = VAR_4;
  VAR_10.sopt_val = &VAR_12;
  VAR_10.sopt_valsize = sizeof(VAR_12);
  VAR_11 = FUNC_3(VAR_6->vxlso_sock, &VAR_10);

 } else if (FUNC_1(VAR_7)) {
  struct ipv6_mreq VAR_13;

  VAR_13.ipv6mr_multiaddr = VAR_7->in6.sin6_addr;
  VAR_13.ipv6mr_interface = VAR_9;

  VAR_10.sopt_level = VAR_2;
  VAR_10.sopt_name = VAR_3;
  VAR_10.sopt_val = &VAR_13;
  VAR_10.sopt_valsize = sizeof(VAR_13);
  VAR_11 = FUNC_3(VAR_6->vxlso_sock, &VAR_10);

 } else
  VAR_11 = VAR_0;

 return (VAR_11);
}
