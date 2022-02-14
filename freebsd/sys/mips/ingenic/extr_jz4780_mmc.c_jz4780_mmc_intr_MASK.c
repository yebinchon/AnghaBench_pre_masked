
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_data {int len; } ;
struct jz4780_mmc_softc {int sc_dma_inuse; int sc_intr_seen; int sc_resid; int sc_intr_wait; TYPE_2__* sc_req; int sc_dev; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {struct mmc_data* data; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jz4780_mmc_softc*) ;
 int FUNC_1 (struct jz4780_mmc_softc*,int ) ;
 int FUNC_2 (struct jz4780_mmc_softc*) ;
 int FUNC_3 (struct jz4780_mmc_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct jz4780_mmc_softc*,struct mmc_data*) ;
 int FUNC_6 (struct jz4780_mmc_softc*) ;
 int FUNC_7 (struct jz4780_mmc_softc*) ;
 int FUNC_8 (struct jz4780_mmc_softc*) ;
 int FUNC_9 (struct jz4780_mmc_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_16)
{
 struct jz4780_mmc_softc *VAR_17;
 struct mmc_data *VAR_18;
 uint32_t VAR_19;

 VAR_17 = (struct jz4780_mmc_softc *)VAR_16;
 FUNC_0(VAR_17);
 VAR_19 = FUNC_1(VAR_17, VAR_11);
 if (VAR_17->sc_req == ((void*)0)) {
  FUNC_4(VAR_17->sc_dev,
      "Spurious interrupt - no active request, rint: 0x%08X\n",
      VAR_19);
  goto end;
 }
 if (VAR_19 & VAR_12) {




  if (VAR_19 & (VAR_4 | VAR_3))
   VAR_17->sc_req->cmd->error = VAR_15;
  else
   VAR_17->sc_req->cmd->error = VAR_14;
  FUNC_7(VAR_17);
  goto end;
 }
 VAR_18 = VAR_17->sc_req->cmd->data;

 if (VAR_19 & VAR_1) {
  FUNC_6(VAR_17);
  if (VAR_17->sc_dma_inuse == 1)
   FUNC_9(VAR_17);
 }
 if (VAR_18 != ((void*)0)) {
  if (VAR_17->sc_dma_inuse == 1 && (VAR_19 & VAR_0))
   VAR_17->sc_resid = VAR_18->len >> 2;
  else if (VAR_17->sc_dma_inuse == 0 &&
      (VAR_19 & (VAR_5 | VAR_2)))
   FUNC_5(VAR_17, VAR_18);
 }
 VAR_17->sc_intr_seen |= VAR_19;
 if ((VAR_17->sc_intr_seen & VAR_17->sc_intr_wait) == VAR_17->sc_intr_wait)
  FUNC_8(VAR_17);
end:
 FUNC_3(VAR_17, VAR_11, VAR_19);
 FUNC_2(VAR_17);
}
