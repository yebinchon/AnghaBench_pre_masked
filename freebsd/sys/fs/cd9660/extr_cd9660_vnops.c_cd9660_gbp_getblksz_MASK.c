
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct iso_node {int i_mnt; } ;
typedef int daddr_t ;


 struct iso_node* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int ,struct iso_node*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vnode *VAR_0, daddr_t VAR_1)
{
 struct iso_node *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return (FUNC_1(VAR_2->i_mnt, VAR_2, VAR_1));
}
