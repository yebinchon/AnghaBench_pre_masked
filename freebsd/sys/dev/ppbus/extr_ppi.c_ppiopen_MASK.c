
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ppi_data {int ppi_flags; int ppi_lock; int ppi_device; } ;
struct cdev {struct ppi_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct ppi_data *VAR_9 = VAR_5->si_drv1;
 device_t VAR_10 = VAR_9->ppi_device;
 device_t VAR_11 = FUNC_0(VAR_10);
 int VAR_12;

 FUNC_4(&VAR_9->ppi_lock);
 if (!(VAR_9->ppi_flags & VAR_0)) {
  FUNC_1(VAR_11);
  VAR_12 = FUNC_2(VAR_11, VAR_10,
      (VAR_6 & VAR_1) ? VAR_2 : VAR_4 | VAR_3);
  FUNC_3(VAR_11);
  if (VAR_12) {
   FUNC_5(&VAR_9->ppi_lock);
   return (VAR_12);
  }

  VAR_9->ppi_flags |= VAR_0;
 }
 FUNC_5(&VAR_9->ppi_lock);

 return (0);
}
