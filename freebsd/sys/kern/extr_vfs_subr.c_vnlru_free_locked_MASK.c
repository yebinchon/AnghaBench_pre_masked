
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; scalar_t__ v_holdcnt; struct mount* v_mount; int * v_op; } ;
struct vfsops {int dummy; } ;
struct mount {struct vfsops* mnt_op; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct vnode* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vnode*,int ) ;
 int FUNC_3 (int *,struct vnode*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (int,struct vnode*,char*) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*) ;
 int VAR_5 ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vfsops*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static void
FUNC_15(int VAR_8, struct vfsops *VAR_9)
{
 struct vnode *VAR_10;
 struct mount *VAR_11;
 bool VAR_12;

 VAR_12 = 0;
 FUNC_8(&VAR_7, VAR_0);
 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;
 for (; VAR_8 > 0; VAR_8--) {
  VAR_10 = FUNC_1(&VAR_6);




  if (VAR_10 == ((void*)0)) {
   if (VAR_12)
    break;
   FUNC_10(&VAR_7);
   FUNC_13(VAR_9);
   VAR_12 = 1;
   FUNC_9(&VAR_7);
   continue;
  }

  FUNC_6(VAR_10->v_op != ((void*)0), VAR_10,
      ("vnlru_free: vnode already reclaimed."));
  FUNC_0((VAR_10->v_iflag & VAR_2) != 0,
      ("Removing vnode not on freelist"));
  FUNC_0((VAR_10->v_iflag & VAR_1) == 0,
      ("Mangling active vnode"));
  FUNC_3(&VAR_6, VAR_10, VAR_5);
  if ((VAR_9 != ((void*)0) && (VAR_11 = VAR_10->v_mount) != ((void*)0) &&
      VAR_11->mnt_op != VAR_9) || !FUNC_4(VAR_10)) {
   FUNC_2(&VAR_6, VAR_10, VAR_5);
   continue;
  }
  FUNC_6((VAR_10->v_iflag & VAR_2) != 0 && VAR_10->v_holdcnt == 0,
      VAR_10, ("vp inconsistent on freelist"));
  VAR_3--;
  VAR_10->v_iflag &= ~VAR_2;
  FUNC_7();
  FUNC_11(&VAR_10->v_holdcnt);

  FUNC_10(&VAR_7);
  FUNC_5(VAR_10);
  FUNC_14(VAR_10);





  FUNC_12(VAR_10);
  FUNC_9(&VAR_7);
 }
}
