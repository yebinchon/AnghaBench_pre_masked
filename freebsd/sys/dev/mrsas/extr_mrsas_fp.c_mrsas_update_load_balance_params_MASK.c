
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct mrsas_softc {int lb_pending_cmds; } ;
struct TYPE_6__ {int level; scalar_t__ ldState; } ;
struct TYPE_5__ {int loadBalanceFlag; } ;
typedef TYPE_1__* PLD_LOAD_BALANCE_INFO ;
typedef TYPE_2__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

void
FUNC_2(struct mrsas_softc *VAR_3,
    MR_DRV_RAID_MAP_ALL * VAR_4, PLD_LOAD_BALANCE_INFO VAR_5)
{
 int VAR_6;
 u_int16_t VAR_7;
 MR_LD_RAID *VAR_8;

 if (VAR_3->lb_pending_cmds > 128 || VAR_3->lb_pending_cmds < 1)
  VAR_3->lb_pending_cmds = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_1(VAR_6, VAR_4);
  if (VAR_7 >= VAR_1) {
   VAR_5[VAR_6].loadBalanceFlag = 0;
   continue;
  }
  VAR_8 = FUNC_0(VAR_7, VAR_4);
  if ((VAR_8->level != 1) ||
      (VAR_8->ldState != VAR_2)) {
   VAR_5[VAR_6].loadBalanceFlag = 0;
   continue;
  }
  VAR_5[VAR_6].loadBalanceFlag = 1;
 }
}
