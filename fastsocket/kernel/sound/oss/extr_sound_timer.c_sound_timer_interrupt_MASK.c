
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int (* tmr_restart ) (int ) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned long FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_5(void)
{
 unsigned long VAR_8;

 if (!VAR_3)
  return;

 VAR_5->tmr_restart(VAR_5->dev);

 if (!VAR_7)
  return;

 FUNC_1(&VAR_1,VAR_8);
 VAR_6++;
 VAR_0 = VAR_4 + FUNC_4(VAR_6);

 if (VAR_0 >= VAR_2)
 {
  VAR_2 = (unsigned long) -1;
  FUNC_0(0);
 }
 FUNC_2(&VAR_1,VAR_8);
}
