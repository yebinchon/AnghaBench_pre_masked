
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; int v_vflag; int v_type; } ;
struct mount {struct vnode* mnt_syncer; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,struct mount*,int *,struct vnode**) ;
 int FUNC_4 (struct vnode*,struct mount*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*,int) ;
 int FUNC_10 (struct bufobj*,long) ;
 int FUNC_11 (struct vnode*) ;

void
FUNC_12(struct mount *VAR_9)
{
 struct vnode *VAR_10;
 struct bufobj *VAR_11;
 static long VAR_12, VAR_13, VAR_14;
 int VAR_15;


 VAR_15 = FUNC_3("syncer", VAR_9, &VAR_6, &VAR_10);
 if (VAR_15 != 0)
  FUNC_7("vfs_allocate_syncvnode: getnewvnode() failed");
 VAR_10->v_type = VAR_2;
 FUNC_9(VAR_10, VAR_0 | VAR_1);
 VAR_10->v_vflag |= VAR_3;
 VAR_15 = FUNC_4(VAR_10, VAR_9);
 if (VAR_15 != 0)
  FUNC_7("vfs_allocate_syncvnode: insmntque() failed");
 VAR_10->v_vflag &= ~VAR_3;
 FUNC_2(VAR_10, 0);






 VAR_14 += VAR_13;
 if (VAR_14 == 0 || VAR_14 > VAR_8) {
  VAR_12 /= 2;
  VAR_13 /= 2;
  if (VAR_12 == 0) {
   VAR_12 = VAR_8 / 2;
   VAR_13 = VAR_8;
  }
  VAR_14 = VAR_12;
 }
 VAR_11 = &VAR_10->v_bufobj;
 FUNC_0(VAR_11);
 FUNC_10(VAR_11, VAR_7 > 0 ? VAR_14 % VAR_7 : 0);

 FUNC_5(&VAR_4);
 VAR_5++;
 if (VAR_9->mnt_syncer == ((void*)0)) {
  VAR_9->mnt_syncer = VAR_10;
  VAR_10 = ((void*)0);
 }
 FUNC_6(&VAR_4);
 FUNC_1(VAR_11);
 if (VAR_10 != ((void*)0)) {
  FUNC_9(VAR_10, VAR_0 | VAR_1);
  FUNC_8(VAR_10);
  FUNC_11(VAR_10);
 }
}
