
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vattr {int va_gid; int va_uid; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {int n_flag; TYPE_1__* n_accesscache; } ;
struct TYPE_2__ {scalar_t__ stamp; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 struct nfsnode* FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_7 (struct thread*,int,int ,int ) ;
 int FUNC_8 (struct vnode*,struct vattr*,int *,struct ucred*,struct thread*,struct nfsvattr*,int*,int *) ;

__attribute__((used)) static int
FUNC_9(struct vnode *VAR_2, struct vattr *VAR_3, struct ucred *VAR_4,
    struct thread *VAR_5)
{
 struct nfsnode *VAR_6 = FUNC_5(VAR_2);
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct nfsvattr VAR_11;

 if (FUNC_3(VAR_2)) {
  FUNC_1(VAR_6);
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
   VAR_6->n_accesscache[VAR_10].stamp = 0;
  VAR_6->n_flag |= VAR_0;
  FUNC_2(VAR_6);
  FUNC_0(VAR_2);
 }
 VAR_7 = FUNC_8(VAR_2, VAR_3, ((void*)0), VAR_4, VAR_5, &VAR_11, &VAR_9,
     ((void*)0));
 if (VAR_9) {
  VAR_8 = FUNC_6(&VAR_2, &VAR_11, ((void*)0), ((void*)0), 0, 1);
  if (VAR_8 && !VAR_7)
   VAR_7 = VAR_8;
 }
 if (VAR_7 && FUNC_4(VAR_2))
  VAR_7 = FUNC_7(VAR_5, VAR_7, VAR_3->va_uid, VAR_3->va_gid);
 return (VAR_7);
}
