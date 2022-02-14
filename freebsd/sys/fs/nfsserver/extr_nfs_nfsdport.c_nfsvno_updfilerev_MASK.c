
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_iflag; } ;
struct vattr {int va_mtime; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsrv_descript {int nd_cred; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*,int) ;
 int FUNC_2 (struct vattr*) ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*,struct vattr*,int ) ;
 int FUNC_4 (struct vnode*,struct nfsvattr*,struct nfsrv_descript*,struct thread*,int,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct vnode *VAR_5, struct nfsvattr *VAR_6,
    struct nfsrv_descript *VAR_7, struct thread *VAR_8)
{
 struct vattr VAR_9;

 FUNC_2(&VAR_9);
 FUNC_5(&VAR_9.va_mtime);
 if (FUNC_0(VAR_5) != VAR_1) {
  FUNC_1(VAR_5, VAR_3 | VAR_2);
  if ((VAR_5->v_iflag & VAR_4) != 0)
   return (VAR_0);
 }
 (void) FUNC_3(VAR_5, &VAR_9, VAR_7->nd_cred);
 (void) FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, 1, ((void*)0));
 return (0);
}
