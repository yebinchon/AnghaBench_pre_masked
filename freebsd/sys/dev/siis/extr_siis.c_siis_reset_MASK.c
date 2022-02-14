
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct siis_channel {int numrslots; scalar_t__ toslots; scalar_t__ pm_level; int devices; int sim; int path; int r_mem; scalar_t__ pm_present; TYPE_2__* user; scalar_t__ fatalerr; scalar_t__ recovery; scalar_t__ eslots; int numhslots; union ccb** hold; TYPE_3__* slot; union ccb* frozen; int recoverycmd; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int revision; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
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
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (struct siis_channel*) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (union ccb*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_26)
{
 struct siis_channel *VAR_27 = FUNC_2(VAR_26);
 int VAR_28, VAR_29 = 0, VAR_30;
 uint32_t VAR_31;

 FUNC_11(VAR_27->sim, 1);
 if (VAR_25)
  FUNC_3(VAR_26, "SIIS reset...\n");
 if (!VAR_27->recoverycmd && !VAR_27->recovery)
  FUNC_11(VAR_27->sim, VAR_27->numrslots);

 if (VAR_27->frozen) {
  union ccb *VAR_32 = VAR_27->frozen;
  VAR_27->frozen = ((void*)0);
  VAR_32->ccb_h.status &= ~VAR_10;
  VAR_32->ccb_h.status |= VAR_9 | VAR_8;
  if (!(VAR_32->ccb_h.status & VAR_7)) {
   FUNC_10(VAR_32->ccb_h.path, 1);
   VAR_32->ccb_h.status |= VAR_7;
  }
  FUNC_9(VAR_32);
 }

 for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {

  if (VAR_27->slot[VAR_28].state < VAR_23)
   continue;

  FUNC_5(&VAR_27->slot[VAR_28], VAR_11);
 }

 for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
  if (!VAR_27->hold[VAR_28])
   continue;
  FUNC_9(VAR_27->hold[VAR_28]);
  VAR_27->hold[VAR_28] = ((void*)0);
  VAR_27->numhslots--;
 }
 if (VAR_27->toslots != 0)
  FUNC_12(VAR_27->sim, VAR_24);
 VAR_27->eslots = 0;
 VAR_27->recovery = 0;
 VAR_27->toslots = 0;
 VAR_27->fatalerr = 0;

 FUNC_0(VAR_27->r_mem, VAR_18, 0x0000FFFF);

 VAR_30 = VAR_27->user[VAR_27->pm_present ? 15 : 0].revision;
 if (VAR_30 == 1)
  VAR_31 = VAR_4;
 else if (VAR_30 == 2)
  VAR_31 = VAR_5;
 else if (VAR_30 == 3)
  VAR_31 = VAR_6;
 else
  VAR_31 = 0;
 FUNC_0(VAR_27->r_mem, VAR_22,
     VAR_1 | VAR_31 | ((VAR_27->pm_level > 0) ? 0 :
     (VAR_2 | VAR_3)));
retry:
 FUNC_4(VAR_26);

 if (!FUNC_6(VAR_27)) {
  VAR_27->devices = 0;

  FUNC_0(VAR_27->r_mem, VAR_19, VAR_21);
  if (VAR_25)
   FUNC_3(VAR_26,
       "SIIS reset done: phy reset found no device\n");

  FUNC_8(VAR_0, VAR_27->path, ((void*)0));
  FUNC_12(VAR_27->sim, VAR_24);
  return;
 }

 if (FUNC_7(VAR_26, 1000)) {
  FUNC_3(VAR_26, "port ready timeout\n");
  if (!VAR_29) {
   FUNC_3(VAR_26, "trying full port reset ...\n");

   FUNC_0(VAR_27->r_mem, VAR_14, VAR_17);
   FUNC_1(10000);

   FUNC_0(VAR_27->r_mem, VAR_13, VAR_17);
   FUNC_0(VAR_27->r_mem, VAR_13, VAR_15);
   if (VAR_27->pm_present)
    FUNC_0(VAR_27->r_mem, VAR_14, VAR_16);
   else
    FUNC_0(VAR_27->r_mem, VAR_13, VAR_16);
   FUNC_7(VAR_26, 5000);
   VAR_29 = 1;
   goto retry;
  }
 }
 VAR_27->devices = 1;

 FUNC_0(VAR_27->r_mem, VAR_20, 0xFFFFFFFF);
 FUNC_0(VAR_27->r_mem, VAR_19, VAR_21);
 if (VAR_25)
  FUNC_3(VAR_26, "SIIS reset done: devices=%08x\n", VAR_27->devices);

 FUNC_8(VAR_0, VAR_27->path, ((void*)0));
 FUNC_12(VAR_27->sim, VAR_24);
}
