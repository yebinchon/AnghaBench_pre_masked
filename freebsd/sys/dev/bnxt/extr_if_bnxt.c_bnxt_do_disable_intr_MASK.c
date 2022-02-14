
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ phys_id; } ;
struct bnxt_cp_ring {TYPE_1__ ring; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void inline
FUNC_1(struct bnxt_cp_ring *VAR_1)
{
 if (VAR_1->ring.phys_id != (uint16_t)VAR_0)
  FUNC_0(&VAR_1->ring);
}
