
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferq {int flag; int dmach; int q; int queued; } ;
struct fw_xfer {scalar_t__ resp; } ;
struct fw_drv1 {struct fw_xferq* it; struct fw_xferq* ir; int xferlist; int binds; struct firewire_comm* fc; } ;
struct fw_bind {struct fw_xferq* it; struct fw_xferq* ir; int xferlist; int binds; struct firewire_comm* fc; } ;
struct firewire_comm {int (* itx_disable ) (struct firewire_comm*,int ) ;int (* irx_disable ) (struct firewire_comm*,int ) ;} ;
struct cdev {struct fw_drv1* si_drv1; } ;
typedef int fw_proc ;


 scalar_t__ FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct fw_drv1*,int ) ;
 int FUNC_4 (struct firewire_comm*,struct fw_drv1*) ;
 int FUNC_5 (struct fw_xfer*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fw_xferq*) ;
 int FUNC_8 (struct cdev*,int,int,int *) ;
 int VAR_7 ;
 int FUNC_9 (struct firewire_comm*,int ) ;
 int FUNC_10 (struct firewire_comm*,int ) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_8, int VAR_9, int VAR_10, fw_proc *VAR_11)
{
 struct firewire_comm *VAR_12;
 struct fw_drv1 *VAR_13;
 struct fw_xfer *VAR_14;
 struct fw_bind *VAR_15;
 int VAR_16 = 0;

 if (FUNC_0(VAR_8))
  return FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_13 = VAR_8->si_drv1;
 VAR_12 = VAR_13->fc;


 for (VAR_15 = FUNC_1(&VAR_13->binds); VAR_15 != ((void*)0);
     VAR_15 = FUNC_1(&VAR_13->binds)) {
  FUNC_4(VAR_12, VAR_15);
  FUNC_2(&VAR_13->binds, VAR_6);
  FUNC_6(&VAR_15->xferlist);
  FUNC_3(VAR_15, VAR_5);
 }
 if (VAR_13->ir != ((void*)0)) {
  struct fw_xferq *VAR_17 = VAR_13->ir;

  if ((VAR_17->flag & VAR_3) == 0)
   return (VAR_0);
  if (VAR_17->flag & VAR_4) {
   VAR_17->flag &= ~VAR_4;
   VAR_12->irx_disable(VAR_12, VAR_17->dmach);
  }

  FUNC_7(VAR_17);

  for (VAR_14 = FUNC_1(&VAR_17->q);
      VAR_14 != ((void*)0); VAR_14 = FUNC_1(&VAR_17->q)) {
   VAR_17->queued--;
   FUNC_2(&VAR_17->q, VAR_7);

   VAR_14->resp = 0;
   FUNC_5(VAR_14);
  }
  VAR_17->flag &= ~(VAR_3 | VAR_2 |
      VAR_1);
  VAR_13->ir = ((void*)0);

 }
 if (VAR_13->it != ((void*)0)) {
  struct fw_xferq *VAR_18 = VAR_13->it;

  if ((VAR_18->flag & VAR_3) == 0)
   return (VAR_0);
  if (VAR_18->flag & VAR_4) {
   VAR_18->flag &= ~VAR_4;
   VAR_12->itx_disable(VAR_12, VAR_18->dmach);
  }

  FUNC_7(VAR_18);
  VAR_18->flag &= ~(VAR_3 |
      VAR_2 | VAR_1);
  VAR_13->it = ((void*)0);
 }
 FUNC_3(VAR_8->si_drv1, VAR_5);
 VAR_8->si_drv1 = ((void*)0);

 return VAR_16;
}
