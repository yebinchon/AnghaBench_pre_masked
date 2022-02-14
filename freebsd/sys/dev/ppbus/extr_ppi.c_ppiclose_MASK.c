
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ppi_data {int ppi_lock; int ppi_flags; int ppi_device; } ;
struct cdev {struct ppi_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct ppi_data *VAR_5 = VAR_1->si_drv1;
 device_t VAR_6 = VAR_5->ppi_device;
 device_t VAR_7 = FUNC_0(VAR_6);

 FUNC_7(&VAR_5->ppi_lock);
 FUNC_3(VAR_7);
 FUNC_5(VAR_7, VAR_6);
 FUNC_6(VAR_7);

 VAR_5->ppi_flags &= ~VAR_0;
 FUNC_8(&VAR_5->ppi_lock);

 return (0);
}
