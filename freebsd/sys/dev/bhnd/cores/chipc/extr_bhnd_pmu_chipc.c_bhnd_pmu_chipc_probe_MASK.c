
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct chipc_softc {int core; } ;
struct chipc_caps {int pmu; } ;
struct bhnd_pmu_softc {int dummy; } ;
typedef int device_t ;
typedef int desc ;


 struct chipc_caps* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*,int,char*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct bhnd_pmu_softc *VAR_5;
 struct chipc_caps *VAR_6;
 struct chipc_softc *VAR_7;
 device_t VAR_8;
 char VAR_9[34];
 int VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;

 VAR_5 = FUNC_7(VAR_4);


 VAR_8 = FUNC_6(VAR_4);
 if (FUNC_5(VAR_8) != FUNC_4("bhnd_chipc"))
  return (VAR_3);


 VAR_6 = FUNC_0(VAR_8);
 if (!VAR_6->pmu)
  return (VAR_3);


 if ((VAR_10 = FUNC_3(VAR_4)) > 0)
  return (VAR_10);


 VAR_7 = FUNC_7(VAR_8);
 VAR_11 = FUNC_2(VAR_7->core, VAR_0);


 VAR_12 = FUNC_1(VAR_11, VAR_1);
 FUNC_9(VAR_9, sizeof(VAR_9), "Broadcom ChipCommon PMU, rev %hhu", VAR_12);
 FUNC_8(VAR_4, VAR_9);

 return (VAR_2);
}
