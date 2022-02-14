
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nfe_softc {int nfe_flags; scalar_t__ nfe_msi; scalar_t__ nfe_msix; int nfe_mtx; int * nfe_parent_tag; int jrxq; int rxq; int txq; int ** nfe_res; int * nfe_msix_res; int * nfe_msix_pba_res; int ** nfe_irq; int ** nfe_intrhand; int * nfe_tq; int nfe_int_task; scalar_t__ nfe_miibus; int * eaddr; int nfe_stat_ch; int * nfe_ifp; } ;
typedef int * if_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct nfe_softc*) ;
 int VAR_4 ;
 int FUNC_2 (struct nfe_softc*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__) ;
 struct nfe_softc* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct nfe_softc*,int *) ;
 int FUNC_21 (struct nfe_softc*,int *) ;
 int FUNC_22 (struct nfe_softc*,int *) ;
 int FUNC_23 (struct nfe_softc*,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_7)
{
 struct nfe_softc *VAR_8;
 if_t VAR_9;
 uint8_t VAR_10[VAR_0];
 int VAR_11, VAR_12;

 VAR_8 = FUNC_11(VAR_7);
 FUNC_0(FUNC_19(&VAR_8->nfe_mtx), ("nfe mutex not initialized"));
 VAR_9 = VAR_8->nfe_ifp;





 if (FUNC_12(VAR_7)) {
  FUNC_1(VAR_8);
  FUNC_24(VAR_9);
  FUNC_17(VAR_9, 0, VAR_2);
  FUNC_2(VAR_8);
  FUNC_9(&VAR_8->nfe_stat_ch);
  FUNC_13(VAR_9);
 }

 if (VAR_9) {

  if ((VAR_8->nfe_flags & VAR_3) == 0) {
   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    VAR_10[VAR_11] = VAR_8->eaddr[5 - VAR_11];
   }
  } else
   FUNC_4(VAR_8->eaddr, VAR_10, VAR_0);
  FUNC_23(VAR_8, VAR_10);
  FUNC_15(VAR_9);
 }
 if (VAR_8->nfe_miibus)
  FUNC_10(VAR_7, VAR_8->nfe_miibus);
 FUNC_6(VAR_7);
 if (VAR_8->nfe_tq != ((void*)0)) {
  FUNC_26(VAR_8->nfe_tq, &VAR_8->nfe_int_task);
  FUNC_27(VAR_8->nfe_tq);
  VAR_8->nfe_tq = ((void*)0);
 }

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_8->nfe_intrhand[VAR_11] != ((void*)0)) {
   FUNC_8(VAR_7, VAR_8->nfe_irq[VAR_11],
       VAR_8->nfe_intrhand[VAR_11]);
   VAR_8->nfe_intrhand[VAR_11] = ((void*)0);
  }
 }

 if (VAR_8->nfe_msi == 0 && VAR_8->nfe_msix == 0) {
  if (VAR_8->nfe_irq[0] != ((void*)0))
   FUNC_7(VAR_7, VAR_5, 0,
       VAR_8->nfe_irq[0]);
 } else {
  for (VAR_11 = 0, VAR_12 = 1; VAR_11 < VAR_4; VAR_11++, VAR_12++) {
   if (VAR_8->nfe_irq[VAR_11] != ((void*)0)) {
    FUNC_7(VAR_7, VAR_5, VAR_12,
        VAR_8->nfe_irq[VAR_11]);
    VAR_8->nfe_irq[VAR_11] = ((void*)0);
   }
  }
  FUNC_25(VAR_7);
 }
 if (VAR_8->nfe_msix_pba_res != ((void*)0)) {
  FUNC_7(VAR_7, VAR_6, FUNC_3(3),
      VAR_8->nfe_msix_pba_res);
  VAR_8->nfe_msix_pba_res = ((void*)0);
 }
 if (VAR_8->nfe_msix_res != ((void*)0)) {
  FUNC_7(VAR_7, VAR_6, FUNC_3(2),
      VAR_8->nfe_msix_res);
  VAR_8->nfe_msix_res = ((void*)0);
 }
 if (VAR_8->nfe_res[0] != ((void*)0)) {
  FUNC_7(VAR_7, VAR_6, FUNC_3(0),
      VAR_8->nfe_res[0]);
  VAR_8->nfe_res[0] = ((void*)0);
 }

 FUNC_22(VAR_8, &VAR_8->txq);
 FUNC_21(VAR_8, &VAR_8->rxq);
 FUNC_20(VAR_8, &VAR_8->jrxq);

 if (VAR_8->nfe_parent_tag) {
  FUNC_5(VAR_8->nfe_parent_tag);
  VAR_8->nfe_parent_tag = ((void*)0);
 }

 FUNC_18(&VAR_8->nfe_mtx);

 return (0);
}
