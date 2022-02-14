
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct undelete_args {int path; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int cn_flags; } ;
struct nameidata {scalar_t__ ni_vp; scalar_t__ ni_dvp; TYPE_1__ ni_cnd; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,int ,struct thread*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (int *,struct mount**,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int
FUNC_9(struct thread *VAR_12, struct undelete_args *VAR_13)
{
 struct mount *VAR_14;
 struct nameidata VAR_15;
 int VAR_16;

restart:
 FUNC_3();
 FUNC_1(&VAR_15, VAR_1, VAR_5 | VAR_2 | VAR_0,
     VAR_9, VAR_13->path, VAR_12);
 VAR_16 = FUNC_4(&VAR_15);
 if (VAR_16 != 0)
  return (VAR_16);

 if (VAR_15.ni_vp != VAR_7 || !(VAR_15.ni_cnd.cn_flags & VAR_4)) {
  FUNC_0(&VAR_15, VAR_6);
  if (VAR_15.ni_vp == VAR_15.ni_dvp)
   FUNC_8(VAR_15.ni_dvp);
  else
   FUNC_7(VAR_15.ni_dvp);
  if (VAR_15.ni_vp)
   FUNC_8(VAR_15.ni_vp);
  return (VAR_3);
 }
 if (FUNC_6(VAR_15.ni_dvp, &VAR_14, VAR_10) != 0) {
  FUNC_0(&VAR_15, VAR_6);
  FUNC_7(VAR_15.ni_dvp);
  if ((VAR_16 = FUNC_6(((void*)0), &VAR_14, VAR_11 | VAR_8)) != 0)
   return (VAR_16);
  goto restart;
 }
 VAR_16 = FUNC_2(VAR_15.ni_dvp, &VAR_15.ni_cnd, VAR_1);
 FUNC_0(&VAR_15, VAR_6);
 FUNC_7(VAR_15.ni_dvp);
 FUNC_5(VAR_14);
 return (VAR_16);
}
