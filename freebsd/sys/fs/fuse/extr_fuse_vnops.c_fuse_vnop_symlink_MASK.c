
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_symlink_args {char* a_target; struct componentname* a_cnp; struct vnode** a_vpp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct fuse_dispatcher {char* indata; } ;
struct componentname {size_t cn_namelen; char const* cn_nameptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,size_t) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct vnode*,int ,int *) ;
 int FUNC_3 (struct vnode*,struct vnode**,struct componentname*,int ,struct fuse_dispatcher*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(struct vop_symlink_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_dvp;
 struct vnode **VAR_6 = VAR_4->a_vpp;
 struct componentname *VAR_7 = VAR_4->a_cnp;
 const char *VAR_8 = VAR_4->a_target;

 struct fuse_dispatcher VAR_9;

 int VAR_10;
 size_t VAR_11;

 if (FUNC_4(VAR_5)) {
  return VAR_0;
 }
 VAR_11 = FUNC_6(VAR_8) + 1;
 FUNC_1(&VAR_9, VAR_11 + VAR_7->cn_namelen + 1);
 FUNC_2(&VAR_9, VAR_1, VAR_5, VAR_3, ((void*)0));

 FUNC_5(VAR_9.indata, VAR_7->cn_nameptr, VAR_7->cn_namelen);
 ((char *)VAR_9.indata)[VAR_7->cn_namelen] = '\0';
 FUNC_5((char *)VAR_9.indata + VAR_7->cn_namelen + 1, VAR_8, VAR_11);

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_2, &VAR_9);
 FUNC_0(&VAR_9);
 return VAR_10;
}
