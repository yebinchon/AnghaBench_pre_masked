
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct vattr {int va_mtime; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsnode {int n_flag; int n_mtime; scalar_t__ n_attrstamp; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ VAR_3 ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*,int,struct thread*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static inline int
FUNC_11(struct vnode *VAR_6, struct thread *VAR_7, struct ucred *VAR_8)
{
 int VAR_9 = 0;
 struct vattr VAR_10;
 struct nfsnode *VAR_11 = FUNC_5(VAR_6);
 bool VAR_12;





 VAR_12 = FUNC_7(VAR_6);
 FUNC_1(VAR_11);
 if (VAR_11->n_flag & VAR_0) {
  FUNC_2(VAR_11);
  if (VAR_6->v_type != VAR_3) {
   if (VAR_6->v_type != VAR_2)
    FUNC_10("nfs: bioread, not dir");
   FUNC_8(VAR_6);
   VAR_9 = FUNC_9(VAR_6, VAR_5 | VAR_4, VAR_7, 1);
   if (VAR_9 != 0)
    goto out;
  }
  VAR_11->n_attrstamp = 0;
  FUNC_0(VAR_6);
  VAR_9 = FUNC_4(VAR_6, &VAR_10, VAR_8);
  if (VAR_9)
   goto out;
  FUNC_1(VAR_11);
  VAR_11->n_mtime = VAR_10.va_mtime;
  FUNC_2(VAR_11);
 } else {
  FUNC_2(VAR_11);
  VAR_9 = FUNC_4(VAR_6, &VAR_10, VAR_8);
  if (VAR_9)
   goto out;
  FUNC_1(VAR_11);
  if ((VAR_11->n_flag & VAR_1)
      || (FUNC_3(&VAR_11->n_mtime, &VAR_10.va_mtime))) {
   FUNC_2(VAR_11);
   if (VAR_6->v_type == VAR_2)
    FUNC_8(VAR_6);
   VAR_9 = FUNC_9(VAR_6, VAR_5 | VAR_4, VAR_7, 1);
   if (VAR_9 != 0)
    goto out;
   FUNC_1(VAR_11);
   VAR_11->n_mtime = VAR_10.va_mtime;
   VAR_11->n_flag &= ~VAR_1;
  }
  FUNC_2(VAR_11);
 }
out:
 FUNC_6(VAR_6, VAR_12);
 return (VAR_9);
}
