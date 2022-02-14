
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {scalar_t__ nfe_framesize; int nfe_int_task; int nfe_tq; int nfe_irq_status; int nfe_process_limit; int nfe_ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct nfe_softc*,char*) ;
 int FUNC_1 (struct nfe_softc*,int,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nfe_softc*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct nfe_softc*,int ) ;
 int FUNC_4 (struct nfe_softc*) ;
 int FUNC_5 (struct nfe_softc*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nfe_softc*) ;
 int FUNC_10 (struct nfe_softc*) ;
 int FUNC_11 (struct nfe_softc*,int ,int *) ;
 int FUNC_12 (struct nfe_softc*,int ,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct nfe_softc*) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void
FUNC_16(void *VAR_6, int VAR_7)
{
 struct nfe_softc *VAR_8 = VAR_6;
 if_t VAR_9 = VAR_8->nfe_ifp;
 uint32_t VAR_10;
 int VAR_11;

 FUNC_2(VAR_8);

 if ((VAR_10 = FUNC_3(VAR_8, VAR_8->nfe_irq_status)) == 0) {
  FUNC_10(VAR_8);
  FUNC_4(VAR_8);
  return;
 }
 FUNC_5(VAR_8, VAR_8->nfe_irq_status, VAR_10);

 FUNC_1(VAR_8, 5, "nfe_intr: interrupt register %x\n", VAR_10);
 if (VAR_10 & VAR_4) {
  FUNC_3(VAR_8, VAR_5);
  FUNC_5(VAR_8, VAR_5, 0xf);
  FUNC_0(VAR_8, "link state changed\n");
 }

 if ((FUNC_7(VAR_9) & VAR_2) == 0) {
  FUNC_4(VAR_8);
  FUNC_9(VAR_8);
  return;
 }

 VAR_11 = 0;

 if (VAR_8->nfe_framesize > VAR_3 - VAR_0)
  VAR_11 = FUNC_11(VAR_8, VAR_8->nfe_process_limit, ((void*)0));
 else
  VAR_11 = FUNC_12(VAR_8, VAR_8->nfe_process_limit, ((void*)0));

 FUNC_14(VAR_8);

 if (!FUNC_8(VAR_9))
  FUNC_13(VAR_9);

 FUNC_4(VAR_8);

 if (VAR_11 || (FUNC_3(VAR_8, VAR_8->nfe_irq_status) != 0)) {
  FUNC_15(VAR_8->nfe_tq, &VAR_8->nfe_int_task);
  return;
 }


 FUNC_10(VAR_8);
}
