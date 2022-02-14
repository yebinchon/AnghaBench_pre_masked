
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct beri_mem_softc {TYPE_1__* mem_cdev; int * res; int mem_start; int mem_size; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {struct beri_mem_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct beri_mem_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5)
{
 struct beri_mem_softc *VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 VAR_6->dev = VAR_5;

 if (FUNC_0(VAR_5, VAR_3, VAR_6->res)) {
  FUNC_2(VAR_5, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_6->mem_size = FUNC_4(VAR_6->res[0]);
 VAR_6->mem_start = FUNC_5(VAR_6->res[0]);

 VAR_6->mem_cdev = FUNC_3(&VAR_4, 0, VAR_2, VAR_1,
     0600, "beri_mem");

 if (VAR_6->mem_cdev == ((void*)0)) {
  FUNC_2(VAR_5, "Failed to create character device.\n");
  return (VAR_0);
 }

 VAR_6->mem_cdev->si_drv1 = VAR_6;

 return (0);
}
