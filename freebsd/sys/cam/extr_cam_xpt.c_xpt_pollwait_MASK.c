
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; TYPE_2__* path; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {int sim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(union ccb *VAR_3, uint32_t VAR_4)
{

 while (--VAR_4 > 0) {
  FUNC_1(VAR_3->ccb_h.path->bus->sim);
  if ((VAR_3->ccb_h.status & VAR_2)
      != VAR_1)
   break;
  FUNC_0(100);
 }

 if (VAR_4 == 0) {






  VAR_3->ccb_h.status = VAR_0;
 }
}
