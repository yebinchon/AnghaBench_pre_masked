
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
 int FUNC_0 (struct vnode*,int,struct fuse_filehandle**,struct ucred*,int ) ;

int
FUNC_1(struct vnode *VAR_2, int VAR_3,
    struct fuse_filehandle **VAR_4, struct ucred *VAR_5, pid_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  VAR_7 = FUNC_0(VAR_2, VAR_0 | VAR_1, VAR_4, VAR_5, VAR_6);
 return VAR_7;
}
