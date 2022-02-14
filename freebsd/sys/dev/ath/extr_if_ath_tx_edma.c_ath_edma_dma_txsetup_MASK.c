
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dd_desc_paddr; scalar_t__ dd_desc; } ;
struct ath_softc {TYPE_1__ sc_txsdma; int sc_ah; int sc_tx_statuslen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_softc*,TYPE_1__*,int *,char*,int ,int ) ;
 int FUNC_1 (struct ath_softc*,int) ;
 int FUNC_2 (int ,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ath_softc *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->sc_txsdma,
     ((void*)0), "txcomp", VAR_2->sc_tx_statuslen, VAR_0);
 if (VAR_3 != 0)
  return (VAR_3);

 FUNC_2(VAR_2->sc_ah,
     (void *) VAR_2->sc_txsdma.dd_desc,
     VAR_2->sc_txsdma.dd_desc_paddr,
     VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(VAR_2, VAR_4);
 }

 return (0);
}
