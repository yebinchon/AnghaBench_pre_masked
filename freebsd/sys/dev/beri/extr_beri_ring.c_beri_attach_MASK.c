
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct beri_softc {int beri_mtx; TYPE_1__ beri_rsel; TYPE_2__* cdev; int devname; int dev; int * res; int bsh; int bst; } ;
typedef int device_t ;
struct TYPE_4__ {struct beri_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct beri_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int *,int ,int ,int ,int ,char*,int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_6 (struct beri_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7)
{
 struct beri_softc *VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_0(VAR_7, VAR_6, VAR_8->res)) {
  FUNC_2(VAR_7, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_8->bst = FUNC_8(VAR_8->res[0]);
 VAR_8->bsh = FUNC_7(VAR_8->res[0]);

 if (FUNC_6(VAR_8)) {
  FUNC_2(VAR_8->dev, "Can't get FDT values\n");
  return (VAR_0);
 }

 VAR_8->cdev = FUNC_4(&VAR_5, 0, VAR_4, VAR_1,
     VAR_3, "%s", VAR_8->devname);
 if (VAR_8->cdev == ((void*)0)) {
  FUNC_2(VAR_7, "Failed to create character device.\n");
  return (VAR_0);
 }

 VAR_8->cdev->si_drv1 = VAR_8;

 FUNC_5(&VAR_8->beri_mtx, "beri_mtx", ((void*)0), VAR_2);
 FUNC_3(&VAR_8->beri_rsel.si_note, &VAR_8->beri_mtx);

 return (0);
}
