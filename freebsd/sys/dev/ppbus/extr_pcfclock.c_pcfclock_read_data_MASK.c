
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;
typedef int ssize_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_3, char *VAR_4, ssize_t VAR_5)
{
 struct pcfclock_data *VAR_6 = VAR_3->si_drv1;
 device_t VAR_7 = VAR_6->dev;
 device_t VAR_8 = FUNC_2(VAR_7);
 int VAR_9;
 char VAR_10;
 int VAR_11;


 FUNC_1(VAR_4, ((VAR_5 + 3) >> 2) + 1);

 VAR_10 = 100;
 for (VAR_9 = 0; VAR_9 <= VAR_5; VAR_9++) {

  while (!VAR_1 && --VAR_10 > 0)
   FUNC_0(100);


  if (!VAR_10)
   return (VAR_2);

  VAR_10 = 100;


  FUNC_0(500);


  VAR_11 = VAR_9 >> 2;
  VAR_4[VAR_11] <<= 1;

  if (VAR_0)
   VAR_4[VAR_11] |= 1;
 }

 return (0);
}
