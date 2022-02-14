
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chip_id; int chip_rev; } ;
struct TYPE_3__ {int board_flags; } ;
struct bhnd_pmu_softc {TYPE_2__ cid; TYPE_1__ board; int chipc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bhnd_pmu_softc*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ,int) ;

void
FUNC_4(struct bhnd_pmu_softc *VAR_8)
{
 uint32_t VAR_9;

 switch (VAR_8->cid.chip_id) {
 case 130:
  if (VAR_8->cid.chip_rev <= 2)
   break;

  VAR_9 = FUNC_0(VAR_8->chipc_dev);
  if (FUNC_1(VAR_9, VAR_1)) {
   FUNC_3(VAR_8, VAR_5,
       0xf);
   FUNC_3(VAR_8, VAR_4,
       0xf);
  }

  FUNC_3(VAR_8, VAR_3, 0xb);
  FUNC_3(VAR_8, VAR_2, 0xb);

  FUNC_3(VAR_8, VAR_6, 0x1);
  if (VAR_8->board.board_flags & VAR_0) {
   FUNC_3(VAR_8, VAR_7,
       0x1);
  }

  break;
 case 128:

  FUNC_3(VAR_8, VAR_5, 0xe);

  FUNC_3(VAR_8, VAR_4, 0xe);

  FUNC_3(VAR_8, VAR_6, 0xe);
  if (VAR_8->cid.chip_rev == 0)
   FUNC_2(VAR_8, 2, 0x400000, 0x400000);
  break;

 case 129:

  FUNC_3(VAR_8, VAR_3, 0);
  break;
 default:
  break;
 }
}
