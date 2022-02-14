
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_command {int flags; int opcode; int arg; TYPE_1__* data; int error; } ;
struct jz4780_mmc_softc {int sc_cmdat; scalar_t__ sc_dma_inuse; int sc_intr_wait; int sc_intr_mask; int sc_timeout; int sc_timeoutc; int sc_dev; scalar_t__ sc_intr_seen; scalar_t__ sc_resid; struct mmc_request* sc_req; } ;
typedef int device_t ;
struct TYPE_2__ {int flags; int len; } ;


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
 int FUNC_0 (struct jz4780_mmc_softc*) ;
 int FUNC_1 (struct jz4780_mmc_softc*) ;
 int FUNC_2 (struct jz4780_mmc_softc*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int) ;
 int VAR_32 ;




 int VAR_33 ;
 int FUNC_4 (int *,int,int ,struct jz4780_mmc_softc*) ;
 struct jz4780_mmc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int,int,int,int) ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_7 (struct jz4780_mmc_softc*) ;
 int VAR_36 ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_37, device_t VAR_38, struct mmc_request *VAR_39)
{
 struct jz4780_mmc_softc *VAR_40;
 struct mmc_command *VAR_41;
 uint32_t VAR_42, VAR_43;
 int VAR_44;

 VAR_40 = FUNC_5(VAR_37);
 FUNC_0(VAR_40);
 if (VAR_40->sc_req != ((void*)0)) {
  FUNC_1(VAR_40);
  return (VAR_0);
 }

 VAR_42 = VAR_40->sc_cmdat;
 VAR_43 = VAR_9;


 VAR_41 = VAR_39->cmd;
 switch (FUNC_3(VAR_41->flags)) {
 case 131:
 case 130:
  VAR_42 |= VAR_21;
  break;
 case 129:
  VAR_42 |= VAR_22;
  break;
 case 128:
  VAR_42 |= VAR_23;
  break;
 };
 if (VAR_41->opcode == VAR_31)
  VAR_42 |= VAR_5;
 if (VAR_41->flags & VAR_32) {
  VAR_42 |= VAR_2;
  VAR_43 |= VAR_10;
 }

 VAR_40->sc_req = VAR_39;
 VAR_40->sc_resid = 0;
 VAR_41->error = VAR_30;

 if (VAR_41->data != ((void*)0)) {
  VAR_42 |= VAR_4;
  if (VAR_41->data->flags & VAR_27) {
   VAR_42 |= VAR_1;
   VAR_43 |= VAR_6;
  }
  if (VAR_41->data->flags & VAR_29) {
   VAR_42 |= VAR_26;
   VAR_43 |= VAR_10;
  }
  if (VAR_41->data->flags & VAR_28)
   VAR_42 |= VAR_25;
  else
   VAR_43 |= VAR_7;

  VAR_44 = FUNC_8(VAR_41->data->len, VAR_33);
  FUNC_2(VAR_40, VAR_14, VAR_44);
  FUNC_2(VAR_40, VAR_20, VAR_41->data->len / VAR_44);


  if (VAR_35 == 0)
   FUNC_7(VAR_40);
  if (VAR_40->sc_dma_inuse != 0) {

   VAR_43 |= VAR_8;
  } else {
   VAR_43 |= (VAR_41->data->flags & VAR_29) ?
       VAR_12 : VAR_11;
   FUNC_2(VAR_40, VAR_18, 0);
  }
 }

 VAR_40->sc_intr_seen = 0;
 VAR_40->sc_intr_wait = VAR_43;
 FUNC_2(VAR_40, VAR_19, ~(VAR_40->sc_intr_mask | VAR_43));







 FUNC_2(VAR_40, VAR_13, VAR_41->arg);
 FUNC_2(VAR_40, VAR_15, VAR_41->opcode);
 FUNC_2(VAR_40, VAR_16, VAR_42);

 FUNC_2(VAR_40, VAR_17, VAR_24 | VAR_3);

 FUNC_4(&VAR_40->sc_timeoutc, VAR_40->sc_timeout * VAR_34,
     VAR_36, VAR_40);
 FUNC_1(VAR_40);

 return (0);
}
