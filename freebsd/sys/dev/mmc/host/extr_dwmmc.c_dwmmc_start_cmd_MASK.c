
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_data {int flags; int len; } ;
struct mmc_command {int opcode; int flags; int arg; int mrq; struct mmc_data* data; } ;
struct TYPE_3__ {int clock; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;
struct dwmmc_softc {int hwtype; int flags; scalar_t__ use_pio; scalar_t__ use_auto_stop; int req; TYPE_2__ host; struct mmc_command* curcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
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
 int FUNC_1 (struct dwmmc_softc*,int ,int) ;
 int FUNC_2 (struct dwmmc_softc*,struct mmc_command*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct dwmmc_softc*,int ) ;
 int FUNC_5 (struct dwmmc_softc*,struct mmc_command*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct dwmmc_softc *VAR_32, struct mmc_command *VAR_33)
{
 struct mmc_data *VAR_34;
 uint32_t VAR_35;
 uint32_t VAR_36;

 VAR_32->curcmd = VAR_33;
 VAR_34 = VAR_33->data;

 if ((VAR_32->hwtype & VAR_1) == VAR_2)
  FUNC_4(VAR_32, VAR_32->host.ios.clock);


 VAR_33->mrq = VAR_32->req;



 VAR_36 = VAR_33->opcode;

 FUNC_3("cmd->opcode 0x%08x\n", VAR_33->opcode);

 if (VAR_33->opcode == VAR_13 ||
     VAR_33->opcode == VAR_5 ||
     VAR_33->opcode == VAR_6)
  VAR_36 |= VAR_28;
 else if (VAR_33->opcode != VAR_12 && VAR_34)
  VAR_36 |= VAR_30;


 if (FUNC_0(VAR_33->flags) != VAR_10) {
  VAR_36 |= VAR_23;
  if (VAR_33->flags & VAR_8)
   VAR_36 |= VAR_24;
 }

 if (VAR_33->flags & VAR_9)
  VAR_36 |= VAR_22;




 VAR_36 |= VAR_29;

 if ((VAR_32->flags & VAR_0) == 0) {
  VAR_32->flags |= (VAR_0);
  VAR_36 |= VAR_26;
 }

 if (VAR_34) {
  if ((VAR_33->opcode == VAR_14 ||
       VAR_33->opcode == VAR_7) &&
       VAR_32->use_auto_stop)
   VAR_36 |= VAR_25;

  VAR_36 |= VAR_19;
  if (VAR_34->flags & VAR_3)
   VAR_36 |= VAR_21;
  if (VAR_34->flags & VAR_4)
   VAR_36 |= VAR_20;

  FUNC_1(VAR_32, VAR_31, 0xffffffff);
  FUNC_1(VAR_32, VAR_16, VAR_34->len);
  VAR_35 = (VAR_34->len < VAR_11) ? VAR_34->len : VAR_11;

  FUNC_1(VAR_32, VAR_15, VAR_35);

  if (VAR_32->use_pio) {
   FUNC_5(VAR_32, VAR_33);
  } else {
   FUNC_2(VAR_32, VAR_33);
  }
  FUNC_6();
 }

 FUNC_3("cmdr 0x%08x\n", VAR_36);

 FUNC_1(VAR_32, VAR_18, VAR_33->arg);
 FUNC_6();
 FUNC_1(VAR_32, VAR_17, VAR_36 | VAR_27);
}
