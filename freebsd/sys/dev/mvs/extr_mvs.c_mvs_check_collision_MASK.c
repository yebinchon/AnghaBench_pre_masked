
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {scalar_t__ func_code; scalar_t__ target_id; } ;
union ccb {TYPE_3__ ataio; TYPE_1__ ccb_h; } ;
struct mvs_channel {scalar_t__ numdslots; scalar_t__ numpslots; scalar_t__ numtslots; scalar_t__ taggedtarget; scalar_t__ numrslots; scalar_t__ aslots; int fbs_enabled; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mvs_channel* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_5, union ccb *VAR_6)
{
 struct mvs_channel *VAR_7 = FUNC_0(VAR_5);

 if (VAR_6->ccb_h.func_code == VAR_4) {

  if (VAR_6->ataio.cmd.flags & VAR_2) {

   if (VAR_7->numdslots != 0)
    return (1);

   if (VAR_7->numpslots != 0)
    return (1);

   if (!VAR_7->fbs_enabled) {

    if (VAR_7->numtslots != 0 &&
        VAR_7->taggedtarget != VAR_6->ccb_h.target_id)
     return (1);
   }

  } else if (VAR_6->ataio.cmd.flags & VAR_1) {

   if (VAR_7->numtslots != 0)
    return (1);

   if (VAR_7->numpslots != 0)
    return (1);

  } else {

   if (VAR_7->numrslots != 0)
    return (1);
  }
  if (VAR_6->ataio.cmd.flags & (VAR_0 | VAR_3)) {

   if (VAR_7->numrslots != 0)
    return (1);
  }
 } else {

  if (VAR_7->numrslots != 0)
   return (1);
 }

 if (VAR_7->aslots != 0)
  return (1);
 return (0);
}
