
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pcfclock_data {int dev; } ;
struct cdev {struct pcfclock_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct pcfclock_data *VAR_8 = VAR_4->si_drv1;
 device_t VAR_9;
 device_t VAR_10;
 int VAR_11;

 if (!VAR_8)
  return (VAR_0);
 VAR_9 = VAR_8->dev;
 VAR_10 = FUNC_0(VAR_9);

 FUNC_1(VAR_10);
 VAR_11 = FUNC_2(VAR_10, VAR_9,
     (VAR_5 & VAR_1) ? VAR_2 : VAR_3);
 FUNC_3(VAR_10);
 return (VAR_11);
}
