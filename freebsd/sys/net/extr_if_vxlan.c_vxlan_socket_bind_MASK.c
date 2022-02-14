
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union vxlan_sockaddr {int sa; } ;
struct vxlan_socket {int vxlso_sock; union vxlan_sockaddr vxlso_laddr; } ;
struct thread {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (struct ifnet*,char*,int) ;
 int FUNC_1 (int ,int *,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct vxlan_socket *VAR_2, struct ifnet *VAR_3)
{
 union vxlan_sockaddr VAR_4;
 struct thread *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1;
 VAR_4 = VAR_2->vxlso_laddr;

 VAR_6 = FUNC_1(VAR_2->vxlso_sock, &VAR_4.sa, VAR_5);
 if (VAR_6) {
  if (VAR_6 != VAR_0)
   FUNC_0(VAR_3, "cannot bind socket: %d\n", VAR_6);
  return (VAR_6);
 }

 return (0);
}
