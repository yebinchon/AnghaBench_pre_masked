
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cdev {TYPE_1__* si_drv2; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, int VAR_2)
{
     isc_session_t *VAR_3 = VAR_1->si_drv2;
     int VAR_4;

     FUNC_2(2, "flag=%d", VAR_2);

     VAR_4 = 0;
     switch(VAR_2) {
     case 0:
         VAR_3->flags &= ~VAR_0;
         break;
     case 1:
         VAR_3->flags |= VAR_0;
         VAR_4 = FUNC_0(VAR_3);
         break;
     case 2:
         VAR_3->flags |= VAR_0;
         FUNC_1(VAR_3);
         break;
     }
     return VAR_4;
}
