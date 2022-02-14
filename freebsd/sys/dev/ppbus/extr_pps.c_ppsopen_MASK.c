
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pps_data {int busy; int lock; int ppbus; int lastdata; int timeout; int ppsdev; } ;
struct cdev {int si_drv2; struct pps_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int,int ,struct pps_data*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_9, int VAR_10, int VAR_11, struct thread *VAR_12)
{
 struct pps_data *VAR_13 = VAR_9->si_drv1;
 device_t VAR_14 = VAR_13->ppbus;
 int VAR_15 = (intptr_t)VAR_9->si_drv2;
 int VAR_16;






 FUNC_9(&VAR_13->lock);
 FUNC_3(VAR_14);
 if (!VAR_13->busy) {
  device_t VAR_17 = VAR_13->ppsdev;

  if (FUNC_5(VAR_14, VAR_17, VAR_5|VAR_3)) {
   FUNC_7(VAR_14);
   FUNC_10(&VAR_13->lock);
   return (VAR_0);
  }

  VAR_16 = FUNC_6(VAR_13->ppbus, VAR_4);
  FUNC_1("EPP: %d %d\n", VAR_16, FUNC_0(VAR_13->ppbus));

  VAR_16 = VAR_1 | VAR_2 | VAR_7 | VAR_6;
  FUNC_8(VAR_14, VAR_16);
 }
 if (VAR_15 > 0 && !(VAR_13->busy & ~1)) {

  FUNC_2(&VAR_13->timeout, 1, VAR_8, VAR_13);
  VAR_13->lastdata = FUNC_4(VAR_13->ppbus);
 }
 VAR_13->busy |= (1 << VAR_15);
 FUNC_7(VAR_14);
 FUNC_10(&VAR_13->lock);
 return(0);
}
