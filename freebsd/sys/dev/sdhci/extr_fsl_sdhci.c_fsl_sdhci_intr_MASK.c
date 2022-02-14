
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mtx; } ;
struct fsl_sdhci_softc {int r1bfix_type; TYPE_1__ slot; int mem_res; scalar_t__ r1bfix_timeout_at; } ;


 int VAR_0 ;


 int FUNC_0 (struct fsl_sdhci_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fsl_sdhci_softc*,int ,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct fsl_sdhci_softc*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct fsl_sdhci_softc *VAR_6 = VAR_5;
 uint32_t VAR_7;

 FUNC_5(&VAR_6->slot.mtx);
 switch (VAR_6->r1bfix_type) {
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_4) & VAR_3;
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_6, VAR_4) & VAR_2;
  break;
 default:
  VAR_7 = 0;
  break;
 }
 if (VAR_7) {
  VAR_6->r1bfix_timeout_at = FUNC_4() + 250 * VAR_1;
  if (!FUNC_3(VAR_6)) {
   FUNC_1(VAR_6, VAR_4, VAR_7);
   FUNC_2(VAR_6->mem_res, VAR_4, 4,
       VAR_0);
  }
 }

 FUNC_6(&VAR_6->slot.mtx);
 FUNC_7(&VAR_6->slot);
}
