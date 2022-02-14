
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct vattr {struct timespec va_mtime; } ;
struct thread {TYPE_1__* td_proc; int td_ucred; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct TYPE_2__ {int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char*,struct thread*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct vnode*,struct vattr*,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (char*,int,char*,int,int) ;
 int FUNC_4 (struct nameidata*,int*,int,int,int ,int *) ;
 int FUNC_5 (struct thread*,struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_15, char *VAR_16, int VAR_17,
    int VAR_18, int VAR_19, struct vnode **VAR_20)
{
 struct vnode *VAR_21, *VAR_22, *VAR_23;
 struct vattr VAR_24;
 struct nameidata VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 char VAR_31;
 struct timespec VAR_32;

 VAR_22 = VAR_21 = ((void*)0);
 VAR_30 = VAR_8 | VAR_9;
 VAR_29 = VAR_12 | VAR_11 |
     (VAR_14 ? VAR_13 : 0);

 for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++) {
  VAR_28 = VAR_5 | VAR_1 | VAR_6;

  VAR_31 = VAR_16[VAR_17 + VAR_18];
  (void)FUNC_3(VAR_16 + VAR_17, VAR_18 + 1, "%.*u", VAR_18,
      VAR_27);
  VAR_16[VAR_17 + VAR_18] = VAR_31;

  FUNC_1(&VAR_25, VAR_2, VAR_4, VAR_10, VAR_16, VAR_15);
  VAR_26 = FUNC_4(&VAR_25, &VAR_28, VAR_30, VAR_29, VAR_15->td_ucred,
      ((void*)0));
  if (VAR_26 != 0)
   break;

  VAR_23 = VAR_25.ni_vp;
  FUNC_0(&VAR_25, VAR_3);
  if ((VAR_28 & VAR_5) == VAR_5) {
   VAR_22 = VAR_23;
   break;
  }

  VAR_26 = FUNC_2(VAR_23, &VAR_24, VAR_15->td_ucred);
  if (VAR_26 != 0) {
   FUNC_5(VAR_15, VAR_23);
   break;
  }

  if (VAR_21 == ((void*)0) ||
      VAR_32.tv_sec > VAR_24.va_mtime.tv_sec ||
      (VAR_32.tv_sec == VAR_24.va_mtime.tv_sec &&
      VAR_32.tv_nsec >= VAR_24.va_mtime.tv_nsec)) {
   if (VAR_21 != ((void*)0))
    FUNC_5(VAR_15, VAR_21);
   VAR_21 = VAR_23;
   VAR_32 = VAR_24.va_mtime;
  } else {
   FUNC_5(VAR_15, VAR_23);
  }
 }

 if (VAR_21 != ((void*)0)) {
  if (VAR_22 == ((void*)0)) {
   if ((VAR_15->td_proc->p_flag & VAR_7) != 0) {
    VAR_26 = VAR_0;
    FUNC_5(VAR_15, VAR_21);
   } else {
    VAR_22 = VAR_21;
   }
  } else {
   FUNC_5(VAR_15, VAR_21);
  }
 }
 if (VAR_26 != 0) {
  if (VAR_22 != ((void*)0))
   FUNC_5(VAR_15, VAR_21);
 } else {
  *VAR_20 = VAR_22;
 }

 return (VAR_26);
}
