
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct mount {int dummy; } ;



__attribute__((used)) static inline struct mount *
FUNC_0(struct vnode *VAR_0)
{
 return (VAR_0->v_mount);
}
