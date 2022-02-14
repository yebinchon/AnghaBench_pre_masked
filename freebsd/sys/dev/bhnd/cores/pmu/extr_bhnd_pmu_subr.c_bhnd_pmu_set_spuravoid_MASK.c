
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;
typedef int bhnd_pmu_spuravoid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ,int ) ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ) ;

int
FUNC_4(struct bhnd_pmu_softc *VAR_4, bhnd_pmu_spuravoid VAR_5)
{
 int VAR_6;


 if (VAR_4->cid.chip_id == VAR_1) {
  FUNC_0(VAR_4, VAR_2,
      ~VAR_3);


  FUNC_2(VAR_4, 0, VAR_0);
 }


 VAR_6 = FUNC_3(VAR_4, VAR_5);


 if (VAR_4->cid.chip_id == VAR_1) {
  FUNC_1(VAR_4, VAR_2,
      VAR_3);
 }

 return (VAR_6);
}
