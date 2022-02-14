
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ phys_id; } ;
struct bnxt_cp_ring {scalar_t__ cons; TYPE_1__ ring; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void inline
FUNC_2(struct bnxt_cp_ring *VAR_2)
{
 if (VAR_2->ring.phys_id != (uint16_t)VAR_0) {

  if (VAR_2->cons == VAR_1)
   FUNC_0(&VAR_2->ring);
  else
   FUNC_1(&VAR_2->ring, VAR_2->cons);
 }
}
