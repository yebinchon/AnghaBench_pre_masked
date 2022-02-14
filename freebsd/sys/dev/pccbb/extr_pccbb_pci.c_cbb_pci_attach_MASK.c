
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {int sec; int sub; } ;
struct cbb_softc {int domain; int pribus; int subbus; int mtx; int * base_res; int * irq_res; int dev; int sc_root_token; int event_thread; TYPE_2__* exca; int intrhand; int * cbdev; TYPE_1__ bus; int (* chipinit ) (struct cbb_softc*) ;int bsh; int bst; int rl; int chipset; } ;
typedef int device_t ;
struct TYPE_5__ {int * pccarddev; int chipset; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,int *,struct cbb_softc*,int *) ;
 int FUNC_7 (struct cbb_softc*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_24 ;
 int FUNC_9 (struct cbb_softc*,int ) ;
 int VAR_25 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct cbb_softc*,int ,int ) ;
 int FUNC_13 (struct cbb_softc*,int ,int ) ;
 void* FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 struct sysctl_ctx_list* FUNC_18 (int ) ;
 struct sysctl_oid* FUNC_19 (int ) ;
 int FUNC_20 (int ,char*) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (TYPE_2__*,int ,int ) ;
 int FUNC_23 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_24 (int ,struct cbb_softc*,int *,int ,int ,char*,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,char*,int ) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 void* FUNC_30 (int ,int ,int) ;
 int FUNC_31 (int ,int ,int,int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,TYPE_1__*,int) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (struct cbb_softc*) ;

__attribute__((used)) static int
FUNC_39(device_t VAR_26)
{

 static int VAR_27 = 2;
 uint32_t VAR_28;

 struct cbb_softc *VAR_29 = (struct cbb_softc *)FUNC_17(VAR_26);
 struct sysctl_ctx_list *VAR_30;
 struct sysctl_oid *VAR_31;
 int VAR_32;
 device_t VAR_33;

 VAR_33 = FUNC_16(VAR_26);
 FUNC_26(&VAR_29->mtx, FUNC_15(VAR_26), "cbb", VAR_14);
 VAR_29->chipset = FUNC_8(FUNC_28(VAR_26), ((void*)0));
 VAR_29->dev = VAR_26;
 VAR_29->cbdev = ((void*)0);
 VAR_29->exca[0].pccarddev = ((void*)0);
 VAR_29->domain = FUNC_29(VAR_26);
 VAR_29->pribus = FUNC_32(VAR_33);




 VAR_29->bus.sec = FUNC_30(VAR_26, VAR_17, 1);
 VAR_29->bus.sub = FUNC_30(VAR_26, VAR_18, 1);

 FUNC_1(&VAR_29->rl);

 VAR_32 = VAR_1;
 VAR_29->base_res = FUNC_4(VAR_26, VAR_22, &VAR_32,
     VAR_19);
 if (!VAR_29->base_res) {
  FUNC_20(VAR_26, "Could not map register memory\n");
  FUNC_25(&VAR_29->mtx);
  return (VAR_7);
 } else {
  FUNC_0((VAR_26, "Found memory at %jx\n",
      FUNC_36(VAR_29->base_res)));
 }

 VAR_29->bst = FUNC_35(VAR_29->base_res);
 VAR_29->bsh = FUNC_34(VAR_29->base_res);
 FUNC_23(&VAR_29->exca[0], VAR_26, VAR_29->bst, VAR_29->bsh, VAR_2);
 VAR_29->exca[0].flags |= VAR_9;
 VAR_29->exca[0].chipset = VAR_8;
 VAR_29->chipinit = FUNC_7;
 VAR_29->chipinit(VAR_29);


 VAR_30 = FUNC_18(VAR_26);
 VAR_31 = FUNC_19(VAR_26);
 FUNC_2(VAR_30, FUNC_3(VAR_31), VAR_15, "domain",
     VAR_6, &VAR_29->domain, 0, "Domain number");
 FUNC_2(VAR_30, FUNC_3(VAR_31), VAR_15, "pribus",
     VAR_6, &VAR_29->pribus, 0, "Primary bus number");
 FUNC_2(VAR_30, FUNC_3(VAR_31), VAR_15, "secbus",
     VAR_6, &VAR_29->bus.sec, 0, "Secondary bus number");
 FUNC_2(VAR_30, FUNC_3(VAR_31), VAR_15, "subbus",
     VAR_6, &VAR_29->bus.sub, 0, "Subordinate bus number");
 FUNC_0((VAR_26, "Secondary bus is %d\n", VAR_29->bus.sec));
 VAR_28 = FUNC_30(VAR_26, VAR_16, 1);
 if (VAR_29->bus.sec == 0 || VAR_29->pribus != VAR_28) {
  if (VAR_27 <= VAR_29->pribus)
   VAR_27 = VAR_29->pribus + 1;
  if (VAR_28 != VAR_29->pribus) {
   FUNC_0((VAR_26, "Setting primary bus to %d\n",
       VAR_29->pribus));
   FUNC_31(VAR_26, VAR_16, VAR_29->pribus, 1);
  }
  VAR_29->bus.sec = VAR_27++;
  VAR_29->bus.sub = VAR_27++;
  FUNC_0((VAR_26, "Secondary bus set to %d subbus %d\n",
      VAR_29->bus.sec, VAR_29->bus.sub));
  FUNC_31(VAR_26, VAR_17, VAR_29->bus.sec, 1);
  FUNC_31(VAR_26, VAR_18, VAR_29->bus.sub, 1);
 }



 VAR_29->cbdev = FUNC_14(VAR_26, "cardbus", -1);
 if (VAR_29->cbdev == ((void*)0))
  FUNC_0((VAR_26, "WARNING: cannot add cardbus bus.\n"));
 else if (FUNC_21(VAR_29->cbdev) != 0)
  FUNC_0((VAR_26, "WARNING: cannot attach cardbus bus!\n"));

 VAR_29->exca[0].pccarddev = FUNC_14(VAR_26, "pccard", -1);
 if (VAR_29->exca[0].pccarddev == ((void*)0))
  FUNC_0((VAR_26, "WARNING: cannot add pccard bus.\n"));
 else if (FUNC_21(VAR_29->exca[0].pccarddev) != 0)
  FUNC_0((VAR_26, "WARNING: cannot attach pccard bus.\n"));


 VAR_32 = 0;
 VAR_29->irq_res = FUNC_4(VAR_26, VAR_21, &VAR_32,
     VAR_20 | VAR_19);
 if (VAR_29->irq_res == ((void*)0)) {
  FUNC_20(VAR_26, "Unable to map IRQ...\n");
  goto err;
 }

 if (FUNC_6(VAR_26, VAR_29->irq_res, VAR_13 | VAR_12,
     VAR_25, ((void*)0), VAR_29, &VAR_29->intrhand)) {
  FUNC_20(VAR_26, "couldn't establish interrupt\n");
  goto err;
 }


 FUNC_22(&VAR_29->exca[0], VAR_10, VAR_11);


 FUNC_10(VAR_26, VAR_0);


 FUNC_13(VAR_29, VAR_4, VAR_5);


 FUNC_12(VAR_29, VAR_3, FUNC_9(VAR_29, VAR_3));

 if (VAR_23)
  FUNC_11(VAR_26);


 if (FUNC_24(VAR_24, VAR_29, &VAR_29->event_thread, 0, 0,
     "%s event thread", FUNC_15(VAR_26))) {
  FUNC_20(VAR_26, "unable to create event thread.\n");
  FUNC_27("cbb_create_event_thread");
 }
 VAR_29->sc_root_token = FUNC_37(FUNC_15(VAR_29->dev));
 return (0);
err:
 if (VAR_29->irq_res)
  FUNC_5(VAR_26, VAR_21, 0, VAR_29->irq_res);
 if (VAR_29->base_res) {
  FUNC_5(VAR_26, VAR_22, VAR_1,
      VAR_29->base_res);
 }
 FUNC_25(&VAR_29->mtx);
 return (VAR_7);
}
