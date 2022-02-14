
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct fuse_mknod_in {scalar_t__ rdev; int mode; } ;
struct fuse_dispatcher {struct fuse_mknod_in* indata; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;
typedef int mode_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_dispatcher*,int) ;
 int FUNC_1 (struct fuse_dispatcher*,int,int ,int ,struct thread*,struct ucred*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static void
FUNC_4(
 struct fuse_dispatcher *VAR_1,
 struct componentname *VAR_2,
 struct vnode *VAR_3,
 uint64_t VAR_4,
 struct thread *VAR_5,
 struct ucred *VAR_6,
 mode_t VAR_7,
 enum fuse_opcode *VAR_8)
{
 struct fuse_mknod_in *VAR_9;

 FUNC_0(VAR_1, sizeof(*VAR_9) + VAR_2->cn_namelen + 1);
 *VAR_8 = VAR_0;
 FUNC_1(VAR_1, *VAR_8, FUNC_3(VAR_3), VAR_4, VAR_5, VAR_6);
 VAR_9 = VAR_1->indata;
 VAR_9->mode = VAR_7;
 VAR_9->rdev = 0;
 FUNC_2((char *)VAR_1->indata + sizeof(*VAR_9), VAR_2->cn_nameptr,
     VAR_2->cn_namelen);
 ((char *)VAR_1->indata)[sizeof(*VAR_9) + VAR_2->cn_namelen] = '\0';
}
