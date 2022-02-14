
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_periph {int dummy; } ;


 int FUNC_0 (union ccb*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cam_periph *VAR_0, union ccb *VAR_1)
{
        FUNC_1(VAR_1->ccb_h.path);
        FUNC_0(VAR_1);
}
