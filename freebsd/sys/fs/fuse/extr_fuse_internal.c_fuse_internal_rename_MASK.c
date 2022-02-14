
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fuse_rename_in {int newdir; } ;
struct fuse_dispatcher {struct fuse_rename_in* indata; } ;
struct componentname {int cn_namelen; int cn_nameptr; int cn_cred; int cn_thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct fuse_dispatcher*) ;
 int FUNC_2 (struct fuse_dispatcher*,int) ;
 int FUNC_3 (struct fuse_dispatcher*,int ,struct vnode*,int ,int ) ;
 int FUNC_4 (struct fuse_dispatcher*) ;
 int FUNC_5 (char*,int ,int) ;

int
FUNC_6(struct vnode *VAR_1,
    struct componentname *VAR_2,
    struct vnode *VAR_3,
    struct componentname *VAR_4)
{
 struct fuse_dispatcher VAR_5;
 struct fuse_rename_in *VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_5, sizeof(*VAR_6) + VAR_2->cn_namelen + VAR_4->cn_namelen + 2);
 FUNC_3(&VAR_5, VAR_0, VAR_1, VAR_4->cn_thread, VAR_4->cn_cred);

 VAR_6 = VAR_5.indata;
 VAR_6->newdir = FUNC_0(VAR_3);
 FUNC_5((char *)VAR_5.indata + sizeof(*VAR_6), VAR_2->cn_nameptr,
     VAR_2->cn_namelen);
 ((char *)VAR_5.indata)[sizeof(*VAR_6) + VAR_2->cn_namelen] = '\0';
 FUNC_5((char *)VAR_5.indata + sizeof(*VAR_6) + VAR_2->cn_namelen + 1,
     VAR_4->cn_nameptr, VAR_4->cn_namelen);
 ((char *)VAR_5.indata)[sizeof(*VAR_6) + VAR_2->cn_namelen +
     VAR_4->cn_namelen + 1] = '\0';

 VAR_7 = FUNC_4(&VAR_5);
 FUNC_1(&VAR_5);
 return VAR_7;
}
