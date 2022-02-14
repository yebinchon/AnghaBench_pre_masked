
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct componentname {char* cn_nameptr; int cn_flags; int cn_pnbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vnode*,struct componentname*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,struct componentname*,struct thread*,char*,int ,int ) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,struct mount**,int) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(struct vnode *VAR_7, struct componentname *VAR_8,
     struct thread *VAR_9, char *VAR_10)
{
 int VAR_11;
 struct vnode *VAR_12;
 struct componentname VAR_13;
 struct mount *VAR_14;

 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_8->cn_nameptr;

 VAR_12 = VAR_3;
 if ((VAR_11 = FUNC_3(VAR_7, &VAR_12, VAR_8, &VAR_13, VAR_9, VAR_10, FUNC_1(VAR_10), VAR_0)))
  return (VAR_11);
 if (VAR_12 != VAR_3) {
  if (VAR_13.cn_flags & VAR_2) {
   FUNC_2(VAR_6, VAR_13.cn_pnbuf);
   VAR_13.cn_flags &= ~VAR_2;
  }
  if (VAR_7 == VAR_12)
   FUNC_7(VAR_12);
  else
   FUNC_6(VAR_12);

  return (VAR_1);
 }

 if ((VAR_11 = FUNC_5(VAR_7, &VAR_14, VAR_5 | VAR_4)))
  goto unionfs_mkwhiteout_free_out;
 VAR_11 = FUNC_0(VAR_7, &VAR_13, VAR_0);

 FUNC_4(VAR_14);

unionfs_mkwhiteout_free_out:
 if (VAR_13.cn_flags & VAR_2) {
  FUNC_2(VAR_6, VAR_13.cn_pnbuf);
  VAR_13.cn_flags &= ~VAR_2;
 }

 return (VAR_11);
}
