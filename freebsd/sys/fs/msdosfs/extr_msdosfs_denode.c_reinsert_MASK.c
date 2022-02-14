
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vnode {int dummy; } ;
struct denode {int de_Attributes; int de_dirclust; scalar_t__ de_inode; scalar_t__ de_diroffset; TYPE_1__* de_pmp; } ;
struct TYPE_2__ {scalar_t__ pm_bpcluster; } ;


 int VAR_0 ;
 struct vnode* FUNC_0 (struct denode*) ;
 int FUNC_1 (struct vnode*,scalar_t__) ;

void
FUNC_2(struct denode *VAR_1)
{
 struct vnode *VAR_2;
 VAR_2 = FUNC_0(VAR_1);
 VAR_1->de_inode = (uint64_t)VAR_1->de_pmp->pm_bpcluster * VAR_1->de_dirclust +
     VAR_1->de_diroffset;
 FUNC_1(VAR_2, VAR_1->de_inode);
}
