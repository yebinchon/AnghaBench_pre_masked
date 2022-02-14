
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int poll; int call_lock; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_3, int VAR_4, caddr_t VAR_5)
{
 ig4iic_softc_t *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = 0;
 int VAR_8;

 switch (VAR_4) {
 case 128:

  VAR_8 = *(int *)VAR_5;
  if ((VAR_8 & VAR_2) == 0) {
   if (FUNC_2(&VAR_6->call_lock) == 0)
    VAR_7 = VAR_1;
   else
    VAR_6->poll = 1;
  } else
   FUNC_4(&VAR_6->call_lock);
  break;

 case 129:
  VAR_6->poll = 0;
  FUNC_3(&VAR_6->call_lock);
  break;

 default:
  VAR_7 = FUNC_1(VAR_0);
 }

 return (VAR_7);
}
