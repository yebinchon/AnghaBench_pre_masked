
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recovery_slot; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ahci_channel {int sim; int numhslots; TYPE_3__** hold; scalar_t__ recoverycmd; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahci_channel*,TYPE_3__*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ahci_channel *VAR_5, union ccb *VAR_6)
{
 int VAR_7;

 VAR_5->recoverycmd = 0;

 VAR_7 = VAR_6->ccb_h.recovery_slot;
 if ((VAR_6->ccb_h.status & VAR_3) == VAR_2) {
  VAR_5->hold[VAR_7]->ccb_h.status |= VAR_1;
 } else {
  VAR_5->hold[VAR_7]->ccb_h.status &= ~VAR_3;
  VAR_5->hold[VAR_7]->ccb_h.status |= VAR_0;
 }
 FUNC_0(VAR_5, VAR_5->hold[VAR_7]);
 VAR_5->hold[VAR_7] = ((void*)0);
 VAR_5->numhslots--;
 FUNC_1(VAR_6);
 FUNC_2(VAR_5->sim, VAR_4);
}
