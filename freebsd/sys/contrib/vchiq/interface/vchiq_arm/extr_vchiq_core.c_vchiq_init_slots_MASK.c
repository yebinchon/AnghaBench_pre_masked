
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int slot_sync; int slot_first; int slot_last; } ;
struct TYPE_6__ {int slot_sync; int slot_first; int slot_last; } ;
struct TYPE_8__ {int slot_zero_size; int slot_size; TYPE_2__ slave; TYPE_1__ master; int max_slots_per_side; int max_slots; int version_min; int version; int magic; } ;
typedef TYPE_3__ VCHIQ_SLOT_ZERO_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;

VCHIQ_SLOT_ZERO_T *
FUNC_2(void *VAR_9, int VAR_10)
{
 int VAR_11 = (VAR_4 - (int)VAR_9) & VAR_3;
 VCHIQ_SLOT_ZERO_T *VAR_12 =
  (VCHIQ_SLOT_ZERO_T *)((char *)VAR_9 + VAR_11);
 int VAR_13 = (VAR_10 - VAR_11)/VAR_4;
 int VAR_14 = VAR_5;


 VAR_13 -= VAR_14;

 if (VAR_13 < 4) {
  FUNC_1(VAR_8,
   "vchiq_init_slots - insufficient memory %x bytes",
   VAR_10);
  return ((void*)0);
 }

 FUNC_0(VAR_12, 0, sizeof(VCHIQ_SLOT_ZERO_T));

 VAR_12->magic = VAR_0;
 VAR_12->version = VAR_6;
 VAR_12->version_min = VAR_7;
 VAR_12->slot_zero_size = sizeof(VCHIQ_SLOT_ZERO_T);
 VAR_12->slot_size = VAR_4;
 VAR_12->max_slots = VAR_1;
 VAR_12->max_slots_per_side = VAR_2;

 VAR_12->master.slot_sync = VAR_14;
 VAR_12->master.slot_first = VAR_14 + 1;
 VAR_12->master.slot_last = VAR_14 + (VAR_13/2) - 1;
 VAR_12->slave.slot_sync = VAR_14 + (VAR_13/2);
 VAR_12->slave.slot_first = VAR_14 + (VAR_13/2) + 1;
 VAR_12->slave.slot_last = VAR_14 + VAR_13 - 1;

 return VAR_12;
}
