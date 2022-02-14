
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct cdev*,char*,int) ;
 int FUNC_4 (struct cdev*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_3, char *VAR_4, int VAR_5)
{
 struct pcfclock_data *VAR_6 = VAR_3->si_drv1;
 device_t VAR_7 = VAR_6->dev;
 device_t VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = 0;

 FUNC_5(VAR_8, VAR_2);

 while (--VAR_5 > 0) {
  FUNC_4(VAR_3, VAR_1);
  if (FUNC_3(VAR_3, VAR_4, 68))
   continue;

  if (!FUNC_1(VAR_4))
   continue;

  if (!FUNC_0(VAR_4))
   continue;

  break;
 }

 if (!VAR_5)
  VAR_9 = VAR_0;

 return (VAR_9);
}
