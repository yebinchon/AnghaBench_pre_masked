
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct vnode *VAR_1)
{
 return ((VAR_1->v_vflag & VAR_0) != 0);
}
