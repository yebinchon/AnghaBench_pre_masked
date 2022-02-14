
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_3__ cmd; } ;
struct TYPE_6__ {int target_id; scalar_t__ func_code; } ;
union ccb {TYPE_4__ ataio; TYPE_2__ ccb_h; } ;
struct ahci_channel {int oslots; scalar_t__* numrslotspd; scalar_t__* numtslotspd; scalar_t__ numrslots; scalar_t__ numtslots; int taggedtarget; scalar_t__ aslots; scalar_t__ fbs_enabled; TYPE_1__* curr; } ;
struct TYPE_5__ {int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct ahci_channel *VAR_4, union ccb *VAR_5)
{
 int VAR_6 = VAR_5->ccb_h.target_id;

 if ((VAR_5->ccb_h.func_code == VAR_3) &&
     (VAR_5->ataio.cmd.flags & VAR_1)) {

  if (((~VAR_4->oslots) & (0xffffffff >> (32 -
      VAR_4->curr[VAR_6].tags))) == 0)
   return (1);

  if (VAR_4->fbs_enabled) {

   if (VAR_4->numrslotspd[VAR_6] != 0 && VAR_4->numtslotspd[VAR_6] == 0)
    return (1);
  } else {

   if (VAR_4->numrslots != 0 && VAR_4->numtslots == 0)
    return (1);

   if (VAR_4->numtslots != 0 &&
       VAR_4->taggedtarget != VAR_5->ccb_h.target_id)
    return (1);
  }
 } else {

  if (VAR_4->fbs_enabled) {

   if (VAR_4->numrslotspd[VAR_6] != 0 && VAR_4->numtslotspd[VAR_6] != 0)
    return (1);
  } else {

   if (VAR_4->numrslots != 0 && VAR_4->numtslots != 0)
    return (1);
  }
 }
 if ((VAR_5->ccb_h.func_code == VAR_3) &&
     (VAR_5->ataio.cmd.flags & (VAR_0 | VAR_2))) {

  if (VAR_4->numrslots != 0)
   return (1);
 }

       if (VAR_4->aslots != 0)
               return (1);
 return (0);
}
