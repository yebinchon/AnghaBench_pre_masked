
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct acl {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,int ,int ,struct ucred*,int *,int ,int *,int *,int *,int *,struct acl*) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_1, struct acl *VAR_2, struct ucred *VAR_3,
    NFSPROC_T *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, 0, 0, VAR_3, VAR_4, VAR_0,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2);
 return (VAR_5);
}
