
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int IRVolumeMappingFlags; int Flags; } ;
struct mpr_softc {int max_devices; int max_volumes; TYPE_1__ ioc_pg8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct mpr_softc *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 u16 VAR_6;
 u16 VAR_7 = FUNC_0(VAR_3->ioc_pg8.Flags);

 VAR_6 = FUNC_0(VAR_3->ioc_pg8.IRVolumeMappingFlags) &
     VAR_2;
 if (VAR_6 == VAR_1) {
  *VAR_4 = 0;
  if (VAR_7 & VAR_0)
   *VAR_4 = 1;
 } else
  *VAR_4 = VAR_3->max_devices - VAR_3->max_volumes;
 *VAR_5 = *VAR_4 + VAR_3->max_volumes - 1;
}
