
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmx_softc {TYPE_1__* cdev; scalar_t__ dying; } ;
typedef int device_t ;
struct TYPE_2__ {struct cmx_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmx_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*,int ) ;

int
FUNC_4(device_t VAR_5)
{
 struct cmx_softc *VAR_6 = FUNC_0(VAR_5);

 if (!VAR_6 || VAR_6->dying)
  return VAR_1;

 VAR_6->cdev = FUNC_3(&VAR_4, 0, VAR_3, VAR_2, 0600,
                     "cmx%d", FUNC_1(VAR_5));
 if (!VAR_6->cdev) {
  FUNC_2(VAR_5, "failed to create character device\n");
  return VAR_0;
 }
 VAR_6->cdev->si_drv1 = VAR_6;

 return 0;
}
