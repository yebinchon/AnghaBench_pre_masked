
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int* data_ptr; } ;
struct TYPE_8__ {int status; scalar_t__ target_id; } ;
union ccb {TYPE_4__ ataio; TYPE_3__ ccb_h; } ;
typedef int uint8_t ;
struct siis_channel {int numhslots; TYPE_5__** hold; scalar_t__ recoverycmd; } ;
struct ata_res {int status; int error; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int sector_count; int sector_count_exp; } ;
typedef int device_t ;
struct TYPE_7__ {scalar_t__ target_id; int status; } ;
struct TYPE_6__ {struct ata_res res; } ;
struct TYPE_10__ {TYPE_2__ ccb_h; TYPE_1__ ataio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct siis_channel* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_5, union ccb *VAR_6)
{
 struct siis_channel *VAR_7 = FUNC_0(VAR_5);
 uint8_t *VAR_8;
 struct ata_res *VAR_9;
 int VAR_10;

 VAR_7->recoverycmd = 0;
 VAR_8 = VAR_6->ataio.data_ptr;
 if ((VAR_6->ccb_h.status & VAR_2) == VAR_1 &&
     (VAR_8[0] & 0x80) == 0) {
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (!VAR_7->hold[VAR_10])
    continue;
   if (VAR_7->hold[VAR_10]->ccb_h.target_id != VAR_6->ccb_h.target_id)
    continue;
   if ((VAR_8[0] & 0x1F) == VAR_10) {
    VAR_9 = &VAR_7->hold[VAR_10]->ataio.res;
    VAR_9->status = VAR_8[2];
    VAR_9->error = VAR_8[3];
    VAR_9->lba_low = VAR_8[4];
    VAR_9->lba_mid = VAR_8[5];
    VAR_9->lba_high = VAR_8[6];
    VAR_9->device = VAR_8[7];
    VAR_9->lba_low_exp = VAR_8[8];
    VAR_9->lba_mid_exp = VAR_8[9];
    VAR_9->lba_high_exp = VAR_8[10];
    VAR_9->sector_count = VAR_8[12];
    VAR_9->sector_count_exp = VAR_8[13];
   } else {
    VAR_7->hold[VAR_10]->ccb_h.status &= ~VAR_2;
    VAR_7->hold[VAR_10]->ccb_h.status |= VAR_0;
   }
   FUNC_3(VAR_7->hold[VAR_10]);
   VAR_7->hold[VAR_10] = ((void*)0);
   VAR_7->numhslots--;
  }
 } else {
  if ((VAR_6->ccb_h.status & VAR_2) != VAR_1)
   FUNC_1(VAR_5, "Error while READ LOG EXT\n");
  else if ((VAR_8[0] & 0x80) == 0) {
   FUNC_1(VAR_5, "Non-queued command error in READ LOG EXT\n");
  }
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (!VAR_7->hold[VAR_10])
    continue;
   if (VAR_7->hold[VAR_10]->ccb_h.target_id != VAR_6->ccb_h.target_id)
    continue;
   FUNC_3(VAR_7->hold[VAR_10]);
   VAR_7->hold[VAR_10] = ((void*)0);
   VAR_7->numhslots--;
  }
 }
 FUNC_2(VAR_6->ataio.data_ptr, VAR_3);
 FUNC_4(VAR_6);
}
