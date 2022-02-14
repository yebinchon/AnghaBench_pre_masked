
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_sockaddr {int dummy; } vxlan_sockaddr ;
struct vxlan_socket {union vxlan_sockaddr vxlso_laddr; int * vxlso_vni_hash; int vxlso_refcnt; int vxlso_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vxlan_socket* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static struct vxlan_socket *
FUNC_4(const union vxlan_sockaddr *VAR_4)
{
 struct vxlan_socket *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 FUNC_3(&VAR_5->vxlso_lock, "vxlansorm");
 FUNC_2(&VAR_5->vxlso_refcnt, 0);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_0(&VAR_5->vxlso_vni_hash[VAR_6]);
 VAR_5->vxlso_laddr = *VAR_4;

 return (VAR_5);
}
