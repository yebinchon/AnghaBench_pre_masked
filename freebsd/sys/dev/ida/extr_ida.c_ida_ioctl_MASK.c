
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct ida_user_command {int blkno; int drive; int command; TYPE_1__ d; } ;
struct ida_softc {int lock; } ;
struct cmd_info {int len; int flags; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int int32_t ;
typedef int data ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;

 struct cmd_info* FUNC_0 (int ) ;
 int FUNC_1 (struct ida_softc*,int ,void*,int,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4 (struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int32_t VAR_5, struct thread *VAR_6)
{
 struct ida_softc *VAR_7;
 struct ida_user_command *VAR_8;
 struct cmd_info *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 void *VAR_14;

 VAR_7 = (struct ida_softc *)VAR_2->si_drv1;
 VAR_8 = (struct ida_user_command *)VAR_4;
 VAR_12 = 0;

 switch (VAR_3) {
 case 128:
  VAR_9 = FUNC_0(VAR_8->command);
  if (VAR_9 == ((void*)0)) {
   VAR_12 = VAR_0;
   break;
  }
  VAR_10 = VAR_9->len;
  VAR_11 = VAR_9->flags;
  if (VAR_10)
   VAR_14 = &VAR_8->d.buf;
  else {
   VAR_14 = &VAR_13;
   VAR_10 = sizeof(VAR_13);
  }
  FUNC_2(&VAR_7->lock);
  VAR_12 = FUNC_1(VAR_7, VAR_8->command, VAR_14, VAR_10,
        VAR_8->drive, VAR_8->blkno, VAR_11);
  FUNC_3(&VAR_7->lock);
  break;
 default:
  VAR_12 = VAR_1;
  break;
 }
 return (VAR_12);
}
