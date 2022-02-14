
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct componentname {int cn_flags; int cn_pnbuf; int cn_nameptr; } ;


 int VAR_0 ;
 struct vnode* VAR_1 ;
 int VAR_2 ;
 struct vnode* FUNC_0 (struct vnode*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,struct componentname*,struct thread*,int ,int ,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

int
FUNC_6(struct vnode *VAR_4, struct componentname *VAR_5,
       struct thread *VAR_6)
{
 int VAR_7;
 struct vnode *VAR_8;
 struct vnode *VAR_9;
 struct componentname VAR_10;

 VAR_8 = FUNC_0(VAR_4);
 VAR_9 = VAR_1;

 VAR_7 = FUNC_3(VAR_8, &VAR_9, VAR_5, &VAR_10, VAR_6, VAR_5->cn_nameptr,
     FUNC_1(VAR_5->cn_nameptr), VAR_2);
 if (VAR_7)
  return (VAR_7);

 if (VAR_9 != VAR_1) {
  if (VAR_8 == VAR_9)
   FUNC_5(VAR_9);
  else
   FUNC_4(VAR_9);
 }

 if (VAR_10.cn_flags & VAR_0) {
  FUNC_2(VAR_3, VAR_10.cn_pnbuf);
  VAR_10.cn_flags &= ~VAR_0;
 }

 if (!VAR_7) {
  VAR_10.cn_flags |= (VAR_5->cn_flags & VAR_0);
  VAR_5->cn_flags = VAR_10.cn_flags;
 }

 return (VAR_7);

}
