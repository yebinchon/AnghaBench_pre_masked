
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hwrev; } ;
struct TYPE_7__ {int obj; } ;
struct TYPE_9__ {int eio; } ;
struct bcm_platform {int cfe_console; int cc_addr; int cc_caps; int cc_caps_ext; int pmu_addr; int cpu_addr; int services; TYPE_2__ cpu_id; int cid; int pmu; TYPE_2__ pmu_id; TYPE_2__ cc_id; TYPE_1__ erom; TYPE_3__ erom_io; int erom_ops; int erom_impl; int * nvram_cls; int * nvram_io; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;
struct TYPE_10__ {int io; } ;


 int FUNC_0 (struct bcm_platform*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int *,int *,int,int *,int *) ;
 int FUNC_7 (struct bcm_platform*,int ,int ,TYPE_2__*,int*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_4__*,int **) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_14 (int *,int *,int ,int *,struct bcm_platform*) ;
 int FUNC_15 (int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*,int ,int) ;
 int VAR_12 ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(struct bcm_platform *VAR_13)
{
 bus_addr_t VAR_14, VAR_15;
 bus_space_tag_t VAR_16;
 bus_space_handle_t VAR_17;
 bool VAR_18, VAR_19;
 int VAR_20;

 VAR_14 = FUNC_8();
 VAR_15 = FUNC_9();
 VAR_16 = VAR_12;
 VAR_17 = FUNC_2(VAR_14, 0);

 VAR_20 = FUNC_13(&VAR_13->erom_io, VAR_14, VAR_15, VAR_16,
     VAR_17);
 if (VAR_20) {
  FUNC_1("failed to initialize erom I/O callbacks: %d\n", VAR_20);
  return (VAR_20);
 }

 VAR_20 = FUNC_6(&VAR_13->erom_impl, &VAR_13->erom_ops,
     &VAR_13->erom.obj, sizeof(VAR_13->erom), &VAR_13->erom_io.eio, &VAR_13->cid);
 if (VAR_20) {
  FUNC_1("error attaching erom parser: %d\n", VAR_20);
  FUNC_12(&VAR_13->erom_io.eio);
  return (VAR_20);
 }

 if (VAR_11)
  FUNC_11(&VAR_13->erom.obj);


 VAR_20 = FUNC_7(VAR_13, VAR_6, FUNC_18(VAR_6),
     &VAR_13->cc_id, &VAR_13->cc_addr);
 if (VAR_20) {
  FUNC_1("error locating chipc core: %d\n", VAR_20);
  return (VAR_20);
 }


 VAR_13->cc_caps = FUNC_3(VAR_13->cc_addr, VAR_2);
 VAR_13->cc_caps_ext = 0x0;

 if (FUNC_5(VAR_13->cc_id.hwrev))
  VAR_13->cc_caps_ext = FUNC_0(VAR_13, VAR_3);


 VAR_19 = FUNC_4(VAR_13->cc_caps, VAR_4);
 VAR_18 = FUNC_4(VAR_13->cc_caps_ext, VAR_1);

 if (VAR_19 && VAR_18) {

  VAR_20 = FUNC_7(VAR_13, VAR_9, FUNC_18(VAR_9),
      &VAR_13->pmu_id, &VAR_13->pmu_addr);
  if (VAR_20) {
   FUNC_1("error locating pmu core: %d\n", VAR_20);
   return (VAR_20);
  }
 } else if (VAR_19) {

  VAR_13->pmu_addr = VAR_13->cc_addr;
  VAR_13->pmu_id = VAR_13->cc_id;
 } else {

  VAR_13->pmu_addr = 0x0;
  FUNC_17(&VAR_13->pmu_id, 0, sizeof(VAR_13->pmu_id));
 }


 if (VAR_19) {
  VAR_20 = FUNC_14(&VAR_13->pmu, ((void*)0), VAR_13->cid,
      &VAR_10, VAR_13);
  if (VAR_20) {
   FUNC_1("bhnd_pmu_query_init() failed: %d\n", VAR_20);
   return (VAR_20);
  }
 }


 VAR_20 = FUNC_7(VAR_13, VAR_7, FUNC_18(VAR_7),
     &VAR_13->cpu_id, &VAR_13->cpu_addr);
 if (VAR_20) {
  FUNC_1("error locating CPU core: %d\n", VAR_20);
  return (VAR_20);
 }


 if ((VAR_20 = FUNC_15(&VAR_13->services))) {
  FUNC_1("error initializing service registry: %d\n", VAR_20);
  return (VAR_20);
 }

 VAR_8 = 1;
 return (0);
}
