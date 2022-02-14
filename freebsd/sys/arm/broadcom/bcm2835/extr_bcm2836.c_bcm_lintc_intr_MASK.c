
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct trapframe {int dummy; } ;
struct bcm_lintc_softc {int bls_dev; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
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
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bcm_lintc_softc*,int ,struct trapframe*) ;
 int FUNC_4 (struct bcm_lintc_softc*,int ,struct trapframe*) ;
 int FUNC_5 (struct bcm_lintc_softc*,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(void *VAR_18)
{
 struct bcm_lintc_softc *VAR_19;
 u_int VAR_20;
 uint32_t VAR_21, VAR_22;
 struct trapframe *VAR_23;

 VAR_19 = VAR_18;
 VAR_20 = FUNC_1(VAR_16);
 VAR_23 = VAR_17->td_intr_frame;

 for (VAR_21 = 0; ; VAR_21++) {
  VAR_22 = FUNC_5(VAR_19, FUNC_0(VAR_20));
  if ((VAR_22 & VAR_3) == 0)
   break;




  if (VAR_22 & VAR_7)
   FUNC_4(VAR_19, VAR_6, VAR_23);
  if (VAR_22 & VAR_9)
   FUNC_4(VAR_19, VAR_8, VAR_23);
  if (VAR_22 & VAR_11)
   FUNC_4(VAR_19, VAR_10, VAR_23);
  if (VAR_22 & VAR_13)
   FUNC_4(VAR_19, VAR_12, VAR_23);
  if (VAR_22 & VAR_1)
   FUNC_4(VAR_19, VAR_0, VAR_23);
  if (VAR_22 & VAR_5)
   FUNC_4(VAR_19, VAR_4, VAR_23);

  FUNC_2(0);
 }
 VAR_22 &= ~VAR_3;
 if (VAR_22 != 0)
  FUNC_6(VAR_19->bls_dev, "Unknown interrupt(s) %x\n", VAR_22);
 else if (VAR_21 == 0 && VAR_15)
  FUNC_6(VAR_19->bls_dev, "Spurious interrupt detected\n");

 return (VAR_14);
}
