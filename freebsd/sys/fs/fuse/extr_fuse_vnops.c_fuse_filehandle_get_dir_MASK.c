
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct fuse_filehandle {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int ,struct fuse_filehandle**,struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_2, struct fuse_filehandle **VAR_3,
 struct ucred *VAR_4, pid_t VAR_5)
{
 if (FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5) == 0)
  return 0;
 return FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4, VAR_5);
}
