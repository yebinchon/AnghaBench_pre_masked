
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,int) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_0, void *VAR_1, int VAR_2, struct vnode **VAR_3)
{
 int VAR_4;

 *VAR_3 = VAR_1;
 VAR_4 = FUNC_0(*VAR_3, VAR_2);
 if (VAR_4 != 0)
  FUNC_1(*VAR_3);
 return (VAR_4);
}
