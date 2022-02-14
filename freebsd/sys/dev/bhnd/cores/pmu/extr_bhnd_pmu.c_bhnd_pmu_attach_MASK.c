
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bhnd_resource {int dummy; } ;
struct TYPE_3__ {int io_ctx; int io; } ;
struct bhnd_pmu_softc {int * chipc_dev; int * dev; int * clkctl; TYPE_1__ query; struct bhnd_resource* res; int io_ctx; int io; int cid; int board; int caps; } ;
typedef int * device_t ;
typedef scalar_t__ devclass_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bhnd_pmu_softc*) ;
 int FUNC_1 (struct bhnd_pmu_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct bhnd_pmu_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int * FUNC_4 (int *,int *,struct bhnd_resource*,int ,int ) ;
 int FUNC_5 (struct bhnd_resource*,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (struct bhnd_pmu_softc*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *,int ,int *,struct bhnd_pmu_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *,int ) ;
 int * FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 struct bhnd_pmu_softc* FUNC_19 (int *) ;
 struct sysctl_ctx_list* FUNC_20 (int *) ;
 struct sysctl_oid* FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,...) ;

int
FUNC_23(device_t VAR_14, struct bhnd_resource *VAR_15)
{
 struct bhnd_pmu_softc *VAR_16;
 struct sysctl_ctx_list *VAR_17;
 struct sysctl_oid *VAR_18;
 devclass_t VAR_19;
 device_t VAR_20, VAR_21;
 int VAR_22;

 VAR_16 = FUNC_19(VAR_14);
 VAR_16->dev = VAR_14;
 VAR_16->res = VAR_15;


 VAR_16->caps = FUNC_5(VAR_16->res, VAR_1);


 VAR_19 = FUNC_15("bhnd");
 VAR_20 = VAR_16->dev;
 while ((VAR_21 = FUNC_18(VAR_20)) != ((void*)0)) {
  if (FUNC_16(VAR_21) == VAR_19)
   break;

  VAR_20 = VAR_21;
 }

 if (VAR_20 == ((void*)0)) {
  FUNC_22(VAR_16->dev, "bhnd bus not found\n");
  return (VAR_8);
 }


 VAR_16->cid = *FUNC_7(VAR_20);
 if ((VAR_22 = FUNC_11(VAR_20, &VAR_16->board))) {
  FUNC_22(VAR_16->dev, "error fetching board info: %d\n",
      VAR_22);
  return (VAR_8);
 }


 VAR_22 = FUNC_10(&VAR_16->query, VAR_14, VAR_16->cid, &VAR_10,
     VAR_16);
 if (VAR_22)
  return (VAR_22);
 VAR_16->io = VAR_16->query.io;
 VAR_16->io_ctx = VAR_16->query.io_ctx;

 FUNC_1(VAR_16);




 VAR_16->clkctl = FUNC_4(VAR_20, VAR_14, VAR_16->res, VAR_0,
     VAR_2);
 if (VAR_16->clkctl == ((void*)0)) {
  FUNC_22(VAR_16->dev, "failed to allocate clkctl for %s\n",
      FUNC_17(VAR_20));
  VAR_22 = VAR_7;
  goto failed;
 }


 VAR_16->chipc_dev = FUNC_14(VAR_14, VAR_3);
 if (VAR_16->chipc_dev == ((void*)0)) {
  FUNC_22(VAR_16->dev, "chipcommon device not found\n");
  VAR_22 = VAR_8;
  goto failed;
 }


 if ((VAR_22 = FUNC_8(VAR_16))) {
  FUNC_22(VAR_16->dev, "PMU init failed: %d\n", VAR_22);
  goto failed;
 }


 if ((VAR_22 = FUNC_12(VAR_14, VAR_4))) {
  FUNC_22(VAR_16->dev, "failed to register PMU with bus : %d\n",
      VAR_22);
  goto failed;
 }


 VAR_17 = FUNC_20(VAR_14);
 VAR_18 = FUNC_21(VAR_14);

 FUNC_2(VAR_17, FUNC_3(VAR_18), VAR_9,
     "bus_freq", VAR_6 | VAR_5, VAR_16, 0,
     VAR_11, "IU", "Bus clock frequency");

 FUNC_2(VAR_17, FUNC_3(VAR_18), VAR_9,
     "cpu_freq", VAR_6 | VAR_5, VAR_16, 0,
     VAR_12, "IU", "CPU clock frequency");

 FUNC_2(VAR_17, FUNC_3(VAR_18), VAR_9,
     "mem_freq", VAR_6 | VAR_5, VAR_16, 0,
     VAR_13, "IU", "Memory clock frequency");

 return (0);

failed:
 FUNC_0(VAR_16);
 FUNC_9(&VAR_16->query);

 if (VAR_16->clkctl != ((void*)0))
  FUNC_6(VAR_16->clkctl);

 if (VAR_16->chipc_dev != ((void*)0)) {
  FUNC_13(VAR_16->dev, VAR_16->chipc_dev,
      VAR_3);
 }

 return (VAR_22);
}
