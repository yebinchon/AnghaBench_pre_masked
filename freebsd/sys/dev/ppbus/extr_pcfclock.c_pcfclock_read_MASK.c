
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdev*,char*) ;
 int FUNC_3 (struct cdev*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct pcfclock_data *VAR_5 = VAR_2->si_drv1;
 device_t VAR_6;
 char VAR_7[18];
 int VAR_8 = 0;

 if (VAR_3->uio_resid < 18)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_5->dev);
 FUNC_4(VAR_6);
 VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_1);
 FUNC_5(VAR_6);

 if (VAR_8) {
  FUNC_1(VAR_5->dev, "no PCF found\n");
 } else {
  FUNC_2(VAR_2, VAR_7);

  FUNC_6(VAR_7, 18, VAR_3);
 }

 return (VAR_8);
}
