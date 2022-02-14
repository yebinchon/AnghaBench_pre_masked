
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ chip_id; int chip_rev; } ;
struct bhnd_pmu_softc {int chipc_dev; TYPE_1__ cid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int ) ;
 int FUNC_2 (struct bhnd_pmu_softc*,int,int,int) ;
 int FUNC_3 (struct bhnd_pmu_softc*) ;
 int VAR_5 ;
 int FUNC_4 (struct bhnd_pmu_softc*,char*,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct bhnd_pmu_softc*) ;
 int FUNC_7 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_8 (struct bhnd_pmu_softc*) ;
 int FUNC_9 (struct bhnd_pmu_softc*) ;

int
FUNC_10(struct bhnd_pmu_softc *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 if (FUNC_3(VAR_6) == 1) {
  FUNC_0(VAR_6, VAR_3, ~VAR_4);
 } else if (FUNC_3(VAR_6) >= 2) {
  FUNC_1(VAR_6, VAR_3, VAR_4);
 }

 if (VAR_6->cid.chip_id == VAR_1 && VAR_6->cid.chip_rev == 2) {

  FUNC_2(VAR_6, 2, 0x100, ~0);
  FUNC_2(VAR_6, 3, 0x4, ~0);
 }

 if (VAR_6->cid.chip_id == VAR_0) {

  FUNC_2(VAR_6, 2, 0x00000005, 0x00000007);
 }



 VAR_8 = FUNC_5(VAR_6->chipc_dev, VAR_2,
     &VAR_7);


 if (VAR_8) {
  if (VAR_8 != VAR_5)
   FUNC_4(VAR_6, "error fetching xtalfreq: %d\n", VAR_8);

  VAR_7 = FUNC_6(VAR_6);
 }


 FUNC_7(VAR_6, VAR_7);

 if ((VAR_8 = FUNC_8(VAR_6)))
  return (VAR_8);

 FUNC_9(VAR_6);

 return (0);
}
