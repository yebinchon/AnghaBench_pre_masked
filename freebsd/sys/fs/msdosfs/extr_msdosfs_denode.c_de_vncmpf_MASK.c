
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vnode {int dummy; } ;
struct denode {scalar_t__ de_inode; scalar_t__ de_refcnt; } ;


 struct denode* FUNC_0 (struct vnode*) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_0, void *VAR_1)
{
 struct denode *VAR_2;
 uint64_t *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->de_inode != *VAR_3) || (VAR_2->de_refcnt <= 0);
}
