
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct TYPE_5__ {int acl_cnt; } ;
typedef int NFSPROC_T ;
typedef TYPE_1__ NFSACL_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vnode*,int ,TYPE_1__*,struct ucred*,int *) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,TYPE_1__*,struct ucred*,int *) ;
 scalar_t__ VAR_4 ;

int
FUNC_4(struct vnode *VAR_5, NFSACL_T *VAR_6, struct ucred *VAR_7, NFSPROC_T *VAR_8)
{
 int VAR_9;

 if (VAR_4 == 0 || FUNC_2(VAR_5) == 0) {
  VAR_9 = VAR_3;
  goto out;
 }






 if (VAR_6->acl_cnt > (VAR_0 - 6) / 2) {
  VAR_9 = VAR_3;
  goto out;
 }
 VAR_9 = FUNC_1(VAR_5, VAR_1, VAR_6, VAR_7, VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_9 == VAR_2)
   VAR_9 = 0;
 }

out:
 FUNC_0(VAR_9);
 return (VAR_9);
}
