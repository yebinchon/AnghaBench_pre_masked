
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int board_flags; } ;
struct TYPE_3__ {scalar_t__ chip_id; int chip_rev; } ;
struct bhnd_pmu_softc {TYPE_2__ board; TYPE_1__ cid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct bhnd_pmu_softc *VAR_2)
{
 if (VAR_2->cid.chip_id == VAR_1 && VAR_2->cid.chip_rev <= 1)
  return (0);

 return (FUNC_0(VAR_2->board.board_flags, VAR_0));
}
