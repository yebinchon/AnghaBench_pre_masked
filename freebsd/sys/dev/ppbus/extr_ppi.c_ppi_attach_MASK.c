
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppi_data {int ppi_device; TYPE_1__* ppi_cdev; int ppi_lock; scalar_t__ intr_resource; int intr_cookie; } ;
typedef int device_t ;
struct TYPE_2__ {struct ppi_data* si_drv1; } ;


 struct ppi_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int,int *,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (int *,int ,int ,int ,int,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 struct ppi_data *VAR_10 = FUNC_0(VAR_9);
 FUNC_7(&VAR_10->ppi_lock, "ppi");
 VAR_10->ppi_cdev = FUNC_6(&VAR_7, FUNC_4(VAR_9),
   VAR_6, VAR_1,
   0600, "ppi%d", FUNC_4(VAR_9));
 if (VAR_10->ppi_cdev == ((void*)0)) {
  FUNC_5(VAR_9, "Failed to create character device\n");
  return (VAR_0);
 }
 VAR_10->ppi_cdev->si_drv1 = VAR_10;
 VAR_10->ppi_device = VAR_9;

 return (0);
}
