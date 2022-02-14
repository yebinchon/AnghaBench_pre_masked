
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int8_t ;
typedef int u_int16_t ;
struct mrsas_softc {int map_id; int ** ld_drv_map; } ;
struct IO_REQUEST_INFO {int pdInterface; } ;
struct TYPE_4__ {int * scsi_pending_cmds; } ;
typedef TYPE_1__* PLD_LOAD_BALANCE_INFO ;
typedef int MR_DRV_RAID_MAP_ALL ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (struct mrsas_softc*,TYPE_1__*,struct IO_REQUEST_INFO*) ;

u_int16_t
FUNC_4(struct mrsas_softc *VAR_0,
    PLD_LOAD_BALANCE_INFO VAR_1, struct IO_REQUEST_INFO *VAR_2)
{
 u_int8_t VAR_3;
 u_int16_t VAR_4;
 MR_DRV_RAID_MAP_ALL *VAR_5;

 VAR_5 = VAR_0->ld_drv_map[(VAR_0->map_id & 1)];


 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_3, VAR_5);
 VAR_2->pdInterface = FUNC_1(VAR_3, VAR_5);
 FUNC_2(&VAR_1->scsi_pending_cmds[VAR_3]);

 return VAR_4;
}
