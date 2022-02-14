
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recovery_slot; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mvs_channel {int sim; int numhslots; TYPE_3__** hold; scalar_t__ recoverycmd; } ;
typedef int device_t ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mvs_channel* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5, union ccb *VAR_6)
{
 struct mvs_channel *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 VAR_7->recoverycmd = 0;

 VAR_8 = VAR_6->ccb_h.recovery_slot;
 if ((VAR_6->ccb_h.status & VAR_3) == VAR_2) {
  VAR_7->hold[VAR_8]->ccb_h.status |= VAR_1;
 } else {
  VAR_7->hold[VAR_8]->ccb_h.status &= ~VAR_3;
  VAR_7->hold[VAR_8]->ccb_h.status |= VAR_0;
 }
 FUNC_1(VAR_7->hold[VAR_8]);
 VAR_7->hold[VAR_8] = ((void*)0);
 VAR_7->numhslots--;
 FUNC_2(VAR_6);
 FUNC_3(VAR_7->sim, VAR_4);
}
