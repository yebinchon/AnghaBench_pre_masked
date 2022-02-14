
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpr_softc {TYPE_1__* mpr_cdev; int mpr_dev; } ;
struct TYPE_2__ {struct mpr_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int,int ,int ,int,char*,int) ;
 int VAR_3 ;

int
FUNC_2(struct mpr_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->mpr_dev);
 VAR_4->mpr_cdev = FUNC_1(&VAR_3, VAR_5, VAR_2, VAR_1, 0640,
     "mpr%d", VAR_5);

 if (VAR_4->mpr_cdev == ((void*)0))
  return (VAR_0);

 VAR_4->mpr_cdev->si_drv1 = VAR_4;
 return (0);
}
