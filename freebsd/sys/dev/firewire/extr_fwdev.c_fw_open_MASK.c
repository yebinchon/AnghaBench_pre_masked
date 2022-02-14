
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_drv1 {int rq; int binds; int fc; } ;
struct firewire_softc {int fc; } ;
struct cdev {int si_flags; struct fw_drv1* si_drv1; } ;
typedef int fw_proc ;


 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct cdev*) ;
 scalar_t__ FUNC_2 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (struct cdev*) ;
 struct firewire_softc* FUNC_7 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct cdev*,int,int,int *) ;
 int FUNC_9 (int *,int ,int ,int ,int,char*,int,int) ;
 struct fw_drv1* FUNC_10 (int,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_10, int VAR_11, int VAR_12, fw_proc *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = FUNC_1(VAR_10);
 struct fw_drv1 *VAR_16;
 struct firewire_softc *VAR_17;

 if (FUNC_2(VAR_10))
  return FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);

 VAR_17 = FUNC_7(VAR_9, VAR_15);
 if (VAR_17 == ((void*)0))
  return (VAR_1);

 FUNC_3(VAR_17->fc);
 if (VAR_10->si_drv1 != ((void*)0)) {
  FUNC_4(VAR_17->fc);
  return (VAR_0);
 }

 VAR_10->si_drv1 = (void *)-1;
 FUNC_4(VAR_17->fc);

 VAR_10->si_drv1 = FUNC_10(sizeof(struct fw_drv1), VAR_3, VAR_4 | VAR_5);

 if ((VAR_10->si_flags & VAR_6) == 0) {
  int VAR_18 = FUNC_1(VAR_10);
  int VAR_19 = FUNC_0(VAR_10);

  FUNC_9(&VAR_8, FUNC_6(VAR_10),
      VAR_7, VAR_2, 0660, "fw%d.%d", VAR_18, VAR_19);
 }

 VAR_16 = VAR_10->si_drv1;
 VAR_16->fc = VAR_17->fc;
 FUNC_5(&VAR_16->binds);
 FUNC_5(&VAR_16->rq);

 return VAR_14;
}
