
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct nameidata {TYPE_2__* ni_vp; } ;
struct acct_args {int * path; } ;
struct TYPE_10__ {TYPE_1__* pl_rlimit; } ;
struct TYPE_9__ {scalar_t__ v_type; } ;
struct TYPE_8__ {int rlim_max; int rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,int *,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct thread*,int) ;
 int VAR_17 ;
 TYPE_4__* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_2__* VAR_23 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int ,int ,char*) ;
 TYPE_4__* FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (struct thread*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int,int ,struct thread*) ;
 int FUNC_13 (struct nameidata*,int*,int ,int *) ;
 int FUNC_14 (int*) ;

int
FUNC_15(struct thread *VAR_24, struct acct_args *VAR_25)
{
 struct nameidata VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_27 = FUNC_9(VAR_24, VAR_10);
 if (VAR_27)
  return (VAR_27);





 if (VAR_25->path != ((void*)0)) {
  FUNC_1(&VAR_26, VAR_6, VAR_8 | VAR_2,
      VAR_13, VAR_25->path, VAR_24);
  VAR_28 = VAR_4 | VAR_9;
  VAR_27 = FUNC_13(&VAR_26, &VAR_28, 0, ((void*)0));
  if (VAR_27)
   return (VAR_27);
  FUNC_0(&VAR_26, VAR_7);
  FUNC_2(VAR_26.ni_vp, 0);
  if (VAR_26.ni_vp->v_type != VAR_14) {
   FUNC_12(VAR_26.ni_vp, VAR_28, VAR_24->td_ucred, VAR_24);
   return (VAR_3);
  }






 }





 FUNC_10(&VAR_21);






 VAR_30 = (VAR_23 != ((void*)0) && VAR_25->path != ((void*)0));







 VAR_20 = 0;
 if (VAR_23 != ((void*)0))
  VAR_27 = FUNC_3(VAR_24, !VAR_30);
 if (VAR_25->path == ((void*)0)) {
  if (VAR_19 & VAR_1) {
   VAR_19 |= VAR_0;
   FUNC_14(&VAR_19);
  }
  FUNC_11(&VAR_21);
  return (VAR_27);
 }





 VAR_18 = FUNC_6();
 for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++)
  VAR_18->pl_rlimit[VAR_29].rlim_cur =
      VAR_18->pl_rlimit[VAR_29].rlim_max = VAR_11;





 VAR_23 = VAR_26.ni_vp;
 VAR_16 = FUNC_4(VAR_24->td_ucred);
 VAR_17 = VAR_28;
 if (VAR_19 & VAR_1)
  VAR_19 &= ~VAR_0;
 else {





  VAR_27 = FUNC_5(VAR_22, ((void*)0), ((void*)0), 0, 0,
      "accounting");
  if (VAR_27) {
   (void) FUNC_3(VAR_24, 0);
   FUNC_11(&VAR_21);
   FUNC_7(VAR_5, "Unable to start accounting thread\n");
   return (VAR_27);
  }
 }
 VAR_15 = 1;
 FUNC_11(&VAR_21);
 if (!VAR_30)
  FUNC_7(VAR_5, "Accounting enabled\n");
 return (VAR_27);
}
