
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout_t ;
struct siis_slot {scalar_t__ state; TYPE_2__* ccb; int timeout; } ;
struct siis_channel {int toslots; struct siis_slot* slot; int mtx; } ;
typedef int device_t ;
struct TYPE_3__ {int timeout; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int ,int *,struct siis_slot*,int ) ;
 struct siis_channel* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(device_t VAR_5)
{
 struct siis_channel *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 FUNC_2(&VAR_6->mtx, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct siis_slot *VAR_8 = &VAR_6->slot[VAR_7];


  if (VAR_8->state < VAR_3)
   continue;
  if ((VAR_6->toslots & (1 << VAR_7)) == 0)
   continue;
  FUNC_0(&VAR_8->timeout,
      VAR_1 * VAR_8->ccb->ccb_h.timeout, 0,
      (timeout_t*)VAR_4, VAR_8, 0);
 }
}
