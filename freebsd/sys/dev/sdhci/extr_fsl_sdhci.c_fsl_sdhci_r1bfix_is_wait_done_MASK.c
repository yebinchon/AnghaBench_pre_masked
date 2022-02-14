
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mtx; } ;
struct fsl_sdhci_softc {scalar_t__ r1bfix_timeout_at; scalar_t__ r1bfix_type; int r1bfix_intmask; int r1bfix_callout; TYPE_1__ slot; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fsl_sdhci_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,int ,int ,struct fsl_sdhci_softc*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_4(struct fsl_sdhci_softc *VAR_11)
{
 uint32_t VAR_12;

 FUNC_3(&VAR_11->slot.mtx, VAR_0);
 VAR_12 = FUNC_0(VAR_11, VAR_9) & (VAR_8 | VAR_7);

 if (VAR_12 && FUNC_2() < VAR_11->r1bfix_timeout_at) {
  FUNC_1(&VAR_11->r1bfix_callout, VAR_3, 0,
      VAR_10, VAR_11, 0);
  return (0);
 }
 if (VAR_12)
  VAR_11->r1bfix_intmask |= VAR_5;
 else {
  VAR_11->r1bfix_intmask |= VAR_4;
  if (VAR_11->r1bfix_type == VAR_1)
   VAR_11->r1bfix_intmask |= VAR_6;
 }

 VAR_11->r1bfix_type = VAR_2;
 return (1);
}
