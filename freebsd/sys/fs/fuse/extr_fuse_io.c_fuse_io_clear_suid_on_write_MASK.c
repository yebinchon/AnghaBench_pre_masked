
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct vattr {int va_mode; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_data {int dataflags; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fuse_data* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;
 int FUNC_2 (struct vnode*,struct vattr*,struct thread*,int *) ;
 scalar_t__ FUNC_3 (struct ucred*,int ) ;
 int FUNC_4 (struct vattr*) ;
 struct mount* FUNC_5 (struct vnode*) ;

__attribute__((used)) static void
FUNC_6(struct vnode *VAR_4, struct ucred *VAR_5,
 struct thread *VAR_6)
{
 struct fuse_data *VAR_7;
 struct mount *VAR_8;
 struct vattr VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_4);
 VAR_7 = FUNC_0(VAR_8);
 VAR_10 = VAR_7->dataflags;

 if (VAR_10 & VAR_0) {
  if (FUNC_3(VAR_5, VAR_1)) {
   FUNC_1(VAR_4, &VAR_9, VAR_5, VAR_6);
   if (VAR_9.va_mode & (VAR_3 | VAR_2)) {
    mode_t VAR_11 = VAR_9.va_mode & ~(VAR_3 | VAR_2);

    FUNC_4(&VAR_9);
    VAR_9.va_mode = VAR_11;







    (void)FUNC_2(VAR_4, &VAR_9, VAR_6, ((void*)0));
   }
  }
 }
}
