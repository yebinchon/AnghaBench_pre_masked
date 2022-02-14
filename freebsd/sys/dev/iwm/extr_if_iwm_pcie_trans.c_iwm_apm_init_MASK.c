
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwm_softc {int sc_dev; TYPE_2__* cfg; } ;
struct TYPE_4__ {scalar_t__ device_family; scalar_t__ host_interrupt_operation_mode; TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ pll_cfg_val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (struct iwm_softc*,int ,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct iwm_softc*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct iwm_softc*) ;
 scalar_t__ FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (struct iwm_softc*) ;
 int FUNC_7 (struct iwm_softc*,int ,int ,int ,int) ;
 int FUNC_8 (struct iwm_softc*,int ) ;
 int FUNC_9 (struct iwm_softc*,int ,int ) ;
 int FUNC_10 (struct iwm_softc*,int ,int ) ;
 struct iwm_softc* VAR_23 ;

int
FUNC_11(struct iwm_softc *VAR_24)
{
 int VAR_25 = 0;

 FUNC_1(VAR_24, VAR_18, "iwm apm start\n");


 if (VAR_24->cfg->device_family < VAR_20) {
  FUNC_2(VAR_24, VAR_10,
      VAR_11);
 }





 FUNC_2(VAR_24, VAR_10,
     VAR_12);


 FUNC_2(VAR_24, VAR_8, VAR_9);





 FUNC_2(VAR_24, VAR_16,
     VAR_17);

 FUNC_4(VAR_24);
 FUNC_2(VAR_24, VAR_13, VAR_14);






 if (!FUNC_7(VAR_24, VAR_13,
     VAR_15,
     VAR_15, 25000)) {
  FUNC_3(VAR_24->sc_dev,
      "timeout waiting for clock stabilization\n");
  VAR_25 = VAR_0;
  goto out;
 }

 if (VAR_24->cfg->host_interrupt_operation_mode) {
  if (FUNC_5(VAR_24)) {
   FUNC_8(VAR_24, VAR_21);
   FUNC_8(VAR_24, VAR_21);
   FUNC_6(VAR_24);
  }
  FUNC_9(VAR_24, VAR_21, VAR_22);
  if (FUNC_5(VAR_24)) {
   FUNC_8(VAR_24, VAR_21);
   FUNC_8(VAR_24, VAR_21);
   FUNC_6(VAR_24);
  }
 }
 if (VAR_24->cfg->device_family == VAR_19) {
  if (FUNC_5(VAR_24)) {
   FUNC_10(VAR_24, VAR_1,
       VAR_2);
   FUNC_6(VAR_24);
  }
  FUNC_0(20);


  FUNC_9(VAR_24, VAR_3,
      VAR_4);


  if (FUNC_5(VAR_24)) {
   FUNC_10(VAR_24, VAR_5,
       VAR_6);
   FUNC_6(VAR_24);
  }
 }
 out:
 if (VAR_25)
  FUNC_3(VAR_24->sc_dev, "apm init error %d\n", VAR_25);
 return VAR_25;
}
