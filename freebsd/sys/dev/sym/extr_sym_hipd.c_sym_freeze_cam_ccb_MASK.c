
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(union ccb *VAR_2)
{
 if (!(VAR_2->ccb_h.flags & VAR_0)) {
  if (!(VAR_2->ccb_h.status & VAR_1)) {
   VAR_2->ccb_h.status |= VAR_1;
   FUNC_0(VAR_2->ccb_h.path, 1);
  }
 }
}
