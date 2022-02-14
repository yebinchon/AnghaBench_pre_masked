
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int FUNC_0(union ccb *VAR_1)
{
 return VAR_1->ccb_h.status & VAR_0;
}
