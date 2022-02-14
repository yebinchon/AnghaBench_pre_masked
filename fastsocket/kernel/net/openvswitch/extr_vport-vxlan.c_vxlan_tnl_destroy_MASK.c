
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_port {int vs; } ;
struct vport {int dummy; } ;


 int FUNC_0 (struct vport*) ;
 int FUNC_1 (int ) ;
 struct vxlan_port* FUNC_2 (struct vport*) ;

__attribute__((used)) static void FUNC_3(struct vport *VAR_0)
{
 struct vxlan_port *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->vs);

 FUNC_0(VAR_0);
}
