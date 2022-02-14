
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ahci_controller {scalar_t__ ccc; } ;
struct ahci_channel {int resetting; int numslots; scalar_t__ toslots; int devices; scalar_t__ pm_level; int sim; int reset_timer; int r_mem; int dev; int path; scalar_t__ fatalerr; scalar_t__ wrongccs; scalar_t__ eslots; int numhslots; union ccb** hold; TYPE_2__* slot; union ccb* frozen; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct ahci_channel*) ;
 int FUNC_2 (struct ahci_channel*,union ccb*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_23 ;
 int FUNC_4 (struct ahci_channel*) ;
 int FUNC_5 (struct ahci_channel*,int) ;
 int FUNC_6 (struct ahci_channel*) ;
 scalar_t__ FUNC_7 (struct ahci_channel*,int,int ) ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (int *,int,int ,struct ahci_channel*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 struct ahci_controller* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(struct ahci_channel *VAR_27)
{
 struct ahci_controller *VAR_28 = FUNC_11(FUNC_10(VAR_27->dev));
 int VAR_29;

 FUNC_15(VAR_27->sim, 1);
 if (VAR_24)
  FUNC_12(VAR_27->dev, "AHCI reset...\n");

 if (VAR_27->resetting) {
  VAR_27->resetting = 0;
  FUNC_9(&VAR_27->reset_timer);
  FUNC_16(VAR_27->sim, VAR_22);
 }

 if (VAR_27->frozen) {
  union ccb *VAR_30 = VAR_27->frozen;
  VAR_27->frozen = ((void*)0);
  VAR_30->ccb_h.status = VAR_21 | VAR_20;
  if (!(VAR_30->ccb_h.status & VAR_19)) {
   FUNC_14(VAR_30->ccb_h.path, 1);
   VAR_30->ccb_h.status |= VAR_19;
  }
  FUNC_2(VAR_27, VAR_30);
 }

 FUNC_6(VAR_27);
 for (VAR_29 = 0; VAR_29 < VAR_27->numslots; VAR_29++) {

  if (VAR_27->slot[VAR_29].state < VAR_18)
   continue;

  FUNC_3(&VAR_27->slot[VAR_29], VAR_1);
 }
 for (VAR_29 = 0; VAR_29 < VAR_27->numslots; VAR_29++) {
  if (!VAR_27->hold[VAR_29])
   continue;
  FUNC_2(VAR_27, VAR_27->hold[VAR_29]);
  VAR_27->hold[VAR_29] = ((void*)0);
  VAR_27->numhslots--;
 }
 if (VAR_27->toslots != 0)
  FUNC_16(VAR_27->sim, VAR_22);
 VAR_27->eslots = 0;
 VAR_27->toslots = 0;
 VAR_27->wrongccs = 0;
 VAR_27->fatalerr = 0;

 FUNC_13(VAR_0, VAR_27->path, ((void*)0));

 FUNC_0(VAR_27->r_mem, VAR_2, 0);

 if (!FUNC_4(VAR_27)) {
  if (VAR_24)
   FUNC_12(VAR_27->dev,
       "AHCI reset: device not found\n");
  VAR_27->devices = 0;

  FUNC_0(VAR_27->r_mem, VAR_2,
      (((VAR_27->pm_level != 0) ? VAR_3 | VAR_10 : 0) |
       VAR_13 | VAR_12));
  FUNC_16(VAR_27->sim, VAR_22);
  return;
 }
 if (VAR_24)
  FUNC_12(VAR_27->dev, "AHCI reset: device found\n");

 if (FUNC_7(VAR_27, VAR_25 ? 31000 : 0, 0)) {
  if (VAR_25)
   FUNC_1(VAR_27);
  else
   VAR_27->resetting = 310;
 }
 VAR_27->devices = 1;

 FUNC_0(VAR_27->r_mem, VAR_2,
      (((VAR_27->pm_level != 0) ? VAR_3 | VAR_10 : 0) |
       VAR_16 | VAR_8 |
       VAR_7 | VAR_9 | VAR_11 |
       ((VAR_27->pm_level == 0) ? VAR_13 : 0) | VAR_12 |
       VAR_5 | VAR_17 | (VAR_28->ccc ? 0 : VAR_15) |
       VAR_6 | VAR_14 | (VAR_28->ccc ? 0 : VAR_4)));
 if (VAR_27->resetting)
  FUNC_8(&VAR_27->reset_timer, VAR_26 / 10, VAR_23, VAR_27);
 else {
  FUNC_5(VAR_27, 1);
  FUNC_16(VAR_27->sim, VAR_22);
 }
}
