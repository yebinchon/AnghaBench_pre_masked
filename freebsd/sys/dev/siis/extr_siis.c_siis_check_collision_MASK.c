
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
struct TYPE_6__ {scalar_t__ func_code; size_t target_id; } ;
union ccb {TYPE_4__ ataio; TYPE_2__ ccb_h; } ;
struct siis_channel {int oslots; scalar_t__ numrslots; scalar_t__ aslots; TYPE_1__* curr; int mtx; } ;
typedef int device_t ;
struct TYPE_5__ {int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct siis_channel* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5, union ccb *VAR_6)
{
 struct siis_channel *VAR_7 = FUNC_0(VAR_5);

 FUNC_1(&VAR_7->mtx, VAR_3);
 if ((VAR_6->ccb_h.func_code == VAR_4) &&
     (VAR_6->ataio.cmd.flags & VAR_1)) {

  if (((~VAR_7->oslots) & (0x7fffffff >> (31 -
      VAR_7->curr[VAR_6->ccb_h.target_id].tags))) == 0)
   return (1);
 }
 if ((VAR_6->ccb_h.func_code == VAR_4) &&
     (VAR_6->ataio.cmd.flags & (VAR_0 | VAR_2))) {

  if (VAR_7->numrslots != 0)
   return (1);
 }

       if (VAR_7->aslots != 0)
               return (1);
 return (0);
}
