
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct nfsvattr {int dummy; } ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct ucred*) ;
 int VAR_0 ;
 struct ucred* FUNC_1 () ;
 int FUNC_2 (struct vnode*,int ,int ,struct ucred*,int *,int ,int *,int *,int *,struct nfsvattr*,int *) ;

int
FUNC_3(struct vnode *VAR_1, struct nfsvattr *VAR_2, NFSPROC_T *VAR_3)
{
 struct ucred *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1();
 VAR_5 = FUNC_2(VAR_1, 0, 0, VAR_4, VAR_3, VAR_0,
     ((void*)0), ((void*)0), ((void*)0), VAR_2, ((void*)0));
 FUNC_0(VAR_4);
 return (VAR_5);
}
