
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct mrsas_softc {int dummy; } ;
struct TYPE_3__ {int level; } ;
typedef TYPE_1__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;


 TYPE_1__* FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct mrsas_softc*,int,int ,int *) ;
 int FUNC_3 (int ,int ) ;

u_int8_t
FUNC_4(struct mrsas_softc *VAR_0, u_int32_t VAR_1, u_int8_t VAR_2, u_int64_t VAR_3,
    MR_DRV_RAID_MAP_ALL * VAR_4)
{
 MR_LD_RAID *VAR_5 = FUNC_0(VAR_1, VAR_4);


 u_int32_t VAR_6 = 0;

 switch (VAR_5->level) {
 case 0:
 case 5:
 case 6:
  VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_4, VAR_1, VAR_2));
  break;
 case 1:

  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
  VAR_6 *= 2;
  break;
 }

 return VAR_6;
}
