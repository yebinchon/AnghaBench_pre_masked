
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct cas_softc {int sc_rxdptr; TYPE_1__* sc_rxdsoft; int sc_rdmatag; } ;
struct TYPE_2__ {int rxds_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int) ;
 int FUNC_1 (struct cas_softc*,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct cas_softc*,int,size_t) ;
 int FUNC_4 (struct cas_softc*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_6(struct cas_softc *VAR_6, u_int VAR_7)
{

 FUNC_1(VAR_6, VAR_5);

 FUNC_5(VAR_6->sc_rdmatag, VAR_6->sc_rxdsoft[VAR_7].rxds_dmamap,
     VAR_0);
 FUNC_3(VAR_6, VAR_6->sc_rxdptr, VAR_7);
 VAR_6->sc_rxdptr = FUNC_2(VAR_6->sc_rxdptr);







 if ((VAR_6->sc_rxdptr % 4) == 0) {
  FUNC_0(VAR_6, VAR_0 | VAR_1);
  FUNC_4(VAR_6, VAR_4,
      (VAR_6->sc_rxdptr + VAR_2 - 4) & VAR_3);
 }
}
