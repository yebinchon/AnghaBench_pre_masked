
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int (* tmr_start ) (int ,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_1(void)
{
 unsigned long VAR_4;






 if(!VAR_2)
  return;

 VAR_4 = (60 * 1000000) / (VAR_0 * VAR_1);




 if (VAR_4 < 2000)
  VAR_4 = 2000;

 VAR_3 = VAR_2->tmr_start(VAR_2->dev, VAR_4);
}
