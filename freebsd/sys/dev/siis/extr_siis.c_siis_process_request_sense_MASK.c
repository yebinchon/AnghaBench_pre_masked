
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recovery_slot; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct siis_channel {int numhslots; TYPE_3__** hold; scalar_t__ recoverycmd; } ;
typedef int device_t ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct siis_channel* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_4, union ccb *VAR_5)
{
 struct siis_channel *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 VAR_6->recoverycmd = 0;

 VAR_7 = VAR_5->ccb_h.recovery_slot;
 if ((VAR_5->ccb_h.status & VAR_3) == VAR_2) {
  VAR_6->hold[VAR_7]->ccb_h.status |= VAR_1;
 } else {
  VAR_6->hold[VAR_7]->ccb_h.status &= ~VAR_3;
  VAR_6->hold[VAR_7]->ccb_h.status |= VAR_0;
 }
 FUNC_1(VAR_6->hold[VAR_7]);
 VAR_6->hold[VAR_7] = ((void*)0);
 VAR_6->numhslots--;
 FUNC_2(VAR_5);
}
