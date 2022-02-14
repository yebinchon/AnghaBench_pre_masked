
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct pps_data {int busy; int lock; int ppbus; int ppsdev; int timeout; TYPE_2__* pps; } ;
struct cdev {int si_drv2; struct pps_data* si_drv1; } ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ ppsparam; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct pps_data *VAR_5 = VAR_1->si_drv1;
 int VAR_6 = (intptr_t)VAR_1->si_drv2;

 FUNC_7(&VAR_5->lock);
 VAR_5->pps[VAR_6].ppsparam.mode = 0;
 FUNC_1(VAR_5->ppbus);
 VAR_5->busy &= ~(1 << VAR_6);
 if (VAR_6 > 0 && !(VAR_5->busy & ~1))
  FUNC_0(&VAR_5->timeout);
 if (!VAR_5->busy) {
  device_t VAR_7 = VAR_5->ppsdev;
  device_t VAR_8 = VAR_5->ppbus;

  FUNC_6(VAR_8, 0);
  FUNC_5(VAR_8, 0);

  FUNC_3(VAR_8, VAR_0);
  FUNC_2(VAR_8, VAR_7);
 }
 FUNC_4(VAR_5->ppbus);
 FUNC_8(&VAR_5->lock);
 return(0);
}
