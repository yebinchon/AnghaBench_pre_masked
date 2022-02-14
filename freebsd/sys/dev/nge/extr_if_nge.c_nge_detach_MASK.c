
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int * nge_res; int nge_res_id; int nge_res_type; int * nge_irq; int * nge_intrhand; int * nge_miibus; int nge_stat_ch; int nge_flags; struct ifnet* nge_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nge_softc*) ;
 int FUNC_1 (struct nge_softc*) ;
 int FUNC_2 (struct nge_softc*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 struct nge_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct nge_softc*) ;
 int FUNC_14 (struct nge_softc*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_3)
{
 struct nge_softc *VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = FUNC_8(VAR_3);
 VAR_5 = VAR_4->nge_ifp;






 if (FUNC_9(VAR_3)) {
  FUNC_0(VAR_4);
  VAR_4->nge_flags |= VAR_1;
  FUNC_14(VAR_4);
  FUNC_2(VAR_4);
  FUNC_6(&VAR_4->nge_stat_ch);
  if (VAR_5 != ((void*)0))
   FUNC_10(VAR_5);
 }

 if (VAR_4->nge_miibus != ((void*)0)) {
  FUNC_7(VAR_3, VAR_4->nge_miibus);
  VAR_4->nge_miibus = ((void*)0);
 }
 FUNC_3(VAR_3);
 if (VAR_4->nge_intrhand != ((void*)0))
  FUNC_5(VAR_3, VAR_4->nge_irq, VAR_4->nge_intrhand);
 if (VAR_4->nge_irq != ((void*)0))
  FUNC_4(VAR_3, VAR_2, 0, VAR_4->nge_irq);
 if (VAR_4->nge_res != ((void*)0))
  FUNC_4(VAR_3, VAR_4->nge_res_type, VAR_4->nge_res_id,
      VAR_4->nge_res);

 FUNC_13(VAR_4);
 if (VAR_5 != ((void*)0))
  FUNC_12(VAR_5);

 FUNC_1(VAR_4);

 return (0);
}
