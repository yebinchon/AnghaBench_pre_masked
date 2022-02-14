
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char) ;

__attribute__((used)) static void
FUNC_4(struct cdev *VAR_2, unsigned char VAR_3)
{
 struct pcfclock_data *VAR_4 = VAR_2->si_drv1;
 device_t VAR_5 = VAR_4->dev;
 device_t VAR_6 = FUNC_2(VAR_5);
 unsigned char VAR_7 = 14;
 char VAR_8;

 for (VAR_8 = 0; VAR_8 <= 7; VAR_8++) {
  FUNC_3(VAR_6, VAR_8);
  FUNC_0(VAR_8 & 1 ? VAR_0 : VAR_1);
  FUNC_1(3000);
 }
 FUNC_3(VAR_6, VAR_3);
 FUNC_0(VAR_1);
 FUNC_1(3000);
 FUNC_0(VAR_0);
}
