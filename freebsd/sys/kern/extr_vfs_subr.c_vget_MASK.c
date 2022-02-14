
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
typedef enum vgetstate { ____Placeholder_vgetstate } vgetstate ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*,int) ;
 struct thread* VAR_1 ;
 int FUNC_2 (struct vnode*,int,int) ;

int
FUNC_3(struct vnode *VAR_2, int VAR_3, struct thread *VAR_4)
{
 enum vgetstate VAR_5;

 FUNC_0(VAR_4 == VAR_1);

 VAR_5 = FUNC_1(VAR_2, (VAR_3 & VAR_0) != 0);
 return (FUNC_2(VAR_2, VAR_3, VAR_5));
}
