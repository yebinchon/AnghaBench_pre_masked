
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct componentname {int cn_flags; int cn_pnbuf; int cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 struct vnode* FUNC_0 (struct vnode*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,struct componentname*,struct thread*,int ,int ,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct vnode *VAR_5, struct componentname *VAR_6,
       struct thread *VAR_7)
{
 int VAR_8;
 struct vnode *VAR_9;
 struct vnode *VAR_10;
 struct componentname VAR_11;

 VAR_9 = FUNC_0(VAR_5);
 VAR_10 = VAR_3;

 VAR_8 = FUNC_3(VAR_9, &VAR_10, VAR_6, &VAR_11, VAR_7, VAR_6->cn_nameptr,
     FUNC_1(VAR_6->cn_nameptr), VAR_0);
 if (VAR_8)
  return (VAR_8);

 if (VAR_10 == VAR_3)
  VAR_8 = VAR_1;
 else {
  if (VAR_9 == VAR_10)
   FUNC_5(VAR_10);
  else
   FUNC_4(VAR_10);
 }

 if (VAR_11.cn_flags & VAR_2) {
  FUNC_2(VAR_4, VAR_11.cn_pnbuf);
  VAR_11.cn_flags &= ~VAR_2;
 }

 if (!VAR_8) {
  VAR_11.cn_flags |= (VAR_6->cn_flags & VAR_2);
  VAR_6->cn_flags = VAR_11.cn_flags;
 }

 return (VAR_8);
}
