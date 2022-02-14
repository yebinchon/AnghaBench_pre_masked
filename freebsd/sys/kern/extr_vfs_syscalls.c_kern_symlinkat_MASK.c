
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vattr {int va_mode; int va_type; } ;
struct thread {int td_ucred; TYPE_2__* td_proc; } ;
struct nameidata {scalar_t__ ni_vp; scalar_t__ ni_dvp; int ni_cnd; } ;
struct mount {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_4__ {TYPE_1__* p_fd; } ;
struct TYPE_3__ {int fd_cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct nameidata*,int ,int,int,char const*,int,int *,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct vattr*) ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__,scalar_t__*,int *,struct vattr*,char const*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 () ;
 int VAR_15 ;
 int FUNC_6 (char const*,char*,int ,int *) ;
 int FUNC_7 (int ,scalar_t__,int *,struct vattr*) ;
 int FUNC_8 (struct nameidata*) ;
 int VAR_16 ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct mount*) ;
 int FUNC_12 (int *,struct mount**,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

int
FUNC_15(struct thread *VAR_17, const char *VAR_18, int VAR_19, const char *VAR_20,
    enum uio_seg VAR_21)
{
 struct mount *VAR_22;
 struct vattr VAR_23;
 const char *VAR_24;
 char *VAR_25;
 struct nameidata VAR_26;
 int VAR_27;

 if (VAR_21 == VAR_11) {
  VAR_24 = VAR_18;
 } else {
  VAR_25 = FUNC_9(VAR_16, VAR_6);
  if ((VAR_27 = FUNC_6(VAR_18, VAR_25, VAR_5, ((void*)0))) != 0)
   goto out;
  VAR_24 = VAR_25;
 }
 FUNC_0(VAR_24);
restart:
 FUNC_5();
 FUNC_2(&VAR_26, VAR_2, VAR_4 | VAR_10 | VAR_1 |
     VAR_8, VAR_21, VAR_20, VAR_19, &VAR_15,
     VAR_17);
 if ((VAR_27 = FUNC_8(&VAR_26)) != 0)
  goto out;
 if (VAR_26.ni_vp) {
  FUNC_1(&VAR_26, VAR_7);
  if (VAR_26.ni_vp == VAR_26.ni_dvp)
   FUNC_14(VAR_26.ni_dvp);
  else
   FUNC_13(VAR_26.ni_dvp);
  FUNC_14(VAR_26.ni_vp);
  VAR_27 = VAR_3;
  goto out;
 }
 if (FUNC_12(VAR_26.ni_dvp, &VAR_22, VAR_13) != 0) {
  FUNC_1(&VAR_26, VAR_7);
  FUNC_13(VAR_26.ni_dvp);
  if ((VAR_27 = FUNC_12(((void*)0), &VAR_22, VAR_14 | VAR_9)) != 0)
   goto out;
  goto restart;
 }
 FUNC_3(&VAR_23);
 VAR_23.va_mode = VAR_0 &~ VAR_17->td_proc->p_fd->fd_cmask;







 VAR_27 = FUNC_4(VAR_26.ni_dvp, &VAR_26.ni_vp, &VAR_26.ni_cnd, &VAR_23, VAR_24);
 if (VAR_27 == 0)
  FUNC_13(VAR_26.ni_vp);



 FUNC_1(&VAR_26, VAR_7);
 FUNC_13(VAR_26.ni_dvp);
 FUNC_11(VAR_22);
out:
 if (VAR_21 != VAR_11)
  FUNC_10(VAR_16, VAR_25);
 return (VAR_27);
}
