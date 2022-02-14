
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct sillyrename {int s_namlen; int s_name; } ;
struct componentname {int cn_thread; int cn_cred; int cn_namelen; int cn_nameptr; } ;


 int FUNC_0 (struct vnode*,struct vnode*,int ,int ,struct vnode*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_0, struct vnode *VAR_1, struct componentname *VAR_2,
    struct sillyrename *VAR_3)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2->cn_nameptr, VAR_2->cn_namelen,
     VAR_0, ((void*)0), VAR_3->s_name, VAR_3->s_namlen, VAR_2->cn_cred,
     VAR_2->cn_thread));
}
