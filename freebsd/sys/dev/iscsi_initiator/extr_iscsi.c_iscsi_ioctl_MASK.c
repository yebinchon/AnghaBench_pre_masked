
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct thread {TYPE_1__* td_proc; } ;
struct isc_softc {int dummy; } ;
struct cdev {TYPE_2__* si_drv2; struct isc_softc* si_drv1; } ;
typedef int pid_t ;
typedef int iscsi_cam_t ;
struct TYPE_7__ {int signal; int * soc; TYPE_1__* proc; int oid; int clist; } ;
typedef TYPE_2__ isc_session_t ;
typedef int isc_opt_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct cdev*) ;
 int FUNC_4 (struct cdev*,int*) ;
 int FUNC_5 (struct cdev*,int) ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 (struct cdev*,scalar_t__,struct thread*) ;
 int FUNC_8 (struct cdev*,scalar_t__,struct thread*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int ,struct thread*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int,char*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_13(struct cdev *VAR_8, u_long VAR_9, caddr_t VAR_10, int VAR_11, struct thread *VAR_12)
{
     struct isc_softc *VAR_13;
     isc_session_t *VAR_14;
     isc_opt_t *VAR_15;
     int VAR_16;

     FUNC_2(8);

     VAR_16 = 0;
     if(FUNC_3(VAR_8) == VAR_7) {



   VAR_13 = VAR_8->si_drv1;
   if(VAR_13 == ((void*)0))
        return VAR_4;

   switch(VAR_9) {
   case 132:
        VAR_16 = FUNC_4(VAR_8, (int *)VAR_10);
        if(VAR_16 == 0)
      break;

   default:
        VAR_16 = VAR_4;
   }
   return VAR_16;
     }



     VAR_14 = VAR_8->si_drv2;
     if(VAR_14 == ((void*)0))
   return VAR_4;

     FUNC_12(6, "dev=%d cmd=%d", FUNC_3(VAR_8), (int)(VAR_9 & 0xff));

     switch(VAR_9) {
     case 131:
   VAR_16 = FUNC_10(VAR_14, *(u_int *)VAR_10, VAR_12);
   break;

     case 133:
   VAR_15 = (isc_opt_t *)VAR_10;
   VAR_16 = FUNC_9(VAR_14, VAR_15);
   break;

     case 134:
   VAR_16 = FUNC_8(VAR_8, VAR_10, VAR_12);
   break;

     case 136:
   VAR_16 = FUNC_7(VAR_8, VAR_10, VAR_12);
   break;

     case 137:
   VAR_16 = FUNC_6(VAR_8);
   break;

     case 129:
   VAR_16 = VAR_14->soc == ((void*)0)? VAR_3: FUNC_5(VAR_8, 1);
   if(VAR_16 == 0) {
        VAR_14->proc = VAR_12->td_proc;
        FUNC_0(&VAR_14->clist, FUNC_1(VAR_14->oid),
          VAR_5, "pid", VAR_0,
          &VAR_14->proc->p_pid, sizeof(pid_t), "control process id");
   }
   break;

     case 135:
   VAR_16 = VAR_14->soc == ((void*)0)? VAR_3: FUNC_5(VAR_8, 2);
   break;

     case 128:
   VAR_16 = FUNC_5(VAR_8, 0);
   break;

     case 130: {
   int VAR_17 = *(int *)VAR_10;

   if(VAR_17 < 0 || VAR_17 > VAR_6)
        VAR_16 = VAR_1;
   else
  VAR_14->signal = VAR_17;
   break;
     }

     case 138: {
   iscsi_cam_t *VAR_18 = (iscsi_cam_t *)VAR_10;

   VAR_16 = FUNC_11(VAR_14, VAR_18);
   break;
     }

     default:
   VAR_16 = VAR_2;
     }

     return VAR_16;
}
