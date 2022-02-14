
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvs_channel {int resetting; scalar_t__ toslots; int devices; int sim; int reset_timer; int r_mem; int path; scalar_t__ fake_busy; scalar_t__ fatalerr; scalar_t__ eslots; int numhslots; int ** hold; TYPE_1__* slot; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *) ;
 struct mvs_channel* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_18 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(device_t VAR_19)
{
 struct mvs_channel *VAR_20 = FUNC_4(VAR_19);
 int VAR_21;

 FUNC_14(VAR_20->sim, 1);
 if (VAR_15)
  FUNC_5(VAR_19, "MVS reset...\n");

 if (VAR_20->resetting) {
  VAR_20->resetting = 0;
  FUNC_3(&VAR_20->reset_timer);
  FUNC_15(VAR_20->sim, VAR_14);
 }

 FUNC_8(VAR_19);

 FUNC_10(VAR_19, VAR_9);
 FUNC_0(VAR_20->r_mem, VAR_3, 0);
 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {

  if (VAR_20->slot[VAR_21].state < VAR_12)
   continue;

  FUNC_6(&VAR_20->slot[VAR_21], VAR_10);
 }
 for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++) {
  if (!VAR_20->hold[VAR_21])
   continue;
  FUNC_13(VAR_20->hold[VAR_21]);
  VAR_20->hold[VAR_21] = ((void*)0);
  VAR_20->numhslots--;
 }
 if (VAR_20->toslots != 0)
  FUNC_15(VAR_20->sim, VAR_14);
 VAR_20->eslots = 0;
 VAR_20->toslots = 0;
 VAR_20->fatalerr = 0;
 VAR_20->fake_busy = 0;

 FUNC_12(VAR_0, VAR_20->path, ((void*)0));
 FUNC_0(VAR_20->r_mem, VAR_7, 0);
 FUNC_0(VAR_20->r_mem, VAR_4, VAR_5);
 FUNC_1(25);
 FUNC_0(VAR_20->r_mem, VAR_4, 0);
 FUNC_7(VAR_19);

 if (!FUNC_9(VAR_19)) {
  if (VAR_15)
   FUNC_5(VAR_19, "MVS reset: device not found\n");
  VAR_20->devices = 0;
  FUNC_0(VAR_20->r_mem, VAR_13, 0xffffffff);
  FUNC_0(VAR_20->r_mem, VAR_6, 0);
  FUNC_0(VAR_20->r_mem, VAR_7, ~VAR_8);
  FUNC_15(VAR_20->sim, VAR_14);
  return;
 }
 if (VAR_15)
  FUNC_5(VAR_19, "MVS reset: device found\n");

 if ((VAR_21 = FUNC_11(VAR_19, 0, VAR_1 | VAR_2,
     VAR_16 ? 31000 : 0)) < 0) {
  if (VAR_16) {
   FUNC_5(VAR_19,
       "MVS reset: device not ready after 31000ms\n");
  } else
   VAR_20->resetting = 310;
 } else if (VAR_15)
  FUNC_5(VAR_19, "MVS reset: device ready after %dms\n", VAR_21);
 VAR_20->devices = 1;
 FUNC_0(VAR_20->r_mem, VAR_13, 0xffffffff);
 FUNC_0(VAR_20->r_mem, VAR_6, 0);
 FUNC_0(VAR_20->r_mem, VAR_7, ~VAR_8);
 if (VAR_20->resetting)
  FUNC_2(&VAR_20->reset_timer, VAR_17 / 10, VAR_18, VAR_19);
 else
  FUNC_15(VAR_20->sim, VAR_14);
}
