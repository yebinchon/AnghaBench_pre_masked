
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef void* u_int32_t ;
struct vnode {int dummy; } ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {int dummy; } ;
struct nfsvattr {int dummy; } ;
struct nfsnode {TYPE_1__* n_accesscache; } ;
typedef int gid_t ;
struct TYPE_2__ {scalar_t__ uid; scalar_t__ stamp; void* mode; } ;


 int FUNC_0 (struct vnode*,scalar_t__,void*,int) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (struct nfsnode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 struct nfsnode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_6 (struct thread*,int,int ,int ) ;
 int FUNC_7 (struct vnode*,int,struct ucred*,struct thread*,struct nfsvattr*,int*,void**,int *) ;
 void* VAR_1 ;

__attribute__((used)) static int
FUNC_8(struct vnode *VAR_2, int VAR_3, struct thread *VAR_4,
    struct ucred *VAR_5, u_int32_t *VAR_6)
{
 int VAR_7 = 0, VAR_8, VAR_9, VAR_10;
 u_int32_t VAR_11;
 struct nfsnode *VAR_12 = FUNC_4(VAR_2);
 struct nfsvattr VAR_13;

 VAR_7 = FUNC_7(VAR_2, VAR_3, VAR_5, VAR_4, &VAR_13, &VAR_8,
     &VAR_11, ((void*)0));
 if (VAR_8)
  (void) FUNC_5(&VAR_2, &VAR_13, ((void*)0), ((void*)0), 0, 1);
 if (!VAR_7) {
  VAR_10 = 0;
  FUNC_1(VAR_12);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_12->n_accesscache[VAR_9].uid == VAR_5->cr_uid) {
    VAR_12->n_accesscache[VAR_9].mode = VAR_11;
    VAR_12->n_accesscache[VAR_9].stamp = VAR_1;
    break;
   }
   if (VAR_9 > 0 && VAR_12->n_accesscache[VAR_9].stamp <
       VAR_12->n_accesscache[VAR_10].stamp)
    VAR_10 = VAR_9;
  }
  if (VAR_9 == VAR_0) {
   VAR_12->n_accesscache[VAR_10].uid = VAR_5->cr_uid;
   VAR_12->n_accesscache[VAR_10].mode = VAR_11;
   VAR_12->n_accesscache[VAR_10].stamp = VAR_1;
  }
  FUNC_2(VAR_12);
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_11;
  FUNC_0(VAR_2, VAR_5->cr_uid, VAR_11, 0);
 } else if (FUNC_3(VAR_2)) {
  VAR_7 = FUNC_6(VAR_4, VAR_7, (uid_t)0, (gid_t)0);
 }





 return (VAR_7);
}
