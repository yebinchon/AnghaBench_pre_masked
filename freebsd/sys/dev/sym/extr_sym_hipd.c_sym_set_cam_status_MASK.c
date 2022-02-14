
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int cam_status ;


 int VAR_0 ;

__attribute__((used)) static __inline void FUNC_0(union ccb *VAR_1, cam_status VAR_2)
{
 VAR_1->ccb_h.status &= ~VAR_0;
 VAR_1->ccb_h.status |= VAR_2;
}
