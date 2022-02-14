
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vattr {int va_mode; int va_type; } ;
struct thread {int td_ucred; TYPE_2__* td_proc; } ;
struct nameidata {int * ni_dvp; int * ni_vp; int ni_cnd; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_4__ {TYPE_1__* p_fd; } ;
struct TYPE_3__ {int fd_cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vattr*) ;
 int VAR_9 ;
 int FUNC_4 (int *,int **,int *,struct vattr*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int VAR_12 ;
 int FUNC_6 (int ,int *,int *,struct vattr*) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (int *,struct mount**,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct thread *VAR_13, int VAR_14, const char *VAR_15,
    enum uio_seg VAR_16, int VAR_17)
{
 struct mount *VAR_18;
 struct vattr VAR_19;
 struct nameidata VAR_20;
 int VAR_21;

 FUNC_0(VAR_17);
restart:
 FUNC_5();
 FUNC_2(&VAR_20, VAR_2, VAR_4 | VAR_8 | VAR_1 |
     VAR_6, VAR_16, VAR_15, VAR_14, &VAR_12,
     VAR_13);
 if ((VAR_21 = FUNC_7(&VAR_20)) != 0)
  return (VAR_21);
 if (VAR_20.ni_vp != ((void*)0)) {
  FUNC_1(&VAR_20, VAR_5);
  if (VAR_20.ni_vp == VAR_20.ni_dvp)
   FUNC_11(VAR_20.ni_dvp);
  else
   FUNC_10(VAR_20.ni_dvp);
  FUNC_11(VAR_20.ni_vp);
  return (VAR_3);
 }
 if (FUNC_9(VAR_20.ni_dvp, &VAR_18, VAR_10) != 0) {
  FUNC_1(&VAR_20, VAR_5);
  FUNC_10(VAR_20.ni_dvp);
  if ((VAR_21 = FUNC_9(((void*)0), &VAR_18, VAR_11 | VAR_7)) != 0)
   return (VAR_21);
  goto restart;
 }
 FUNC_3(&VAR_19);
 VAR_19.va_type = VAR_9;
 VAR_19.va_mode = (VAR_17 & VAR_0) & ~VAR_13->td_proc->p_fd->fd_cmask;






 VAR_21 = FUNC_4(VAR_20.ni_dvp, &VAR_20.ni_vp, &VAR_20.ni_cnd, &VAR_19);
 if (VAR_21 == 0)
  FUNC_10(VAR_20.ni_vp);



 FUNC_10(VAR_20.ni_dvp);
 FUNC_8(VAR_18);
 FUNC_1(&VAR_20, VAR_5);
 return (VAR_21);
}
