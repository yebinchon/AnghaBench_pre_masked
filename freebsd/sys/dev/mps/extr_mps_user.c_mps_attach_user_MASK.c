
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mps_softc {TYPE_1__* mps_cdev; int mps_dev; } ;
struct TYPE_2__ {struct mps_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int,int ,int ,int,char*,int) ;
 int VAR_3 ;

int
FUNC_2(struct mps_softc *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->mps_dev);
 VAR_4->mps_cdev = FUNC_1(&VAR_3, VAR_5, VAR_2, VAR_1, 0640,
     "mps%d", VAR_5);
 if (VAR_4->mps_cdev == ((void*)0)) {
  return (VAR_0);
 }
 VAR_4->mps_cdev->si_drv1 = VAR_4;
 return (0);
}
