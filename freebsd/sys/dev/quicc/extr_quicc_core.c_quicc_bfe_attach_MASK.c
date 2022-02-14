
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource_list_entry {int * res; } ;
struct TYPE_3__ {int rm_start; int rm_end; char* rm_descr; int rm_type; } ;
struct quicc_softc {int sc_fastintr; int sc_polled; int * sc_rres; int * sc_ires; int sc_rtype; TYPE_1__ sc_rman; struct quicc_device* sc_device; scalar_t__ sc_irid; int sc_icookie; scalar_t__ sc_rrid; } ;
struct quicc_device {int qd_dev; int qd_rlist; TYPE_1__* qd_rman; int qd_devtype; } ;
typedef int rman_res_t ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 int FUNC_2 (int ,int *,int,int *,int *,struct quicc_softc*,int *) ;
 int FUNC_3 (int ,int *,int) ;
 struct quicc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,void*) ;
 struct quicc_device* FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*,...) ;
 int * VAR_15 ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int ,int,int,int) ;
 struct resource_list_entry* FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int,int) ;

int
FUNC_19(device_t VAR_16)
{
 struct quicc_device *VAR_17;
 struct quicc_softc *VAR_18;
 struct resource_list_entry *VAR_19;
 const char *VAR_20;
 rman_res_t VAR_21, VAR_22;
 int VAR_23;

 VAR_18 = FUNC_4(VAR_16);





 VAR_18->sc_rres = FUNC_0(VAR_16, VAR_18->sc_rtype, &VAR_18->sc_rrid,
     VAR_10);
 if (VAR_18->sc_rres == ((void*)0))
  return (VAR_0);

 VAR_22 = FUNC_16(VAR_18->sc_rres);
 VAR_21 = FUNC_15(VAR_18->sc_rres);

 VAR_18->sc_rman.rm_start = VAR_22;
 VAR_18->sc_rman.rm_end = VAR_22 + VAR_21 - 1;
 VAR_18->sc_rman.rm_type = VAR_12;
 VAR_18->sc_rman.rm_descr = "QUICC resources";
 VAR_23 = FUNC_17(&VAR_18->sc_rman);
 if (!VAR_23)
  VAR_23 = FUNC_18(&VAR_18->sc_rman, VAR_22,
      VAR_22 + VAR_21 - 1);
 if (VAR_23) {
  FUNC_1(VAR_16, VAR_18->sc_rtype, VAR_18->sc_rrid,
      VAR_18->sc_rres);
  return (VAR_23);
 }




 VAR_18->sc_irid = 0;
 VAR_18->sc_ires = FUNC_0(VAR_16, VAR_13, &VAR_18->sc_irid,
     VAR_10 | VAR_11);

 if (VAR_18->sc_ires != ((void*)0)) {
  VAR_23 = FUNC_2(VAR_16, VAR_18->sc_ires,
      VAR_2, VAR_15, ((void*)0), VAR_18, &VAR_18->sc_icookie);
  if (VAR_23) {
   VAR_23 = FUNC_2(VAR_16, VAR_18->sc_ires,
       VAR_2 | VAR_1, ((void*)0),
       (driver_intr_t *)VAR_15, VAR_18,
       &VAR_18->sc_icookie);
  } else
   VAR_18->sc_fastintr = 1;
  if (VAR_23) {
   FUNC_6(VAR_16, "could not activate interrupt\n");
   FUNC_1(VAR_16, VAR_13, VAR_18->sc_irid,
       VAR_18->sc_ires);
   VAR_18->sc_ires = ((void*)0);
  }
 }

 if (VAR_18->sc_ires == ((void*)0))
  VAR_18->sc_polled = 1;

 if (VAR_14 && (VAR_18->sc_fastintr || VAR_18->sc_polled)) {
  VAR_20 = "";
  FUNC_5(VAR_16);
  if (VAR_18->sc_fastintr) {
   FUNC_10("%sfast interrupt", VAR_20);
   VAR_20 = ", ";
  }
  if (VAR_18->sc_polled) {
   FUNC_10("%spolled mode", VAR_20);
   VAR_20 = ", ";
  }
  FUNC_10("\n");
 }

 VAR_18->sc_device = VAR_17 = FUNC_9(sizeof(struct quicc_device), VAR_3,
     VAR_4 | VAR_5);

 VAR_17->qd_devtype = VAR_6;
 VAR_17->qd_rman = &VAR_18->sc_rman;
 FUNC_14(&VAR_17->qd_rlist);

 FUNC_12(&VAR_17->qd_rlist, VAR_18->sc_rtype, 0, VAR_22,
     VAR_22 + VAR_21 - 1, VAR_21);

 FUNC_12(&VAR_17->qd_rlist, VAR_13, 0, 0xf00, 0xf00, 1);
 VAR_19 = FUNC_13(&VAR_17->qd_rlist, VAR_13, 0);
 VAR_19->res = VAR_18->sc_ires;

 VAR_17->qd_dev = FUNC_3(VAR_16, ((void*)0), -1);
 FUNC_8(VAR_17->qd_dev, (void *)VAR_17);
 VAR_23 = FUNC_7(VAR_17->qd_dev);


 FUNC_11(VAR_18->sc_rres, VAR_7, 0x00f00000);


 FUNC_11(VAR_18->sc_rres, VAR_8, ~0);
 FUNC_11(VAR_18->sc_rres, VAR_9, ~0);
 return (VAR_23);
}
