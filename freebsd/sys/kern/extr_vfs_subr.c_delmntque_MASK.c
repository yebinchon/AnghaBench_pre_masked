
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; struct mount* v_mount; } ;
struct mount {scalar_t__ mnt_activevnodelistsize; scalar_t__ mnt_nvnodelistsize; int mnt_nvnodelist; int mnt_listmtx; int mnt_activevnodelist; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (int *,struct vnode*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (int,struct vnode*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct vnode *VAR_3)
{
 struct mount *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->v_mount;
 if (VAR_4 == ((void*)0))
  return;
 FUNC_1(VAR_4);
 FUNC_5(VAR_3);
 FUNC_0(VAR_4->mnt_activevnodelistsize <= VAR_4->mnt_nvnodelistsize,
     ("Active vnode list size %d > Vnode list size %d",
      VAR_4->mnt_activevnodelistsize, VAR_4->mnt_nvnodelistsize));
 VAR_5 = VAR_3->v_iflag & VAR_0;
 VAR_3->v_iflag &= ~VAR_0;
 if (VAR_5) {
  FUNC_8(&VAR_4->mnt_listmtx);
  FUNC_4(&VAR_4->mnt_activevnodelist, VAR_3, VAR_1);
  VAR_4->mnt_activevnodelistsize--;
  FUNC_9(&VAR_4->mnt_listmtx);
 }
 VAR_3->v_mount = ((void*)0);
 FUNC_6(VAR_3);
 FUNC_7(VAR_4->mnt_nvnodelistsize > 0, VAR_3,
  ("bad mount point vnode list size"));
 FUNC_4(&VAR_4->mnt_nvnodelist, VAR_3, VAR_2);
 VAR_4->mnt_nvnodelistsize--;
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
