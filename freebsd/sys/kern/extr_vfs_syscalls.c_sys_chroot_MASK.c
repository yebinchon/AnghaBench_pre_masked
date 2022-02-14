
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct nameidata {int ni_vp; } ;
struct chroot_args {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,int ,struct thread*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct thread*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (struct thread*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct thread *VAR_8, struct chroot_args *VAR_9)
{
 struct nameidata VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_8, VAR_6);
 if (VAR_11 != 0)
  return (VAR_11);
 FUNC_1(&VAR_10, VAR_4, VAR_1 | VAR_3 | VAR_2 | VAR_0,
     VAR_7, VAR_9->path, VAR_8);
 VAR_11 = FUNC_5(&VAR_10);
 if (VAR_11 != 0)
  goto error;
 VAR_11 = FUNC_3(VAR_10.ni_vp, VAR_8);
 if (VAR_11 != 0)
  goto e_vunlock;





 FUNC_2(VAR_10.ni_vp, 0);
 VAR_11 = FUNC_7(VAR_8, VAR_10.ni_vp);
 FUNC_9(VAR_10.ni_vp);
 FUNC_0(&VAR_10, VAR_5);
 return (VAR_11);
e_vunlock:
 FUNC_8(VAR_10.ni_vp);
error:
 FUNC_0(&VAR_10, VAR_5);
 return (VAR_11);
}
